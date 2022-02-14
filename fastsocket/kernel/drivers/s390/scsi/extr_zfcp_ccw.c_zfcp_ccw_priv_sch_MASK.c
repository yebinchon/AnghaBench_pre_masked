
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zfcp_adapter {TYPE_2__* ccw_device; } ;
struct TYPE_3__ {scalar_t__ dev_model; } ;
struct TYPE_4__ {TYPE_1__ id; } ;


 scalar_t__ VAR_0 ;

int FUNC_0(struct zfcp_adapter *VAR_1)
{
 return VAR_1->ccw_device->id.dev_model == VAR_0;
}
