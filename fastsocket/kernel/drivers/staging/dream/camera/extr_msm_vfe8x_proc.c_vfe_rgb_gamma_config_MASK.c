
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfe_cmd_rgb_gamma_config {int channelSelect; int table; int enable; } ;
struct TYPE_3__ {int rgbLUTEnable; } ;
struct TYPE_4__ {TYPE_1__ vfeModuleEnableLocal; } ;


 int VAR_0 ;







 TYPE_2__* VAR_1 ;
 int FUNC_0 (int,int ,int ) ;

int FUNC_1(struct vfe_cmd_rgb_gamma_config *VAR_2)
{
 int VAR_3 = 0;

 VAR_1->vfeModuleEnableLocal.rgbLUTEnable = VAR_2->enable;

 switch (VAR_2->channelSelect) {
 case 131:
FUNC_0(0, 0, VAR_2->table);
break;

 case 129:
  FUNC_0(1, 0, VAR_2->table);
  break;

 case 128:
  FUNC_0(2, 0, VAR_2->table);
  break;

 case 133:
  FUNC_0(0, 0, VAR_2->table);
  FUNC_0(1, 0, VAR_2->table);
  break;

 case 132:
  FUNC_0(0, 0, VAR_2->table);
  FUNC_0(2, 0, VAR_2->table);
  break;

 case 130:
  FUNC_0(1, 0, VAR_2->table);
  FUNC_0(2, 0, VAR_2->table);
  break;

 case 134:
  FUNC_0(0, 0, VAR_2->table);
  FUNC_0(1, 0, VAR_2->table);
  FUNC_0(2, 0, VAR_2->table);
  break;

 default:
  VAR_3 = -VAR_0;
  break;
 }

 return VAR_3;
}
