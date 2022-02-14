
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int s64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 unsigned long long FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static u32 FUNC_5(int VAR_6, int VAR_7, int VAR_8, u32 VAR_9)
{
 s64 VAR_10, VAR_11;
 u32 VAR_12 = 0;

 VAR_11 = FUNC_4(VAR_8);
 if (FUNC_1(VAR_11) == 2047 && FUNC_2(VAR_11)) {
  VAR_12 |= VAR_0 | VAR_3;
  if (VAR_7 || !(FUNC_2(VAR_11) & (1ULL << (VAR_5 - 1))))



   VAR_12 |= VAR_1;
 }

 VAR_10 = FUNC_4(VAR_6);
 if (FUNC_1(VAR_10) == 2047 && FUNC_2(VAR_10)) {
  VAR_12 |= VAR_0 | VAR_3;
  if (VAR_7 || !(FUNC_2(VAR_10) & (1ULL << (VAR_5 - 1))))



   VAR_12 |= VAR_1;
 }

 if (VAR_12 == 0) {
  if (VAR_10 == VAR_11 || FUNC_0(VAR_10 | VAR_11) == 0) {



   VAR_12 |= VAR_4 | VAR_0;
  } else if (FUNC_3(VAR_10 ^ VAR_11)) {



   if (FUNC_3(VAR_10))



    VAR_12 |= VAR_2;
   else



    VAR_12 |= VAR_0;
  } else if ((FUNC_3(VAR_10) != 0) ^ (VAR_10 < VAR_11)) {



   VAR_12 |= VAR_2;
  } else if ((FUNC_3(VAR_10) != 0) ^ (VAR_10 > VAR_11)) {



   VAR_12 |= VAR_0;
  }
 }

 return VAR_12;
}
