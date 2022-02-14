
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dummy; } ;
struct uvc_streaming {struct uvc_device* dev; } ;
struct uvc_device {int nstreams; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct uvc_device*) ;
 int FUNC_2 (struct video_device*) ;
 struct uvc_streaming* FUNC_3 (struct video_device*) ;

__attribute__((used)) static void FUNC_4(struct video_device *VAR_0)
{
 struct uvc_streaming *VAR_1 = FUNC_3(VAR_0);
 struct uvc_device *VAR_2 = VAR_1->dev;

 FUNC_2(VAR_0);




 if (FUNC_0(&VAR_2->nstreams))
  FUNC_1(VAR_2);
}
