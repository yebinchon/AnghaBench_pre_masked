
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int* usb_buf; } ;
typedef int __u16 ;


 int FUNC_0 (struct gspca_dev*,int const,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0,
       const __u16 (*VAR_1)[2])
{
 while ((*VAR_1)[0]) {
  VAR_0->usb_buf[0] = (*VAR_1)[1];
  VAR_0->usb_buf[1] = (*VAR_1)[1] >> 8;
  FUNC_0(VAR_0, (*VAR_1)[0], 2);
  VAR_1++;
 }
}
