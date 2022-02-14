
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct gspca_dev {scalar_t__ usb_err; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct gspca_dev*,int,int,int) ;
 int FUNC_3 (struct gspca_dev*,int,int,int) ;

__attribute__((used)) static void FUNC_4(struct gspca_dev *VAR_1,
   u8 VAR_2,
   u16 VAR_3, u16 VAR_4, u16 VAR_5, u8 VAR_6)
{
 u16 VAR_7;

 FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);
 VAR_7 = FUNC_2(VAR_1, 0x01, 0x0001, 1);
 if (VAR_1->usb_err < 0)
  return;
 FUNC_0(VAR_0, "Status 0x%04x Need 0x%04x", VAR_7, VAR_5);
 if (!VAR_6)
  return;
 VAR_6 = 200;
 while (--VAR_6 > 0) {
  FUNC_1(10);


  VAR_7 = FUNC_2(VAR_1, 0x01, 0x0001, 1);
  if (VAR_7 == VAR_5) {
   FUNC_0(VAR_0, "status 0x%04x after wait %d",
    VAR_7, 200 - VAR_6);
    break;
  }
 }
}
