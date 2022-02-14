
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ emulate_tpu; scalar_t__ emulate_tpws; } ;
struct se_device {TYPE_1__ dev_attrib; TYPE_2__* transport; } ;
struct se_cmd {struct se_device* se_dev; } ;
typedef int sense_reason_t ;
struct TYPE_4__ {unsigned char (* get_device_type ) (struct se_device*) ;} ;


 int FUNC_0 (int,unsigned char*) ;
 unsigned char FUNC_1 (struct se_device*) ;

__attribute__((used)) static sense_reason_t
FUNC_2(struct se_cmd *VAR_0, unsigned char *VAR_1)
{
 struct se_device *VAR_2 = VAR_0->se_dev;
 VAR_1[0] = VAR_2->transport->get_device_type(VAR_2);




 FUNC_0(0x0004, &VAR_1[2]);
 VAR_1[4] = 0x00;






 if (VAR_2->dev_attrib.emulate_tpu != 0)
  VAR_1[5] = 0x80;







 if (VAR_2->dev_attrib.emulate_tpws != 0)
  VAR_1[5] |= 0x40;

 return 0;
}
