
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int dev_model; int dev_type; int cu_model; int cu_type; } ;
struct ccw_device {TYPE_1__* private; TYPE_3__ id; } ;
struct TYPE_5__ {int dev_model; int dev_type; int cu_model; int cu_type; } ;
struct TYPE_4__ {TYPE_2__ senseid; } ;


 int FUNC_0 (TYPE_3__*,int ,int) ;

void FUNC_1(struct ccw_device *VAR_0)
{
 FUNC_0(&VAR_0->id, 0, sizeof(VAR_0->id));
 VAR_0->id.cu_type = VAR_0->private->senseid.cu_type;
 VAR_0->id.cu_model = VAR_0->private->senseid.cu_model;
 VAR_0->id.dev_type = VAR_0->private->senseid.dev_type;
 VAR_0->id.dev_model = VAR_0->private->senseid.dev_model;
}
