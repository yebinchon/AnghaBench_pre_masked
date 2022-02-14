
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
struct TYPE_4__ {int devno; } ;
struct TYPE_5__ {TYPE_1__ fcp; } ;
struct ipl_parameter_block {TYPE_2__ ipl_info; } ;
typedef int ssize_t ;
struct TYPE_6__ {int type; } ;


 struct ipl_parameter_block* VAR_0 ;



 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct kobject *VAR_3,
       struct kobj_attribute *VAR_4, char *VAR_5)
{
 struct ipl_parameter_block *VAR_6 = VAR_0;

 switch (VAR_2.type) {
 case 130:
  return FUNC_0(VAR_5, "0.0.%04x\n", VAR_1);
 case 129:
 case 128:
  return FUNC_0(VAR_5, "0.0.%04x\n", VAR_6->ipl_info.fcp.devno);
 default:
  return 0;
 }
}
