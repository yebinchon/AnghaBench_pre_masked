
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ sensor; int colors; } ;
struct gspca_dev {int* usb_buf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct gspca_dev*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;

 if (VAR_3->sensor == VAR_1) {

  FUNC_0(VAR_2, VAR_0 + 3);
  VAR_3->colors = VAR_2->usb_buf[0] & 0x0f;
 }
}
