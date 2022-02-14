
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_bus {struct mon_bus* mon_bus; } ;
struct mon_bus {int bus_link; int bin_inited; int text_inited; struct usb_bus* u_bus; int r_list; int lock; int ref; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct mon_bus* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct mon_bus*,struct usb_bus*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct mon_bus*,struct usb_bus*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct usb_bus *VAR_3)
{
 struct mon_bus *VAR_4;

 if ((VAR_4 = FUNC_2(sizeof(struct mon_bus), VAR_0)) == ((void*)0))
  goto err_alloc;
 FUNC_1(&VAR_4->ref);
 FUNC_8(&VAR_4->lock);
 FUNC_0(&VAR_4->r_list);





 VAR_4->u_bus = VAR_3;
 VAR_3->mon_bus = VAR_4;

 VAR_4->text_inited = FUNC_5(VAR_4, VAR_3);
 VAR_4->bin_inited = FUNC_4(VAR_4, VAR_3);

 FUNC_6(&VAR_2);
 FUNC_3(&VAR_4->bus_link, &VAR_1);
 FUNC_7(&VAR_2);
 return;

err_alloc:
 return;
}
