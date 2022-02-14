
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_int_ioctl_desc {int dummy; } ;
struct TYPE_4__ {TYPE_1__* slave; } ;
struct v4l2_int_device {scalar_t__ type; int head; TYPE_2__ u; } ;
struct TYPE_3__ {int num_ioctls; int ioctls; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int,int *,int *) ;
 int FUNC_4 () ;
 scalar_t__ VAR_3 ;

int FUNC_5(struct v4l2_int_device *VAR_4)
{
 if (VAR_4->type == VAR_3)
  FUNC_3(VAR_4->u.slave->ioctls, VAR_4->u.slave->num_ioctls,
       sizeof(struct v4l2_int_ioctl_desc),
       &VAR_1, ((void*)0));
 FUNC_1(&VAR_2);
 FUNC_0(&VAR_4->head, &VAR_0);
 FUNC_4();
 FUNC_2(&VAR_2);

 return 0;
}
