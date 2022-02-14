
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mtrr_type ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 unsigned char FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned int,unsigned char) ;

__attribute__((used)) static void
FUNC_4(unsigned int VAR_8, unsigned long *VAR_9,
       unsigned long *VAR_10, mtrr_type * VAR_11)
{
 unsigned char VAR_12, VAR_13, VAR_14, VAR_15;
 unsigned long VAR_16;

 VAR_12 = VAR_0 + (VAR_8 << 1) + VAR_8;

 FUNC_2(VAR_16);

 VAR_13 = FUNC_0(VAR_1);
 FUNC_3(VAR_1, (VAR_13 & 0x0f) | 0x10);
 ((unsigned char *)VAR_9)[3] = FUNC_0(VAR_12);
 ((unsigned char *)VAR_9)[2] = FUNC_0(VAR_12 + 1);
 ((unsigned char *)VAR_9)[1] = FUNC_0(VAR_12 + 2);
 VAR_14 = FUNC_0(VAR_2 + VAR_8);
 FUNC_3(VAR_1, VAR_13);

 FUNC_1(VAR_16);

 VAR_15 = ((unsigned char *) VAR_9)[1] & 0x0f;
 *VAR_9 >>= VAR_7;





 if (VAR_15)
  *VAR_10 = (VAR_8 < 7 ? 0x1UL : 0x40UL) << (VAR_15 - 1);
 else
  *VAR_10 = 0;


 if (VAR_8 < 7) {
  switch (VAR_14) {
  case 1:
   *VAR_11 = VAR_3;
   break;
  case 8:
   *VAR_11 = VAR_4;
   break;
  case 9:
   *VAR_11 = VAR_5;
   break;
  case 24:
  default:
   *VAR_11 = VAR_6;
   break;
  }
 } else {
  switch (VAR_14) {
  case 0:
   *VAR_11 = VAR_3;
   break;
  case 8:
   *VAR_11 = VAR_5;
   break;
  case 9:
   *VAR_11 = VAR_4;
   break;
  case 25:
  default:
   *VAR_11 = VAR_6;
   break;
  }
 }
}
