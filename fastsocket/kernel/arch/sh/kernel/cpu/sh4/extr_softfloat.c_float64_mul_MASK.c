
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int float64 ;


 int FUNC_0 (int ) ;
 unsigned long long FUNC_1 (int ) ;
 char FUNC_2 (int ) ;
 int FUNC_3 (unsigned long long,unsigned long long,unsigned long long*,unsigned long long*) ;
 int FUNC_4 (unsigned long long,int*,unsigned long long*) ;
 int FUNC_5 (char,int ,int ) ;
 int FUNC_6 (char,int,unsigned long long) ;

float64 FUNC_7(float64 VAR_0, float64 VAR_1)
{
 char VAR_2, VAR_3, VAR_4;
 int VAR_5, VAR_6, VAR_7;
 unsigned long long int VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_8 = FUNC_1(VAR_0);
 VAR_5 = FUNC_0(VAR_0);
 VAR_2 = FUNC_2(VAR_0);
 VAR_9 = FUNC_1(VAR_1);
 VAR_6 = FUNC_0(VAR_1);
 VAR_3 = FUNC_2(VAR_1);
 VAR_4 = VAR_2 ^ VAR_3;

 if (VAR_5 == 0) {
  if (VAR_8 == 0)
   return FUNC_5(VAR_4, 0, 0);
  FUNC_4(VAR_8, &VAR_5, &VAR_8);
 }
 if (VAR_6 == 0) {
  if (VAR_9 == 0)
   return FUNC_5(VAR_4, 0, 0);
  FUNC_4(VAR_9, &VAR_6, &VAR_9);
 }
 if ((VAR_5 == 0x7ff && VAR_8 == 0) || (VAR_6 == 0x7ff && VAR_9 == 0))
  return FUNC_6(VAR_4, 0x7ff, 0);

 VAR_7 = VAR_5 + VAR_6 - 0x3FF;
 VAR_8 = (VAR_8 | 0x0010000000000000LL) << 10;
 VAR_9 = (VAR_9 | 0x0010000000000000LL) << 11;
 FUNC_3(VAR_8, VAR_9, &VAR_10, &VAR_11);
 VAR_10 |= (VAR_11 != 0);
 if (0 <= (signed long long int)(VAR_10 << 1)) {
  VAR_10 <<= 1;
  --VAR_7;
 }
 return FUNC_6(VAR_4, VAR_7, VAR_10);
}
