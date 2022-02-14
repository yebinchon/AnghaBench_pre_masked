
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wusb_dev {int set_gtk_urb; struct wusb_dev* set_gtk_req; } ;


 int FUNC_0 (struct wusb_dev*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct wusb_dev *VAR_0)
{
 if (VAR_0) {
  FUNC_0(VAR_0->set_gtk_req);
  FUNC_1(VAR_0->set_gtk_urb);
  FUNC_0(VAR_0);
 }
}
