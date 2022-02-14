
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_action {int req; int val; int idx; } ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct gspca_dev*,int,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct gspca_dev*,int) ;
 int FUNC_3 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_4(struct gspca_dev *VAR_0,
   const struct usb_action *VAR_1)
{
 while (VAR_1->req) {
  switch (VAR_1->req) {
  case 0xa0:
   FUNC_3(VAR_0, VAR_1->val, VAR_1->idx);
   break;
  case 0xa1:
   FUNC_2(VAR_0, VAR_1->idx);
   break;
  case 0xaa:
   FUNC_0(VAR_0,
      VAR_1->val,
      VAR_1->idx & 0xff,
      VAR_1->idx >> 8);
   break;
  case 0xbb:
   FUNC_0(VAR_0,
      VAR_1->idx >> 8,
      VAR_1->idx & 0xff,
      VAR_1->val);
   break;
  default:

   FUNC_1(VAR_1->val / 64 + 10);
   break;
  }
  VAR_1++;
  FUNC_1(1);
 }
}
