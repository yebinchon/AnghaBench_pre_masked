
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usbnet {int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct usbnet*,char*,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int,int ,int ,int *,int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct usbnet *VAR_5, u8 VAR_6, u8 VAR_7)
{
 FUNC_0(VAR_5, "dm_write_reg() reg=0x%02x, value=0x%02x", VAR_6, VAR_7);
 return FUNC_1(VAR_5->udev,
          FUNC_2(VAR_5->udev, 0),
          VAR_0,
          VAR_2 | VAR_4 |VAR_3,
          VAR_7, VAR_6, ((void*)0), 0, VAR_1);
}
