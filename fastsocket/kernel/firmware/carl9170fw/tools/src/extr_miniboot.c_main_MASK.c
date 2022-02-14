
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct carlfw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct carlfw*) ;
 int FUNC_1 (struct carlfw*) ;
 int FUNC_2 (struct carlfw*,char*) ;
 struct carlfw* FUNC_3 (char*) ;
 int FUNC_4 (struct carlfw*) ;
 int FUNC_5 (struct carlfw*) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 () ;
 int VAR_3 ;

int FUNC_8(int VAR_4, char *VAR_5[])
{
 struct carlfw *VAR_6 = ((void*)0);
 int VAR_7;

 if (VAR_4 < 3 || VAR_4 > 4) {
  VAR_7 = -VAR_0;
  goto err_param;
 }

 switch (VAR_5[1][0]) {
 case 'a':
  if (VAR_4 != 4)
   goto err_param;

  VAR_6 = FUNC_3(VAR_5[2]);
  if (FUNC_0(VAR_6)) {
   VAR_7 = FUNC_1(VAR_6);
   goto err_out;
  }

  VAR_7 = FUNC_2(VAR_6, VAR_5[3]);
  break;
 case 'd':
  if (VAR_4 != 3)
   goto err_param;

  VAR_6 = FUNC_3(VAR_5[2]);
  if (FUNC_0(VAR_6)) {
   VAR_7 = FUNC_1(VAR_6);
   goto err_out;
  }

  VAR_7 = FUNC_5(VAR_6);
  break;

 default:
  goto err_param;
  break;
 }

 FUNC_4(VAR_6);
 return VAR_2;

err_out:
 FUNC_4(VAR_6);
 FUNC_6(VAR_3, "miniboot action failed (%d).\n", VAR_7);
 return VAR_1;

err_param:
 FUNC_4(VAR_6);
 FUNC_7();
 return VAR_1;
}
