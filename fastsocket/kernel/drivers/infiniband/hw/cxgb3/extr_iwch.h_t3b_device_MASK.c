
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* t3cdev_p; } ;
struct iwch_dev {TYPE_2__ rdev; } ;
struct TYPE_3__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int FUNC_0(const struct iwch_dev *VAR_1)
{
 return VAR_1->rdev.t3cdev_p->type == VAR_0;
}
