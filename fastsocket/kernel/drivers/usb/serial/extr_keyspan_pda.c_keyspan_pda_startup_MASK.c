
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial {TYPE_1__** port; } ;
struct keyspan_pda_private {TYPE_1__* port; struct usb_serial* serial; int unthrottle_work; int wakeup_work; } ;
struct TYPE_2__ {int write_wait; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 struct keyspan_pda_private* FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_1__*,struct keyspan_pda_private*) ;

__attribute__((used)) static int FUNC_4(struct usb_serial *VAR_3)
{

 struct keyspan_pda_private *VAR_4;




 VAR_4 = FUNC_2(sizeof(struct keyspan_pda_private), VAR_0);
 if (!VAR_4)
  return 1;
 FUNC_3(VAR_3->port[0], VAR_4);
 FUNC_1(&VAR_3->port[0]->write_wait);
 FUNC_0(&VAR_4->wakeup_work, VAR_2);
 FUNC_0(&VAR_4->unthrottle_work, VAR_1);
 VAR_4->serial = VAR_3;
 VAR_4->port = VAR_3->port[0];
 return 0;
}
