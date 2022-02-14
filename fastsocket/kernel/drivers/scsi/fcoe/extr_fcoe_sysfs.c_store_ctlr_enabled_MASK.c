
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fcoe_ctlr_device {int enabled; TYPE_1__* f; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int (* set_fcoe_ctlr_enabled ) (struct fcoe_ctlr_device*) ;} ;


 size_t VAR_0 ;



 struct fcoe_ctlr_device* FUNC_0 (struct device*) ;
 int FUNC_1 (struct fcoe_ctlr_device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
      struct device_attribute *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 struct fcoe_ctlr_device *VAR_5 = FUNC_0(VAR_1);
 int VAR_6;

 switch (VAR_5->enabled) {
 case 129:
  if (*VAR_3 == '1')
   return VAR_4;
  VAR_5->enabled = 130;
  break;
 case 130:
  if (*VAR_3 == '0')
   return VAR_4;
  VAR_5->enabled = 129;
  break;
 case 128:
  return -VAR_0;
 };

 VAR_6 = VAR_5->f->set_fcoe_ctlr_enabled(VAR_5);
 if (VAR_6)
  return VAR_6;

 return VAR_4;
}
