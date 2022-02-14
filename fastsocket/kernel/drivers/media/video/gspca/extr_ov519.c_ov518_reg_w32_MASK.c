
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int usb_err; scalar_t__ usb_buf; int dev; } ;
struct sd {TYPE_1__ gspca_dev; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int ,int ,int,int,int ,int ,scalar_t__,int,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct sd *VAR_3, u16 VAR_4, u32 VAR_5, int VAR_6)
{
 int VAR_7;

 if (VAR_3->gspca_dev.usb_err < 0)
  return;

 *((__le32 *) VAR_3->gspca_dev.usb_buf) = FUNC_0(VAR_5);

 VAR_7 = FUNC_2(VAR_3->gspca_dev.dev,
   FUNC_3(VAR_3->gspca_dev.dev, 0),
   1 ,
   VAR_0 | VAR_2 | VAR_1,
   0, VAR_4,
   VAR_3->gspca_dev.usb_buf, VAR_6, 500);
 if (VAR_7 < 0) {
  FUNC_1("reg_w32 %02x failed %d", VAR_4, VAR_7);
  VAR_3->gspca_dev.usb_err = VAR_7;
 }
}
