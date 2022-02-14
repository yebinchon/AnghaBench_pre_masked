
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_device {struct ccw_device* cdev; } ;
struct dasd_ccw_req {scalar_t__ startdev; } ;
struct TYPE_2__ {int cu_type; } ;
struct ccw_device {TYPE_1__ id; } ;
typedef int dasd_erp_fn_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static dasd_erp_fn_t
FUNC_0(struct dasd_ccw_req * VAR_2)
{
 struct dasd_device *VAR_3 = (struct dasd_device *) VAR_2->startdev;
 struct ccw_device *VAR_4 = VAR_3->cdev;

 switch (VAR_4->id.cu_type) {
 case 0x3990:
 case 0x2105:
 case 0x2107:
 case 0x1750:
  return VAR_0;
 case 0x9343:
 case 0x3880:
 default:
  return VAR_1;
 }
}
