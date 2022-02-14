
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int peak_bitrate; int bitrate; } ;
struct hdpvr_device {int usbc_mutex; int * usbc_buf; int udev; TYPE_1__ options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int,int,int ,int ,int *,int,int) ;
 int FUNC_4 (int ,int ) ;

int FUNC_5(struct hdpvr_device *VAR_2)
{
 int VAR_3;

 FUNC_1(&VAR_2->usbc_mutex);
 FUNC_0(VAR_2->usbc_buf, 0, 4);
 VAR_2->usbc_buf[0] = VAR_2->options.bitrate;
 VAR_2->usbc_buf[2] = VAR_2->options.peak_bitrate;

 VAR_3 = FUNC_3(VAR_2->udev,
         FUNC_4(VAR_2->udev, 0),
         0x01, 0x38, VAR_0,
         VAR_1, VAR_2->usbc_buf, 4, 1000);
 FUNC_2(&VAR_2->usbc_mutex);

 return VAR_3;
}
