
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mxl5007t_state {int tab_init; } ;
typedef enum mxl5007t_if_freq { ____Placeholder_mxl5007t_if_freq } mxl5007t_if_freq ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct mxl5007t_state *VAR_1,
          enum mxl5007t_if_freq VAR_2,
          int VAR_3)
{
 u8 VAR_4;

 switch (VAR_2) {
 case 133:
  VAR_4 = 0x00;
  break;
 case 134:
  VAR_4 = 0x02;
  break;
 case 135:
  VAR_4 = 0x03;
  break;
 case 131:
  VAR_4 = 0x04;
  break;
 case 132:
  VAR_4 = 0x05;
  break;
 case 129:
  VAR_4 = 0x06;
  break;
 case 130:
  VAR_4 = 0x07;
  break;
 case 128:
  VAR_4 = 0x08;
  break;
 case 138:
  VAR_4 = 0x09;
  break;
 case 137:
  VAR_4 = 0x0a;
  break;
 case 136:
  VAR_4 = 0x0b;
  break;
 default:
  FUNC_0(-VAR_0);
  return;
 }
 FUNC_1(VAR_1->tab_init, 0x02, 0x0f, VAR_4);


 FUNC_1(VAR_1->tab_init, 0x02, 0x10, VAR_3 ? 0x10 : 0x00);

 return;
}
