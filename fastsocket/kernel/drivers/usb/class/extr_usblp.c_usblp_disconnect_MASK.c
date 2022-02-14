
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usblp {int used; int mut; int rwait; int wwait; scalar_t__ present; int dev; } ;
struct usb_interface {int dev; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct usb_interface*,int *) ;
 struct usblp* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (struct usb_interface*,int *) ;
 int VAR_1 ;
 int FUNC_8 (struct usblp*) ;
 int VAR_2 ;
 int FUNC_9 (struct usblp*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct usb_interface *VAR_3)
{
 struct usblp *VAR_4 = FUNC_6 (VAR_3);

 FUNC_5(VAR_3, &VAR_1);

 if (!VAR_4 || !VAR_4->dev) {
  FUNC_1(&VAR_3->dev, "bogus disconnect\n");
  FUNC_0 ();
 }

 FUNC_2(&VAR_3->dev, &VAR_0);

 FUNC_3 (&VAR_2);
 FUNC_3 (&VAR_4->mut);
 VAR_4->present = 0;
 FUNC_10(&VAR_4->wwait);
 FUNC_10(&VAR_4->rwait);
 FUNC_7 (VAR_3, ((void*)0));

 FUNC_9(VAR_4);
 FUNC_4 (&VAR_4->mut);

 if (!VAR_4->used)
  FUNC_8 (VAR_4);
 FUNC_4 (&VAR_2);
}
