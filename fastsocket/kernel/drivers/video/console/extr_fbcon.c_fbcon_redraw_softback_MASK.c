
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned short u16 ;
struct vc_data {int vc_rows; long vc_size_row; scalar_t__ vc_origin; } ;
struct display {int dummy; } ;


 unsigned short* FUNC_0 (unsigned short*,int) ;
 int FUNC_1 (struct vc_data*,unsigned short*,int,int,int) ;
 unsigned short FUNC_2 (unsigned short*) ;
 unsigned long VAR_0 ;
 long VAR_1 ;
 unsigned long VAR_2 ;
 long VAR_3 ;
 scalar_t__ VAR_4 ;
 long VAR_5 ;

__attribute__((used)) static void FUNC_3(struct vc_data *VAR_6, struct display *VAR_7,
      long VAR_8)
{
 int VAR_9 = VAR_6->vc_rows;
 unsigned short *VAR_10, *VAR_11;
 unsigned long VAR_12;
 int VAR_13 = 0;

 VAR_10 = (u16 *) VAR_1;
 if (VAR_10 == (u16 *) VAR_3)
  VAR_10 = (u16 *) VAR_6->vc_origin;
 VAR_12 = VAR_1 + VAR_8 * VAR_6->vc_size_row;
 VAR_4 -= VAR_8;
 if (VAR_8 < 0) {
  if (VAR_1 < VAR_5 && VAR_12 < VAR_0) {
   VAR_12 += VAR_2 - VAR_0;
   if (VAR_12 < VAR_5) {
    VAR_4 -=
        (VAR_5 - VAR_12) / VAR_6->vc_size_row;
    VAR_12 = VAR_5;
   }
  } else if (VAR_1 >= VAR_5
      && VAR_12 < VAR_5) {
   VAR_4 -=
       (VAR_5 - VAR_12) / VAR_6->vc_size_row;
   VAR_12 = VAR_5;
  }
 } else {
  if (VAR_1 > VAR_3 && VAR_12 >= VAR_2) {
   VAR_12 += VAR_0 - VAR_2;
   if (VAR_12 > VAR_3) {
    VAR_12 = VAR_3;
    VAR_4 = 0;
   }
  } else if (VAR_1 <= VAR_3 && VAR_12 > VAR_3) {
   VAR_12 = VAR_3;
   VAR_4 = 0;
  }
 }
 if (VAR_12 == VAR_1)
  return;
 VAR_1 = VAR_12;
 VAR_11 = (u16 *) VAR_1;
 if (VAR_11 == (u16 *) VAR_3)
  VAR_11 = (u16 *) VAR_6->vc_origin;
 while (VAR_9--) {
  unsigned short *VAR_14;
  unsigned short *VAR_15;
  unsigned short VAR_16;
  int VAR_17 = 0;
  unsigned short VAR_18 = 1;

  VAR_14 = VAR_11;
  VAR_15 = FUNC_0(VAR_11, 1);
  do {
   VAR_16 = FUNC_2(VAR_11);
   if (VAR_18 != (VAR_16 & 0xff00)) {
    VAR_18 = VAR_16 & 0xff00;
    if (VAR_11 > VAR_14) {
     FUNC_1(VAR_6, VAR_14, VAR_11 - VAR_14,
          VAR_13, VAR_17);
     VAR_17 += VAR_11 - VAR_14;
     VAR_14 = VAR_11;
    }
   }
   if (VAR_16 == FUNC_2(VAR_10)) {
    if (VAR_11 > VAR_14) {
     FUNC_1(VAR_6, VAR_14, VAR_11 - VAR_14,
          VAR_13, VAR_17);
     VAR_17 += VAR_11 - VAR_14 + 1;
     VAR_14 = VAR_11 + 1;
    } else {
     VAR_17++;
     VAR_14++;
    }
   }
   VAR_11++;
   VAR_10++;
  } while (VAR_11 < VAR_15);
  if (VAR_11 > VAR_14)
   FUNC_1(VAR_6, VAR_14, VAR_11 - VAR_14, VAR_13, VAR_17);
  VAR_13++;
  if (VAR_10 == (u16 *) VAR_2)
   VAR_10 = (u16 *) VAR_0;
  if (VAR_10 == (u16 *) VAR_3)
   VAR_10 = (u16 *) VAR_6->vc_origin;
  if (VAR_11 == (u16 *) VAR_2)
   VAR_11 = (u16 *) VAR_0;
  if (VAR_11 == (u16 *) VAR_3)
   VAR_11 = (u16 *) VAR_6->vc_origin;
 }
}
