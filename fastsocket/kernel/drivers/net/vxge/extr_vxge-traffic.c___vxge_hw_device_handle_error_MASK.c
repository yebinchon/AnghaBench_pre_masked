
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int (* crit_err ) (struct __vxge_hw_device*,int,int ) ;} ;
struct __vxge_hw_device {TYPE_1__ uld_callbacks; } ;
typedef enum vxge_hw_status { ____Placeholder_vxge_hw_status } vxge_hw_status ;
typedef enum vxge_hw_event { ____Placeholder_vxge_hw_event } vxge_hw_event ;
 int VAR_0 ;
 int FUNC_0 (struct __vxge_hw_device*,int,int ) ;
 int FUNC_1 (int ) ;

enum vxge_hw_status
FUNC_2(
  struct __vxge_hw_device *VAR_1,
  u32 VAR_2,
  enum vxge_hw_event VAR_3)
{
 switch (VAR_3) {
 case 129:
  break;
 case 133:
 case 134:
 case 138:
 case 137:
  goto out;
 case 142:
  goto out;
 case 140:
 case 136:
  goto out;
 case 139:
 case 128:
 case 141:
 case 132:
  break;
 case 130:
 case 135:
  goto out;
 case 131:
  break;
 default:
  FUNC_1(0);
  goto out;
 }


 if (VAR_1->uld_callbacks.crit_err)
  VAR_1->uld_callbacks.crit_err(
   (struct __vxge_hw_device *)VAR_1,
   VAR_3, VAR_2);
out:

 return VAR_0;
}
