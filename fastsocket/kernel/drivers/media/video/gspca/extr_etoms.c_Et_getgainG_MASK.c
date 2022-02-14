
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ sensor; } ;
struct gspca_dev {int* usb_buf; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct gspca_dev*,int ) ;

__attribute__((used)) static __u8 FUNC_2(struct gspca_dev *VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_3;

 if (VAR_4->sensor == VAR_2) {
  FUNC_1(VAR_3, VAR_1);
  FUNC_0(VAR_0, "Etoms gain G %d", VAR_3->usb_buf[0]);
  return VAR_3->usb_buf[0];
 }
 return 0x1f;
}
