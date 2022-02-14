
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int list; struct v4l2_device* v4l2_dev; int ctrl_handler; int owner; int * name; } ;
struct v4l2_device {int lock; int subdevs; int ctrl_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

int FUNC_6(struct v4l2_device *VAR_2,
      struct v4l2_subdev *VAR_3)
{
 int VAR_4;


 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || !VAR_3->name[0])
  return -VAR_0;

 FUNC_0(VAR_3->v4l2_dev != ((void*)0));
 if (!FUNC_4(VAR_3->owner))
  return -VAR_1;

 VAR_4 = FUNC_5(VAR_2->ctrl_handler, VAR_3->ctrl_handler);
 if (VAR_4)
  return VAR_4;
 VAR_3->v4l2_dev = VAR_2;
 FUNC_2(&VAR_2->lock);
 FUNC_1(&VAR_3->list, &VAR_2->subdevs);
 FUNC_3(&VAR_2->lock);
 return 0;
}
