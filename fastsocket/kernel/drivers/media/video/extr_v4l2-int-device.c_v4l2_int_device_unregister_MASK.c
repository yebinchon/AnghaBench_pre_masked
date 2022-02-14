
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* slave; } ;
struct v4l2_int_device {scalar_t__ type; TYPE_4__ u; int head; } ;
struct TYPE_7__ {TYPE_1__* master; } ;
struct TYPE_10__ {int module; TYPE_2__ u; } ;
struct TYPE_8__ {TYPE_5__* master; } ;
struct TYPE_6__ {int (* detach ) (struct v4l2_int_device*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct v4l2_int_device*) ;
 scalar_t__ VAR_1 ;

void FUNC_5(struct v4l2_int_device *VAR_2)
{
 FUNC_2(&VAR_0);
 FUNC_0(&VAR_2->head);
 if (VAR_2->type == VAR_1
     && VAR_2->u.slave->master != ((void*)0)) {
  VAR_2->u.slave->master->u.master->detach(VAR_2);
  FUNC_1(VAR_2->u.slave->master->module);
  VAR_2->u.slave->master = ((void*)0);
 }
 FUNC_3(&VAR_0);
}
