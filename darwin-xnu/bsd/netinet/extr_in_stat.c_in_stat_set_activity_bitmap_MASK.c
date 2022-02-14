
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u_int64_t ;
struct TYPE_3__ {scalar_t__ start; int* bitmap; } ;
typedef TYPE_1__ activity_bitmap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_0(activity_bitmap_t *VAR_5, uint64_t VAR_6)
{
 uint64_t VAR_7, VAR_8;
 uint64_t *VAR_9;
 if (VAR_5->start == 0)
  VAR_5->start = VAR_6;
 VAR_7 = VAR_6 - VAR_5->start;

 VAR_8 = VAR_7 >> VAR_2;
 if (VAR_8 < VAR_1) {
  if (VAR_8 < VAR_0) {
   VAR_9 = &VAR_5->bitmap[0];
  } else {
   VAR_9 = &VAR_5->bitmap[1];
   VAR_8 -= VAR_0;
  }
  *VAR_9 |= (((u_int64_t) 1) << VAR_8);
 } else {
  if (VAR_8 >= (VAR_1 * 2)) {
   VAR_5->start = VAR_6 - VAR_3;
   VAR_5->bitmap[0] = VAR_5->bitmap[1] = 0;
  } else {
   uint64_t VAR_10 =
       VAR_8 - (VAR_1 - 1);




   VAR_5->start +=
       (VAR_10 << VAR_2);
   if (VAR_10 > VAR_0) {
    VAR_5->bitmap[0] = VAR_5->bitmap[1];
    VAR_5->bitmap[1] = 0;
    VAR_10 -= VAR_0;
    if (VAR_10 == VAR_0)
     VAR_5->bitmap[0] = 0;
    else
     VAR_5->bitmap[0] >>= VAR_10;
   } else {
    uint64_t VAR_11, VAR_12;
    uint64_t VAR_13, VAR_14;





    VAR_12 = (((uint64_t)1) << (VAR_10 - 1));
    VAR_11 = ((VAR_12 - 1) ^ VAR_12);
    VAR_5->bitmap[0] >>= VAR_10;
    VAR_13 = (VAR_5->bitmap[1] & VAR_11);

    VAR_14 = (VAR_13 <<
        (VAR_0 -
         VAR_10));
    VAR_5->bitmap[0] |= VAR_14;
    VAR_5->bitmap[1] >>= VAR_10;
   }
  }
  VAR_5->bitmap[1] |= VAR_4;
 }
}
