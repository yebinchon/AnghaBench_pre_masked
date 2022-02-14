
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_lcd {int kref; } ;
struct usb_interface {int minor; int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (struct usb_interface*,int *) ;
 struct usb_lcd* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_7(struct usb_interface *VAR_3)
{
 struct usb_lcd *VAR_4;
        int VAR_5 = VAR_3->minor;

 FUNC_2(&VAR_2);
        VAR_4 = FUNC_5(VAR_3);
        FUNC_6(VAR_3, ((void*)0));
 FUNC_3(&VAR_2);


        FUNC_4(VAR_3, &VAR_0);


 FUNC_1(&VAR_4->kref, VAR_1);

 FUNC_0(&VAR_3->dev, "USB LCD #%d now disconnected\n", VAR_5);
}
