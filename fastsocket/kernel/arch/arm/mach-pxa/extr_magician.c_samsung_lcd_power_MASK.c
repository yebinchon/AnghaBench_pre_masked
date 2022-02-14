
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_var_screeninfo {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_3(int VAR_6, struct fb_var_screeninfo *VAR_7)
{
 FUNC_2("Samsung LCD power\n");

 if (VAR_6) {
  FUNC_2("on\n");
  if (VAR_5 < 3)
   FUNC_0(VAR_4, 1);
  else
   FUNC_0(VAR_0, 1);
  FUNC_1(10);
  FUNC_0(VAR_3, 1);
  FUNC_1(10);
  FUNC_0(VAR_1, 1);
  FUNC_1(30);
  FUNC_0(VAR_2, 1);
  FUNC_1(10);
 } else {
  FUNC_2("off\n");
  FUNC_1(10);
  FUNC_0(VAR_2, 0);
  FUNC_1(30);
  FUNC_0(VAR_1, 0);
  FUNC_1(10);
  FUNC_0(VAR_3, 0);
  FUNC_1(10);
  if (VAR_5 < 3)
   FUNC_0(VAR_4, 0);
  else
   FUNC_0(VAR_0, 0);
 }
}
