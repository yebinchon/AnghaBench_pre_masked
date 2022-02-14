
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_skel {int kref; int submitted; int io_mutex; int * interface; } ;
struct usb_interface {int minor; int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct usb_interface*,int *) ;
 struct usb_skel* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_8(struct usb_interface *VAR_2)
{
 struct usb_skel *VAR_3;
 int VAR_4 = VAR_2->minor;

 VAR_3 = FUNC_5(VAR_2);
 FUNC_7(VAR_2, ((void*)0));


 FUNC_4(VAR_2, &VAR_0);


 FUNC_2(&VAR_3->io_mutex);
 VAR_3->interface = ((void*)0);
 FUNC_3(&VAR_3->io_mutex);

 FUNC_6(&VAR_3->submitted);


 FUNC_1(&VAR_3->kref, VAR_1);

 FUNC_0(&VAR_2->dev, "USB Skeleton #%d now disconnected", VAR_4);
}
