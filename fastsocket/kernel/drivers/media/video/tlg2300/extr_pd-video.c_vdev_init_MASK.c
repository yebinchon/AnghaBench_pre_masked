
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int minor; int release; int * v4l2_dev; } ;
struct poseidon {int v4l2_dev; } ;


 struct video_device* FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct video_device*,struct poseidon*) ;

struct video_device *FUNC_2(struct poseidon *VAR_1, struct video_device *VAR_2)
{
 struct video_device *VAR_3;

 VAR_3 = FUNC_0();
 if (VAR_3 == ((void*)0))
  return ((void*)0);
 *VAR_3 = *VAR_2;
 VAR_3->minor = -1;
 VAR_3->v4l2_dev = &VAR_1->v4l2_dev;

 VAR_3->release = VAR_0;
 FUNC_1(VAR_3, VAR_1);
 return VAR_3;
}
