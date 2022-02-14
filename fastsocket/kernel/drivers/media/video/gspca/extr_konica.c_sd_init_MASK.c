
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int * usb_buf; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (struct gspca_dev*,int ,int) ;
 int FUNC_2 (struct gspca_dev*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_1)
{

 FUNC_1(VAR_1, 0, 0x10);
 FUNC_0(VAR_0, "Reg 0x10 reads: %02x %02x",
        VAR_1->usb_buf[0], VAR_1->usb_buf[1]);
 FUNC_1(VAR_1, 0, 0x10);
 FUNC_0(VAR_0, "Reg 0x10 reads: %02x %02x",
        VAR_1->usb_buf[0], VAR_1->usb_buf[1]);
 FUNC_2(VAR_1, 0, 0x0d);

 return 0;
}
