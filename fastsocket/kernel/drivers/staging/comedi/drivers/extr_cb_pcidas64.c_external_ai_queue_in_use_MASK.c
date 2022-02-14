
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_device {TYPE_2__* read_subdev; } ;
struct TYPE_6__ {scalar_t__ layout; } ;
struct TYPE_5__ {TYPE_1__* async; scalar_t__ busy; } ;
struct TYPE_4__ {int cmd; } ;


 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_0 (struct comedi_device*) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static inline int FUNC_2(struct comedi_device *VAR_1)
{
 if (VAR_1->read_subdev->busy)
  return 0;
 if (FUNC_0(VAR_1)->layout == VAR_0)
  return 0;
 else if (FUNC_1(&VAR_1->read_subdev->async->cmd))
  return 0;
 return 1;
}
