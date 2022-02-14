
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int * usb_buf; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct gspca_dev*,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_1)
{
 u8 *VAR_2;

 VAR_2 = VAR_1->usb_buf;
 FUNC_1(VAR_1, 0x20, 0, 5);
 FUNC_0(VAR_0, "FirmWare : %d %d %d %d %d ",
  VAR_2[0], VAR_2[1], VAR_2[2], VAR_2[3], VAR_2[4]);
 FUNC_1(VAR_1, 0x23, 0, 64);
 FUNC_1(VAR_1, 0x23, 1, 64);
}
