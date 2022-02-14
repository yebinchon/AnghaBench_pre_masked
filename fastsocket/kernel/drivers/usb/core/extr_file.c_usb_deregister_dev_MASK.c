
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int minor; int * usb_dev; } ;
struct usb_class_driver {int minor_base; char* name; } ;
typedef int name ;
struct TYPE_2__ {int class; } ;


 int FUNC_0 (int ,size_t) ;
 int VAR_0 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (char*,int,char*,size_t) ;
 int FUNC_6 (int *) ;
 TYPE_1__* VAR_2 ;
 int ** VAR_3 ;

void FUNC_7(struct usb_interface *VAR_4,
   struct usb_class_driver *VAR_5)
{
 int VAR_6 = VAR_5->minor_base;
 char VAR_7[20];





 if (VAR_4->minor == -1)
  return;

 FUNC_1 ("removing %d minor", VAR_4->minor);

 FUNC_4(&VAR_1);
 VAR_3[VAR_4->minor] = ((void*)0);
 FUNC_6(&VAR_1);

 FUNC_5(VAR_7, sizeof(VAR_7), VAR_5->name, VAR_4->minor - VAR_6);
 FUNC_3(VAR_2->class, FUNC_0(VAR_0, VAR_4->minor));
 VAR_4->usb_dev = ((void*)0);
 VAR_4->minor = -1;
 FUNC_2();
}
