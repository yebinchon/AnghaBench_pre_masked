
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;

int FUNC_2(char *VAR_6, char *VAR_7)
{
 if (FUNC_1(VAR_6, "SCREEN_SHOW_SPEED") == 0)
  return (VAR_2 = FUNC_0(VAR_7)) != -1;
 else if (FUNC_1(VAR_6, "SCREEN_SHOW_IO_ACTIVITY") == 0)
  return (VAR_3 = FUNC_0(VAR_7)) != -1;
 else if (FUNC_1(VAR_6, "SCREEN_SHOW_IO_COUNTER") == 0)
  return (VAR_4 = FUNC_0(VAR_7)) != -1;
 else if (FUNC_1(VAR_6, "SCREEN_SHOW_1200XL_LEDS") == 0)
  return (VAR_1 = FUNC_0(VAR_7)) != -1;
 else return VAR_0;
 return VAR_5;
}
