
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int state; } ;
typedef TYPE_1__ CARTRIDGE_image_t ;







__attribute__((used)) static void FUNC_0(CARTRIDGE_image_t *VAR_0)
{
 switch (VAR_0->type) {
 case 128:
  VAR_0->state = 1;
  break;
 case 130:
  VAR_0->state = 0x7f;
  break;
 case 131:


  VAR_0->state = 0x10000;
  break;
 case 129:
  VAR_0->state = 254;
  break;
 default:
  VAR_0->state = 0;
 }
}
