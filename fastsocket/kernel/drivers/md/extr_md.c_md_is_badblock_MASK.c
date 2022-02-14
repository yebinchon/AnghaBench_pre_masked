
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct badblocks {int shift; int count; int lock; int * page; } ;
typedef int sector_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,unsigned int) ;

int FUNC_5(struct badblocks *VAR_0, sector_t VAR_1, int VAR_2,
     sector_t *VAR_3, int *VAR_4)
{
 int VAR_5;
 int VAR_6;
 u64 *VAR_7 = VAR_0->page;
 int VAR_8;
 sector_t VAR_9 = VAR_1 + VAR_2;
 unsigned VAR_10;

 if (VAR_0->shift > 0) {

  VAR_1 >>= VAR_0->shift;
  VAR_9 += (1<<VAR_0->shift) - 1;
  VAR_9 >>= VAR_0->shift;
  VAR_2 = VAR_9 - VAR_1;
 }


retry:
 VAR_10 = FUNC_3(&VAR_0->lock);
 VAR_6 = 0;
 VAR_8 = 0;
 VAR_5 = VAR_0->count;
 while (VAR_5 - VAR_6 > 1) {
  int VAR_11 = (VAR_6 + VAR_5) / 2;
  sector_t VAR_12 = FUNC_2(VAR_7[VAR_11]);
  if (VAR_12 < VAR_9)


   VAR_6 = VAR_11;
  else

   VAR_5 = VAR_11;
 }

 if (VAR_5 > VAR_6) {



  while (VAR_6 >= 0 &&
         FUNC_2(VAR_7[VAR_6]) + FUNC_1(VAR_7[VAR_6]) > VAR_1) {
   if (FUNC_2(VAR_7[VAR_6]) < VAR_9) {



    if (VAR_8 != -1 && FUNC_0(VAR_7[VAR_6]))
     VAR_8 = 1;
    else
     VAR_8 = -1;
    *VAR_3 = FUNC_2(VAR_7[VAR_6]);
    *VAR_4 = FUNC_1(VAR_7[VAR_6]);
   }
   VAR_6--;
  }
 }

 if (FUNC_4(&VAR_0->lock, VAR_10))
  goto retry;

 return VAR_8;
}
