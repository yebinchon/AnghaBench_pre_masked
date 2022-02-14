
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usbnet {int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct usbnet*,char*,int ,int,int,int) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (void*,void*,int) ;
 int FUNC_4 (int ,int ,int ,int,int,int,void*,int,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct usbnet *VAR_7, u8 VAR_8, u16 VAR_9, u16 VAR_10,
       u16 VAR_11, void *VAR_12)
{
 void *VAR_13;
 int VAR_14 = -VAR_1;

 FUNC_0(VAR_7,"asix_read_cmd() cmd=0x%02x value=0x%04x index=0x%04x size=%d",
  VAR_8, VAR_9, VAR_10, VAR_11);

 VAR_13 = FUNC_2(VAR_11, VAR_2);
 if (!VAR_13)
  goto out;

 VAR_14 = FUNC_4(
  VAR_7->udev,
  FUNC_5(VAR_7->udev, 0),
  VAR_8,
  VAR_4 | VAR_6 | VAR_5,
  VAR_9,
  VAR_10,
  VAR_13,
  VAR_11,
  VAR_3);
 if (VAR_14 == VAR_11)
  FUNC_3(VAR_12, VAR_13, VAR_11);
 else if (VAR_14 >= 0)
  VAR_14 = -VAR_0;
 FUNC_1(VAR_13);

out:
 return VAR_14;
}
