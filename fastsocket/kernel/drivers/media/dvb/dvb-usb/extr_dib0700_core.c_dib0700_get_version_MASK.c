
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct dvb_usb_device {int udev; } ;
typedef int b ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int,int ,int ,int*,int,int ) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(struct dvb_usb_device *VAR_4, u32 *VAR_5,
   u32 *VAR_6, u32 *VAR_7, u32 *VAR_8)
{
 u8 VAR_9[16];
 int VAR_10 = FUNC_0(VAR_4->udev, FUNC_1(VAR_4->udev, 0),
      VAR_0,
      VAR_3 | VAR_2, 0, 0,
      VAR_9, sizeof(VAR_9), VAR_1);
 if (VAR_5 != ((void*)0))
  *VAR_5 = (VAR_9[0] << 24) | (VAR_9[1] << 16) | (VAR_9[2] << 8) | VAR_9[3];
 if (VAR_6 != ((void*)0))
  *VAR_6 = (VAR_9[4] << 24) | (VAR_9[5] << 16) | (VAR_9[6] << 8) | VAR_9[7];
 if (VAR_7 != ((void*)0))
  *VAR_7 = (VAR_9[8] << 24) | (VAR_9[9] << 16) | (VAR_9[10] << 8) | VAR_9[11];
 if (VAR_8 != ((void*)0))
  *VAR_8 = (VAR_9[12] << 24) | (VAR_9[13] << 16) | (VAR_9[14] << 8) | VAR_9[15];
 return VAR_10;
}
