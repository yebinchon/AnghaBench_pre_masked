
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dummy; } ;


 int FUNC_0 (struct video_device*) ;
 scalar_t__ FUNC_1 (struct video_device*) ;
 int FUNC_2 (struct video_device*) ;

void FUNC_3(struct video_device **VAR_0)
{
 struct video_device *VAR_1 = *VAR_0;

 if (VAR_1 == ((void*)0))
  return;

 if (FUNC_1(VAR_1))
  FUNC_2(VAR_1);
 else
  FUNC_0(VAR_1);
 *VAR_0 = ((void*)0);
}
