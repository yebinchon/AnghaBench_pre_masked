
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_bus {struct mon_bus* mon_bus; } ;
struct mon_bus {int ref; scalar_t__ bin_inited; scalar_t__ text_inited; int bus_link; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mon_bus*) ;
 int VAR_0 ;
 int FUNC_3 (struct mon_bus*,struct usb_bus*) ;
 int VAR_1 ;
 int FUNC_4 (struct mon_bus*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct usb_bus *VAR_2)
{
 struct mon_bus *VAR_3 = VAR_2->mon_bus;

 FUNC_5(&VAR_1);
 FUNC_1(&VAR_3->bus_link);
 if (VAR_3->text_inited)
  FUNC_4(VAR_3);
 if (VAR_3->bin_inited)
  FUNC_2(VAR_3);

 FUNC_3(VAR_3, VAR_2);
 FUNC_0(&VAR_3->ref, VAR_0);
 FUNC_6(&VAR_1);
}
