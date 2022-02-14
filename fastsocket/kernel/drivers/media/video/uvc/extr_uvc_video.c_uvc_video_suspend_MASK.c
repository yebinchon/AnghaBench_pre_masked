
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uvc_streaming {int frozen; int intfnum; TYPE_1__* dev; int queue; } ;
struct TYPE_2__ {int udev; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct uvc_streaming*,int ) ;

int FUNC_3(struct uvc_streaming *VAR_0)
{
 if (!FUNC_1(&VAR_0->queue))
  return 0;

 VAR_0->frozen = 1;
 FUNC_2(VAR_0, 0);
 FUNC_0(VAR_0->dev->udev, VAR_0->intfnum, 0);
 return 0;
}
