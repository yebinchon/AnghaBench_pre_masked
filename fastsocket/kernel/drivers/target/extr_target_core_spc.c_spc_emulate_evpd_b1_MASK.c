
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ is_nonrot; } ;
struct se_device {TYPE_2__ dev_attrib; TYPE_1__* transport; } ;
struct se_cmd {struct se_device* se_dev; } ;
typedef int sense_reason_t ;
struct TYPE_3__ {unsigned char (* get_device_type ) (struct se_device*) ;} ;


 unsigned char FUNC_0 (struct se_device*) ;

__attribute__((used)) static sense_reason_t
FUNC_1(struct se_cmd *VAR_0, unsigned char *VAR_1)
{
 struct se_device *VAR_2 = VAR_0->se_dev;

 VAR_1[0] = VAR_2->transport->get_device_type(VAR_2);
 VAR_1[3] = 0x3c;
 VAR_1[5] = VAR_2->dev_attrib.is_nonrot ? 1 : 0;

 return 0;
}
