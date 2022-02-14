
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct alauda {int kref; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ) ;
 struct alauda* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_4(struct usb_interface *VAR_1)
{
 struct alauda *VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 FUNC_3(VAR_1, ((void*)0));




 if (VAR_2)
  FUNC_1(&VAR_2->kref, VAR_0);

 FUNC_0(&VAR_1->dev, "alauda gone");
}
