
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccw_device {TYPE_1__* private; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static inline int
FUNC_0(struct ccw_device *VAR_4)
{
 return (VAR_4->private->state == VAR_1 ||
  VAR_4->private->state == VAR_2 ||
  VAR_4->private->state == VAR_3 ||
  VAR_4->private->state == VAR_0);
}
