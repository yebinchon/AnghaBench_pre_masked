
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct dvb_usb_device {TYPE_1__* desc; } ;
struct TYPE_2__ {char* name; } ;


 int FUNC_0 (struct dvb_usb_device*) ;
 int FUNC_1 (char*,char const*) ;
 struct dvb_usb_device* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (struct usb_interface*,int *) ;

void FUNC_4(struct usb_interface *VAR_0)
{
 struct dvb_usb_device *VAR_1 = FUNC_2(VAR_0);
 const char *VAR_2 = "generic DVB-USB module";

 FUNC_3(VAR_0, ((void*)0));
 if (VAR_1 != ((void*)0) && VAR_1->desc != ((void*)0)) {
  VAR_2 = VAR_1->desc->name;
  FUNC_0(VAR_1);
 }
 FUNC_1("%s successfully deinitialized and disconnected.", VAR_2);

}
