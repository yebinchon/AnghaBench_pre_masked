
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdpvr_device {int* usbc_buf; int usbc_mutex; int v4l2_dev; int udev; } ;
typedef int print_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int,int,int,char*,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int,int,int,int,int*,int,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int,int,int *,char*,int,char*) ;

int FUNC_6(struct hdpvr_device *VAR_2)
{



 int VAR_3, VAR_4;

 FUNC_1(&VAR_2->usbc_mutex);
 VAR_3 = FUNC_3(VAR_2->udev,
         FUNC_4(VAR_2->udev, 0),
         0x81, 0x80 | 0x38,
         0x1800, 0x0003,
         VAR_2->usbc_buf, 3,
         1000);
 VAR_4 = VAR_2->usbc_buf[1] << 8 | VAR_2->usbc_buf[0];
 FUNC_2(&VAR_2->usbc_mutex);
 return VAR_4;
}
