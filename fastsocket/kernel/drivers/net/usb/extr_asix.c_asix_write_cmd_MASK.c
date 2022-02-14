
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
 int FUNC_0 (struct usbnet*,char*,int ,int ,int ,int ) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int ,int ) ;
 int FUNC_3 (void*,void*,int ) ;
 int FUNC_4 (int ,int ,int ,int,int ,int ,void*,int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct usbnet *VAR_6, u8 VAR_7, u16 VAR_8, u16 VAR_9,
        u16 VAR_10, void *VAR_11)
{
 void *VAR_12 = ((void*)0);
 int VAR_13 = -VAR_0;

 FUNC_0(VAR_6,"asix_write_cmd() cmd=0x%02x value=0x%04x index=0x%04x size=%d",
  VAR_7, VAR_8, VAR_9, VAR_10);

 if (VAR_11) {
  VAR_12 = FUNC_2(VAR_10, VAR_1);
  if (!VAR_12)
   goto out;
  FUNC_3(VAR_12, VAR_11, VAR_10);
 }

 VAR_13 = FUNC_4(
  VAR_6->udev,
  FUNC_5(VAR_6->udev, 0),
  VAR_7,
  VAR_3 | VAR_5 | VAR_4,
  VAR_8,
  VAR_9,
  VAR_12,
  VAR_10,
  VAR_2);
 FUNC_1(VAR_12);

out:
 return VAR_13;
}
