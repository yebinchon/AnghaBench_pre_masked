
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device_shadow {int fh_lock; int fh_list; } ;
struct v4l2_fh {int list; int vdev; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct video_device_shadow* FUNC_3 (int ) ;

void FUNC_4(struct v4l2_fh *VAR_0)
{
 unsigned long VAR_1;
 struct video_device_shadow *VAR_2 = FUNC_3(VAR_0->vdev);

 FUNC_1(&VAR_2->fh_lock, VAR_1);
 FUNC_0(&VAR_0->list, &VAR_2->fh_list);
 FUNC_2(&VAR_2->fh_lock, VAR_1);
}
