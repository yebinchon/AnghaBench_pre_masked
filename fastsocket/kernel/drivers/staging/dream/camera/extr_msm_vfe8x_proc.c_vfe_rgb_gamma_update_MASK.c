
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vfe_cmd_rgb_gamma_config {int channelSelect; int table; int enable; } ;
struct TYPE_5__ {int ch0BankSelect; int ch1BankSelect; int ch2BankSelect; } ;
struct TYPE_4__ {int rgbLUTEnable; } ;
struct TYPE_6__ {TYPE_2__ vfeGammaLutSel; TYPE_1__ vfeModuleEnableLocal; } ;


 int VAR_0 ;







 TYPE_3__* VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int,int,int ) ;

int FUNC_2(struct vfe_cmd_rgb_gamma_config *VAR_2)
{
 int VAR_3 = 0;

 VAR_1->vfeModuleEnableLocal.rgbLUTEnable = VAR_2->enable;

 switch (VAR_2->channelSelect) {
 case 131:
  VAR_1->vfeGammaLutSel.ch0BankSelect ^= 1;
  FUNC_1(0,
   VAR_1->vfeGammaLutSel.ch0BankSelect, VAR_2->table);
  break;

 case 129:
  VAR_1->vfeGammaLutSel.ch1BankSelect ^= 1;
  FUNC_1(1,
   VAR_1->vfeGammaLutSel.ch1BankSelect, VAR_2->table);
  break;

 case 128:
  VAR_1->vfeGammaLutSel.ch2BankSelect ^= 1;
  FUNC_1(2,
   VAR_1->vfeGammaLutSel.ch2BankSelect, VAR_2->table);
  break;

 case 133:
  VAR_1->vfeGammaLutSel.ch0BankSelect ^= 1;
  VAR_1->vfeGammaLutSel.ch1BankSelect ^= 1;
  FUNC_1(0, VAR_1->vfeGammaLutSel.ch0BankSelect,
   VAR_2->table);
  FUNC_1(1, VAR_1->vfeGammaLutSel.ch1BankSelect,
   VAR_2->table);
  break;

 case 132:
  VAR_1->vfeGammaLutSel.ch0BankSelect ^= 1;
  VAR_1->vfeGammaLutSel.ch2BankSelect ^= 1;
  FUNC_1(0, VAR_1->vfeGammaLutSel.ch0BankSelect,
   VAR_2->table);
  FUNC_1(2, VAR_1->vfeGammaLutSel.ch2BankSelect,
   VAR_2->table);
  break;

 case 130:
  VAR_1->vfeGammaLutSel.ch1BankSelect ^= 1;
  VAR_1->vfeGammaLutSel.ch2BankSelect ^= 1;
  FUNC_1(1, VAR_1->vfeGammaLutSel.ch1BankSelect,
   VAR_2->table);
  FUNC_1(2, VAR_1->vfeGammaLutSel.ch2BankSelect,
   VAR_2->table);
  break;

 case 134:
  VAR_1->vfeGammaLutSel.ch0BankSelect ^= 1;
  VAR_1->vfeGammaLutSel.ch1BankSelect ^= 1;
  VAR_1->vfeGammaLutSel.ch2BankSelect ^= 1;
  FUNC_1(0, VAR_1->vfeGammaLutSel.ch0BankSelect,
   VAR_2->table);
  FUNC_1(1, VAR_1->vfeGammaLutSel.ch1BankSelect,
   VAR_2->table);
  FUNC_1(2, VAR_1->vfeGammaLutSel.ch2BankSelect,
   VAR_2->table);
  break;

 default:
  return -VAR_0;
 }


 FUNC_0(&VAR_1->vfeGammaLutSel);

 return VAR_3;
}
