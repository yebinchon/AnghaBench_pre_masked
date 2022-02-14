
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_device {int ccw_queue; TYPE_1__* block; } ;
struct TYPE_2__ {int ccw_queue; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline
int FUNC_1(struct dasd_device *VAR_0)
{
 if (VAR_0->block)
  return FUNC_0(&VAR_0->ccw_queue) &&
   FUNC_0(&VAR_0->block->ccw_queue);
 else
  return FUNC_0(&VAR_0->ccw_queue);
}
