
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct badblocks {int shift; int count; int changed; int unacked_exist; int lock; int * page; } ;
typedef int sector_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int,int) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct badblocks *VAR_2, sector_t VAR_3, int VAR_4,
       int VAR_5)
{
 u64 *VAR_6;
 int VAR_7, VAR_8;
 int VAR_9 = 1;

 if (VAR_2->shift < 0)

  return 0;

 if (VAR_2->shift) {

  sector_t VAR_10 = VAR_3 + VAR_4;
  VAR_3 >>= VAR_2->shift;
  VAR_10 += (1<<VAR_2->shift) - 1;
  VAR_10 >>= VAR_2->shift;
  VAR_4 = VAR_10 - VAR_3;
 }

 FUNC_5(&VAR_2->lock);

 VAR_6 = VAR_2->page;
 VAR_7 = 0;
 VAR_8 = VAR_2->count;

 while (VAR_8 - VAR_7 > 1) {
  int VAR_11 = (VAR_7 + VAR_8) / 2;
  sector_t VAR_12 = FUNC_3(VAR_6[VAR_11]);
  if (VAR_12 <= VAR_3)
   VAR_7 = VAR_11;
  else
   VAR_8 = VAR_11;
 }
 if (VAR_8 > VAR_7 && FUNC_3(VAR_6[VAR_7]) > VAR_3)
  VAR_8 = VAR_7;

 if (VAR_8 > VAR_7) {



  sector_t VAR_13 = FUNC_3(VAR_6[VAR_7]);
  sector_t VAR_14 = VAR_13 + FUNC_1(VAR_6[VAR_7]);
  int VAR_15 = FUNC_0(VAR_6[VAR_7]);
  if (VAR_14 >= VAR_3) {

   if (VAR_3 == VAR_13 && VAR_3 + VAR_4 >= VAR_14)

    VAR_15 = VAR_5;
   else
    VAR_15 = VAR_15 && VAR_5;

   if (VAR_14 < VAR_3 + VAR_4)
    VAR_14 = VAR_3 + VAR_4;
   if (VAR_14 - VAR_13 <= VAR_0) {
    VAR_6[VAR_7] = FUNC_2(VAR_13, VAR_14-VAR_13, VAR_15);
    VAR_3 = VAR_14;
   } else {



    if (FUNC_1(VAR_6[VAR_7]) != VAR_0)
     VAR_6[VAR_7] = FUNC_2(VAR_13, VAR_0, VAR_15);
    VAR_3 = VAR_13 + VAR_0;
   }
   VAR_4 = VAR_14 - VAR_3;
  }
 }
 if (VAR_4 && VAR_8 < VAR_2->count) {


  sector_t VAR_16 = FUNC_3(VAR_6[VAR_8]);
  sector_t VAR_17 = VAR_16 + FUNC_1(VAR_6[VAR_8]);
  int VAR_18 = FUNC_0(VAR_6[VAR_8]);
  if (VAR_16 <= VAR_3 + VAR_4) {

   if (VAR_17 <= VAR_3 + VAR_4) {

    VAR_17 = VAR_3 + VAR_4;
    VAR_18 = VAR_5;
   } else
    VAR_18 = VAR_18 && VAR_5;

   VAR_16 = VAR_3;
   if (VAR_17 - VAR_16 <= VAR_0) {
    VAR_6[VAR_8] = FUNC_2(VAR_16, VAR_17-VAR_16, VAR_18);
    VAR_3 = VAR_17;
   } else {
    VAR_6[VAR_8] = FUNC_2(VAR_16, VAR_0, VAR_18);
    VAR_3 = VAR_16 + VAR_0;
   }
   VAR_4 = VAR_17 - VAR_3;
   VAR_7 = VAR_8;
   VAR_8++;
  }
 }
 if (VAR_4 == 0 && VAR_8 < VAR_2->count) {


  sector_t VAR_19 = FUNC_3(VAR_6[VAR_8]);
  int VAR_20 = FUNC_1(VAR_6[VAR_7]);
  int VAR_21 = FUNC_1(VAR_6[VAR_8]);
  int VAR_22 = VAR_20 + VAR_21 - (VAR_3 - VAR_19);
  if (VAR_3 >= VAR_19 && VAR_22 < VAR_0) {

   int VAR_23 = FUNC_0(VAR_6[VAR_7]) && FUNC_0(VAR_6[VAR_8]);
   VAR_6[VAR_7] = FUNC_2(FUNC_3(VAR_6[VAR_7]), VAR_22, VAR_23);
   FUNC_4(VAR_6 + VAR_8, VAR_6 + VAR_8 + 1,
    (VAR_2->count - VAR_8 - 1) * 8);
   VAR_2->count--;
  }
 }
 while (VAR_4) {


  if (VAR_2->count >= VAR_1) {

   VAR_9 = 0;
   break;
  } else {
   int VAR_24 = VAR_4;
   FUNC_4(VAR_6 + VAR_8 + 1, VAR_6 + VAR_8,
    (VAR_2->count - VAR_8) * 8);
   VAR_2->count++;

   if (VAR_24 > VAR_0)
    VAR_24 = VAR_0;
   VAR_6[VAR_8] = FUNC_2(VAR_3, VAR_24, VAR_5);
   VAR_4 -= VAR_24;
   VAR_3 += VAR_24;
  }
 }

 VAR_2->changed = 1;
 if (!VAR_5)
  VAR_2->unacked_exist = 1;
 FUNC_6(&VAR_2->lock);

 return VAR_9;
}
