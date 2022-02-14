
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ cu_type; scalar_t__ cu_model; scalar_t__ dev_type; scalar_t__ dev_model; } ;
struct ccw_device {TYPE_2__* private; TYPE_3__ id; } ;
struct TYPE_4__ {scalar_t__ cu_type; scalar_t__ cu_model; scalar_t__ dev_type; scalar_t__ dev_model; } ;
struct TYPE_5__ {TYPE_1__ senseid; } ;



int FUNC_0(struct ccw_device *VAR_0)
{
 return VAR_0->id.cu_type == VAR_0->private->senseid.cu_type &&
  VAR_0->id.cu_model == VAR_0->private->senseid.cu_model &&
  VAR_0->id.dev_type == VAR_0->private->senseid.dev_type &&
  VAR_0->id.dev_model == VAR_0->private->senseid.dev_model;
}
