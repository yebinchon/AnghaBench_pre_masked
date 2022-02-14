
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
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(int VAR_5, struct fb_var_screeninfo *VAR_6)
{
 FUNC_2("Toppoly LCD power\n");

 if (VAR_5) {
  FUNC_2("on\n");
  FUNC_0(VAR_1, 1);
  FUNC_0(VAR_4, 1);
  FUNC_3(2000);
  FUNC_0(VAR_0, 1);
  FUNC_3(2000);

  FUNC_3(2000);
  FUNC_0(VAR_2, 1);
  FUNC_3(2000);
  FUNC_0(VAR_3, 1);
 } else {
  FUNC_2("off\n");
  FUNC_1(15);
  FUNC_0(VAR_3, 0);
  FUNC_3(500);
  FUNC_0(VAR_2, 0);
  FUNC_3(1000);
  FUNC_0(VAR_4, 0);
  FUNC_0(VAR_0, 0);
 }
}
