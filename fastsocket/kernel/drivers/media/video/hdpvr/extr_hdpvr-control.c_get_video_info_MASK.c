
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdpvr_video_info {int width; int height; int fps; } ;
struct hdpvr_device {int* usbc_buf; int usbc_mutex; int v4l2_dev; int udev; } ;
typedef int print_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int,int,int,char*,int,int ) ;
 int FUNC_1 (struct hdpvr_video_info*) ;
 struct hdpvr_video_info* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int,int,int,int,int*,int,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int,int,int *,char*,int,char*) ;
 int FUNC_8 (int *,char*) ;

struct hdpvr_video_info *FUNC_9(struct hdpvr_device *VAR_3)
{
 struct hdpvr_video_info *VAR_4 = ((void*)0);



 int VAR_5;

 VAR_4 = FUNC_2(sizeof(struct hdpvr_video_info), VAR_0);
 if (!VAR_4) {
  FUNC_8(&VAR_3->v4l2_dev, "out of memory\n");
  goto err;
 }

 FUNC_3(&VAR_3->usbc_mutex);
 VAR_5 = FUNC_5(VAR_3->udev,
         FUNC_6(VAR_3->udev, 0),
         0x81, 0x80 | 0x38,
         0x1400, 0x0003,
         VAR_3->usbc_buf, 5,
         1000);
 if (VAR_5 == 5) {
  VAR_4->width = VAR_3->usbc_buf[1] << 8 | VAR_3->usbc_buf[0];
  VAR_4->height = VAR_3->usbc_buf[3] << 8 | VAR_3->usbc_buf[2];
  VAR_4->fps = VAR_3->usbc_buf[4];
 }
 FUNC_4(&VAR_3->usbc_mutex);

 if (!VAR_4->width || !VAR_4->height || !VAR_4->fps) {
  FUNC_1(VAR_4);
  VAR_4 = ((void*)0);
 }
err:
 return VAR_4;
}
