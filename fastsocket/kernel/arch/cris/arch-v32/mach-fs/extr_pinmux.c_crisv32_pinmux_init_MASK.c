
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pa7; int pa6; int pa5; int pa4; int pa3; int pa2; int pa1; int pa0; } ;
typedef TYPE_1__ reg_pinmux_rw_pa ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,TYPE_1__) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,scalar_t__,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

int FUNC_4(void)
{
 static int VAR_11;

 if (!VAR_11) {
  reg_pinmux_rw_pa VAR_12 = FUNC_0(VAR_5, VAR_7, VAR_10);
  VAR_11 = 1;
  FUNC_2(VAR_5, VAR_7, VAR_9, 0);
  VAR_12.pa0 = VAR_12.pa1 = VAR_12.pa2 = VAR_12.pa3 =
      VAR_12.pa4 = VAR_12.pa5 = VAR_12.pa6 = VAR_12.pa7 = VAR_8;
  FUNC_1(VAR_5, VAR_7, VAR_10, VAR_12);
  FUNC_3(VAR_0, 0, VAR_4 - 1, VAR_6);
  FUNC_3(VAR_1, 0, VAR_4 - 1, VAR_6);
  FUNC_3(VAR_2, 0, VAR_4 - 1, VAR_6);
  FUNC_3(VAR_3, 0, VAR_4 - 1, VAR_6);
 }

 return 0;
}
