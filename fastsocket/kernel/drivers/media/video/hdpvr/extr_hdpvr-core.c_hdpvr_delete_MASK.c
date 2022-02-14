
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdpvr_device {int udev; scalar_t__ video_dev; } ;


 int FUNC_0 (struct hdpvr_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(struct hdpvr_device *VAR_0)
{
 FUNC_0(VAR_0);

 if (VAR_0->video_dev)
  FUNC_2(VAR_0->video_dev);

 FUNC_1(VAR_0->udev);
}
