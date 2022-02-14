
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmpi ;
typedef int s8 ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int*) ;
 int FUNC_1 (int ,int*,char*,char*) ;
 int VAR_6 ;
 int FUNC_2 (char*,int,char*,int) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_3(int VAR_8, s32 *VAR_9)
{
 int VAR_10;
 s8 VAR_11;
 char VAR_12[5];

 VAR_10 = VAR_3;

 switch (VAR_7) {
 case 128:
  if (VAR_8 <= 7) {
   if (!FUNC_0(VAR_10 + VAR_8, &VAR_11))
    return -VAR_1;
   *VAR_9 = VAR_11 * 1000;
   return 0;
  }
  break;

 case 131:
  if (VAR_8 <= 7) {
   FUNC_2(VAR_12, sizeof(VAR_12), "TMP%c", '0' + VAR_8);
   if (!FUNC_1(VAR_6, ((void*)0), "UPDT", "v"))
    return -VAR_1;
   if (!FUNC_1(VAR_6, &VAR_10, VAR_12, "d"))
    return -VAR_1;
   *VAR_9 = (VAR_10 - 2732) * 100;
   return 0;
  }
  break;

 case 132:
  if (VAR_8 <= 7) {
   FUNC_2(VAR_12, sizeof(VAR_12), "TMP%c", '0' + VAR_8);
   if (!FUNC_1(VAR_6, &VAR_10, VAR_12, "d"))
    return -VAR_1;
   if (VAR_10 > 127 || VAR_10 < -127)
    VAR_10 = VAR_5;
   *VAR_9 = VAR_10 * 1000;
   return 0;
  }
  break;

 case 130:
 default:
  return -VAR_2;
 }

 return -VAR_0;
}
