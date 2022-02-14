
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct atp {int urb; scalar_t__ open; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct atp* FUNC_0 (struct usb_interface*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_interface *VAR_2)
{
 struct atp *VAR_3 = FUNC_0(VAR_2);

 if (VAR_3->open && FUNC_1(VAR_3->urb, VAR_1))
  return -VAR_0;

 return 0;
}
