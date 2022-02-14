
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_int16_t ;


 char FUNC_0 (char) ;
 char VAR_0 ;
 scalar_t__ FUNC_1 (char) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char,char*) ;
 scalar_t__ FUNC_3 (char) ;

size_t
FUNC_4(const u_int16_t * VAR_3, size_t VAR_4, u_int16_t VAR_5, int VAR_6)
{
 u_int16_t VAR_7;
 u_int16_t * VAR_8 = ((void*)0);
 u_int16_t VAR_9[8];
 int VAR_10 = 0;
 size_t VAR_11;
 int VAR_12 = (VAR_6 & VAR_2);
 int VAR_13 = (VAR_6 & VAR_1);
 size_t VAR_14;

 VAR_11 = VAR_4 / 2;
 VAR_14 = 0;

 while (VAR_11-- > 0) {
  if (VAR_10 > 0) {
   --VAR_10;
   VAR_7 = *VAR_8++;
  } else {
   VAR_7 = *VAR_3++;
   if (VAR_12) {
    VAR_7 = FUNC_0(VAR_7);
   }
   if (VAR_7 == '/') {
    VAR_7 = VAR_5 ? VAR_5 : '_';
   } else if (VAR_7 == '\0') {
    VAR_7 = VAR_0;
   } else if (VAR_13 && FUNC_3(VAR_7)) {
    VAR_10 = FUNC_2(VAR_7, VAR_9) - 1;
    VAR_11 += VAR_10;
    VAR_7 = VAR_9[0];
    VAR_8 = &VAR_9[1];
   }
  }
  VAR_14 += FUNC_1(VAR_7);
 }

 return (VAR_14);
}
