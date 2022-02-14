
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int owner; TYPE_1__* v4l2_dev; int list; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct v4l2_subdev *VAR_0)
{

 if (VAR_0 == ((void*)0) || VAR_0->v4l2_dev == ((void*)0))
  return;
 FUNC_2(&VAR_0->v4l2_dev->lock);
 FUNC_0(&VAR_0->list);
 FUNC_3(&VAR_0->v4l2_dev->lock);
 VAR_0->v4l2_dev = ((void*)0);
 FUNC_1(VAR_0->owner);
}
