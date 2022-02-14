
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ciw {scalar_t__ ct; } ;
struct ccw_device {TYPE_2__* private; } ;
typedef scalar_t__ __u32 ;
struct TYPE_6__ {struct ciw* ciw; } ;
struct TYPE_4__ {scalar_t__ esid; } ;
struct TYPE_5__ {TYPE_3__ senseid; TYPE_1__ flags; } ;


 int VAR_0 ;

struct ciw *FUNC_0(struct ccw_device *VAR_1, __u32 VAR_2)
{
 int VAR_3;

 if (VAR_1->private->flags.esid == 0)
  return ((void*)0);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (VAR_1->private->senseid.ciw[VAR_3].ct == VAR_2)
   return VAR_1->private->senseid.ciw + VAR_3;
 return ((void*)0);
}
