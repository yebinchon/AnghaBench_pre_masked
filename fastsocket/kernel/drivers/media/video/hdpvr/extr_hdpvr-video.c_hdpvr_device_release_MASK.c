
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dummy; } ;
struct hdpvr_device {struct hdpvr_device* usbc_buf; int i2c_mutex; int i2c_adapter; int v4l2_dev; int io_mutex; int workqueue; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct hdpvr_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct hdpvr_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct hdpvr_device* FUNC_7 (struct video_device*) ;

__attribute__((used)) static void FUNC_8(struct video_device *VAR_0)
{
 struct hdpvr_device *VAR_1 = FUNC_7(VAR_0);

 FUNC_1(VAR_1);
 FUNC_4(&VAR_1->io_mutex);
 FUNC_0(VAR_1->workqueue);
 FUNC_5(&VAR_1->io_mutex);

 FUNC_6(&VAR_1->v4l2_dev);
 FUNC_3(VAR_1->usbc_buf);
 FUNC_3(VAR_1);
}
