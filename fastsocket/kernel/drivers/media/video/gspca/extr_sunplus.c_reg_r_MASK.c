
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct gspca_dev {int usb_err; int * usb_buf; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int ,int ,int,int ,scalar_t__,int *,scalar_t__,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_4,
    u8 VAR_5,
    u16 VAR_6,
    u16 VAR_7)
{
 int VAR_8;







 if (VAR_4->usb_err < 0)
  return;
 VAR_8 = FUNC_1(VAR_4->dev,
   FUNC_2(VAR_4->dev, 0),
   VAR_5,
   VAR_1 | VAR_3 | VAR_2,
   0,
   VAR_6,
   VAR_7 ? VAR_4->usb_buf : ((void*)0), VAR_7,
   500);
 if (VAR_8 < 0) {
  FUNC_0("reg_r err %d", VAR_8);
  VAR_4->usb_err = VAR_8;
 }
}
