
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (char const**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char const** VAR_3 ;
 char const** VAR_4 ;

const char *FUNC_1(u8 VAR_5, int *VAR_6)
{
 if (VAR_5 >= 0x20 && (VAR_5 <= 0x20 +
         FUNC_0(VAR_4))) {
  *VAR_6 = VAR_1;
  return VAR_4[VAR_5 - 0x20];
 } else if (VAR_5 < FUNC_0(VAR_3)) {
  *VAR_6 = VAR_0;
  return VAR_3[VAR_5];
 } else {
  *VAR_6 = VAR_2;
  return "Unknown";
 }
}
