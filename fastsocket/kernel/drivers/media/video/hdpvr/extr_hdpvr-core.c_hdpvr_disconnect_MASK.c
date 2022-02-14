
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct hdpvr_device {int video_dev; int i2c_adapter; int io_mutex; int workqueue; int v4l2_dev; int wait_buffer; int wait_data; int status; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hdpvr_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct hdpvr_device* FUNC_7 (int ) ;
 int FUNC_8 (struct usb_interface*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,char*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(struct usb_interface *VAR_2)
{
 struct hdpvr_device *VAR_3 = FUNC_7(FUNC_8(VAR_2));

 FUNC_10(&VAR_3->v4l2_dev, "device %s disconnected\n",
    FUNC_11(VAR_3->video_dev));

 FUNC_5(&VAR_3->io_mutex);
 VAR_3->status = VAR_0;
 FUNC_13(&VAR_3->wait_data);
 FUNC_13(&VAR_3->wait_buffer);
 FUNC_6(&VAR_3->io_mutex);
 FUNC_9(&VAR_3->v4l2_dev);
 FUNC_4(100);
 FUNC_1(VAR_3->workqueue);
 FUNC_5(&VAR_3->io_mutex);
 FUNC_2(VAR_3);
 FUNC_6(&VAR_3->io_mutex);



 FUNC_12(VAR_3->video_dev);
 FUNC_0(&VAR_1);
}
