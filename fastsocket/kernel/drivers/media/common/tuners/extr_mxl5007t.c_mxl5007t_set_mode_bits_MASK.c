
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxl5007t_state {int tab_init_cable; int tab_init; } ;
typedef int s32 ;
typedef enum mxl5007t_mode { ____Placeholder_mxl5007t_mode } mxl5007t_mode ;


 int VAR_0 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct mxl5007t_state *VAR_1,
       enum mxl5007t_mode VAR_2,
       s32 VAR_3)
{
 switch (VAR_2) {
 case 131:
  FUNC_1(VAR_1->tab_init, 0x06, 0x1f, 0x12);
  break;
 case 129:
  FUNC_1(VAR_1->tab_init, 0x06, 0x1f, 0x11);
  break;
 case 128:
  FUNC_1(VAR_1->tab_init, 0x06, 0x1f, 0x10);
  break;
 case 130:
  FUNC_1(VAR_1->tab_init_cable, 0x09, 0xff, 0xc1);
  FUNC_1(VAR_1->tab_init_cable, 0x0a, 0xff,
        8 - VAR_3);
  FUNC_1(VAR_1->tab_init_cable, 0x0b, 0xff, 0x17);
  break;
 default:
  FUNC_0(-VAR_0);
 }
 return;
}
