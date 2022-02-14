
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fh {int * vdev; } ;


 int FUNC_0 (struct v4l2_fh*) ;

void FUNC_1(struct v4l2_fh *VAR_0)
{
 if (VAR_0->vdev == ((void*)0))
  return;

 VAR_0->vdev = ((void*)0);

 FUNC_0(VAR_0);
}
