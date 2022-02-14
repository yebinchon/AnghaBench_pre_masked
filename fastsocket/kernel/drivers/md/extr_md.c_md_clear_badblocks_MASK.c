
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct badblocks {int shift; int count; int changed; int lock; int * page; } ;
typedef int sector_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct badblocks *VAR_1, sector_t VAR_2, int VAR_3)
{
 u64 *VAR_4;
 int VAR_5, VAR_6;
 sector_t VAR_7 = VAR_2 + VAR_3;
 int VAR_8 = 0;

 if (VAR_1->shift > 0) {






  VAR_2 += (1<<VAR_1->shift) - 1;
  VAR_2 >>= VAR_1->shift;
  VAR_7 >>= VAR_1->shift;
  VAR_3 = VAR_7 - VAR_2;
 }

 FUNC_5(&VAR_1->lock);

 VAR_4 = VAR_1->page;
 VAR_5 = 0;
 VAR_6 = VAR_1->count;

 while (VAR_6 - VAR_5 > 1) {
  int VAR_9 = (VAR_5 + VAR_6) / 2;
  sector_t VAR_10 = FUNC_3(VAR_4[VAR_9]);
  if (VAR_10 < VAR_7)
   VAR_5 = VAR_9;
  else
   VAR_6 = VAR_9;
 }
 if (VAR_6 > VAR_5) {




  if (FUNC_3(VAR_4[VAR_5]) + FUNC_1(VAR_4[VAR_5]) > VAR_7) {

   int VAR_11 = FUNC_0(VAR_4[VAR_5]);
   sector_t VAR_12 = FUNC_3(VAR_4[VAR_5]);
   sector_t VAR_13 = VAR_12 + FUNC_1(VAR_4[VAR_5]);

   if (VAR_12 < VAR_2) {

    if (VAR_1->count >= VAR_0) {
     VAR_8 = 0;
     goto out;
    }
    FUNC_4(VAR_4+VAR_5+1, VAR_4+VAR_5, (VAR_1->count - VAR_5) * 8);
    VAR_1->count++;
    VAR_4[VAR_5] = FUNC_2(VAR_12, VAR_2-VAR_12, VAR_11);
    VAR_5++;
   }
   VAR_4[VAR_5] = FUNC_2(VAR_7, VAR_13 - VAR_7, VAR_11);

   VAR_6 = VAR_5;
   VAR_5--;
  }
  while (VAR_5 >= 0 &&
         FUNC_3(VAR_4[VAR_5]) + FUNC_1(VAR_4[VAR_5]) > VAR_2) {

   if (FUNC_3(VAR_4[VAR_5]) < VAR_2) {

    int VAR_14 = FUNC_0(VAR_4[VAR_5]);
    sector_t VAR_15 = FUNC_3(VAR_4[VAR_5]);
    VAR_4[VAR_5] = FUNC_2(VAR_15, VAR_2 - VAR_15, VAR_14);

    break;
   }
   VAR_5--;
  }



  if (VAR_6 - VAR_5 > 1) {
   FUNC_4(VAR_4+VAR_5+1, VAR_4+VAR_6, (VAR_1->count - VAR_6) * 8);
   VAR_1->count -= (VAR_6 - VAR_5 - 1);
  }
 }

 VAR_1->changed = 1;
out:
 FUNC_6(&VAR_1->lock);
 return VAR_8;
}
