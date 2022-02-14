
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int float32 ;


 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 char FUNC_2 (int ) ;
 int FUNC_3 (unsigned int,int*,unsigned int*) ;
 int FUNC_4 (char,int ,int ) ;
 int FUNC_5 (char,int,unsigned int) ;
 int FUNC_6 (unsigned long long,int,unsigned long long*) ;

float32 FUNC_7(float32 VAR_0, float32 VAR_1)
{
 char VAR_2, VAR_3, VAR_4;
 int VAR_5, VAR_6, VAR_7;
 unsigned int VAR_8, VAR_9;
 unsigned long long VAR_10;
 unsigned int VAR_11;

 VAR_8 = FUNC_1(VAR_0);
 VAR_5 = FUNC_0(VAR_0);
 VAR_2 = FUNC_2(VAR_0);
 VAR_9 = FUNC_1(VAR_1);
 VAR_6 = FUNC_0(VAR_1);
 VAR_3 = FUNC_2(VAR_1);
 VAR_4 = VAR_2 ^ VAR_3;
 if (VAR_5 == 0) {
  if (VAR_8 == 0)
   return FUNC_4(VAR_4, 0, 0);
  FUNC_3(VAR_8, &VAR_5, &VAR_8);
 }
 if (VAR_6 == 0) {
  if (VAR_9 == 0)
   return FUNC_4(VAR_4, 0, 0);
  FUNC_3(VAR_9, &VAR_6, &VAR_9);
 }
 if ((VAR_6 == 0xff && VAR_9 == 0) || (VAR_5 == 0xff && VAR_8 == 0))
  return FUNC_5(VAR_4, 0xff, 0);

 VAR_7 = VAR_5 + VAR_6 - 0x7F;
 VAR_8 = (VAR_8 | 0x00800000) << 7;
 VAR_9 = (VAR_9 | 0x00800000) << 8;
 FUNC_6(((unsigned long long)VAR_8) * VAR_9, 32, &VAR_10);
 VAR_11 = VAR_10;
 if (0 <= (signed int)(VAR_11 << 1)) {
  VAR_11 <<= 1;
  --VAR_7;
 }
 return FUNC_5(VAR_4, VAR_7, VAR_11);

}
