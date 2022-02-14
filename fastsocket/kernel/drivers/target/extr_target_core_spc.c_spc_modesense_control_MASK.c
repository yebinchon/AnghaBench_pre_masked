
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int emulate_rest_reord; int emulate_ua_intlck_ctrl; scalar_t__ emulate_tas; } ;
struct se_device {TYPE_1__ dev_attrib; } ;



__attribute__((used)) static int FUNC_0(struct se_device *VAR_0, u8 VAR_1, u8 *VAR_2)
{
 VAR_2[0] = 0x0a;
 VAR_2[1] = 0x0a;


 if (VAR_1 == 1)
  goto out;

 VAR_2[2] = 2;
 VAR_2[3] = (VAR_0->dev_attrib.emulate_rest_reord == 1) ? 0x00 : 0x10;
 VAR_2[4] = (VAR_0->dev_attrib.emulate_ua_intlck_ctrl == 2) ? 0x30 :
        (VAR_0->dev_attrib.emulate_ua_intlck_ctrl == 1) ? 0x20 : 0x00;
 VAR_2[5] = (VAR_0->dev_attrib.emulate_tas) ? 0x40 : 0x00;
 VAR_2[8] = 0xff;
 VAR_2[9] = 0xff;
 VAR_2[11] = 30;

out:
 return 12;
}
