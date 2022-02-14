
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hdpvr_video_info {int dummy; } ;
struct hdpvr_device {int* usbc_buf; int status; int usbc_mutex; int v4l2_dev; int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct hdpvr_device*) ;
 struct hdpvr_video_info* FUNC_1 (struct hdpvr_device*) ;
 int VAR_6 ;
 int FUNC_2 (struct hdpvr_device*) ;
 int FUNC_3 (struct hdpvr_video_info*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int,int,int ,int ,int*,int,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int *,char*,...) ;

__attribute__((used)) static int FUNC_9(struct hdpvr_device *VAR_7)
{
 int VAR_8;
 u8 *VAR_9;
 struct hdpvr_video_info *VAR_10;

 if (FUNC_0(VAR_7))
  return -VAR_2;


 FUNC_2(VAR_7);


 FUNC_4(&VAR_7->usbc_mutex);
 VAR_9 = VAR_7->usbc_buf;
 VAR_9[0] = 0x03; VAR_9[1] = 0x03; VAR_9[2] = 0x00; VAR_9[3] = 0x00;
 VAR_8 = FUNC_6(VAR_7->udev,
         FUNC_7(VAR_7->udev, 0),
         0x01, 0x38,
         VAR_1, VAR_0,
         VAR_9, 4,
         1000);
 FUNC_8(VAR_3, VAR_6, &VAR_7->v4l2_dev,
   "control request returned %d\n", VAR_8);
 FUNC_5(&VAR_7->usbc_mutex);

 VAR_10 = FUNC_1(VAR_7);
 if (!VAR_10)
  FUNC_8(VAR_3, VAR_6, &VAR_7->v4l2_dev,
   "no valid video signal or device init failed\n");
 else
  FUNC_3(VAR_10);


 FUNC_4(&VAR_7->usbc_mutex);
 VAR_9[0] = 0x1;
 VAR_8 = FUNC_6(VAR_7->udev,
         FUNC_7(VAR_7->udev, 0),
         0xd4, 0x38, 0, 0, VAR_9, 1,
         1000);
 FUNC_8(VAR_3, VAR_6, &VAR_7->v4l2_dev,
   "control request returned %d\n", VAR_8);


 VAR_9[0] = VAR_5;
 VAR_8 = FUNC_6(VAR_7->udev,
         FUNC_7(VAR_7->udev, 0),
         0xd5, 0x38, 0, 0, VAR_9, 1,
         1000);
 FUNC_8(VAR_3, VAR_6, &VAR_7->v4l2_dev,
   "control request returned %d\n", VAR_8);
 FUNC_5(&VAR_7->usbc_mutex);

 VAR_7->status = VAR_4;
 return 0;
}
