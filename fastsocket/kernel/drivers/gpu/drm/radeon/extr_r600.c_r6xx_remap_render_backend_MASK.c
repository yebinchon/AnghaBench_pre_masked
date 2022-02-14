
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {scalar_t__ family; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;

u32 FUNC_2(struct radeon_device *VAR_1,
         u32 VAR_2,
         u32 VAR_3,
         u32 VAR_4,
         u32 VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8;
 u32 VAR_9, VAR_10, VAR_11;
 u32 VAR_12 = 0, VAR_13 = 1 << (VAR_3 - 1);
 unsigned VAR_14, VAR_15;


 VAR_11 = VAR_5 | ((0xff << VAR_3) & 0xff);

 if ((VAR_11 & 0xff) != 0xff)
  VAR_5 = VAR_11;

 VAR_6 = 1 << VAR_2;
 VAR_8 = VAR_4 - FUNC_1(VAR_5);
 FUNC_0(VAR_6 < VAR_8);

 VAR_9 = VAR_6 / VAR_8;
 VAR_10 = VAR_6 - VAR_9 * VAR_8;

 if (VAR_1->family <= VAR_0) {

  VAR_7 = 2;
 } else {

  VAR_7 = 4;
 }

 for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++) {
  if (!(VAR_13 & VAR_5)) {
   for (VAR_15 = 0; VAR_15 < VAR_9; VAR_15++) {
    VAR_12 <<= VAR_7;
    VAR_12 |= VAR_3 - VAR_14 - 1;
   }
   if (VAR_10) {
    VAR_12 <<= VAR_7;
    VAR_12 |= VAR_3 - VAR_14 - 1;
    VAR_10--;
   }
  }
  VAR_13 >>= 1;
 }

 return VAR_12;
}
