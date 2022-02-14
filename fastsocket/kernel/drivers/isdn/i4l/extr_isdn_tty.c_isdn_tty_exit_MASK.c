
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ xmit_buf; scalar_t__ fax; } ;
typedef TYPE_2__ modem_info ;
struct TYPE_5__ {int * tty_modem; TYPE_2__* info; } ;
struct TYPE_7__ {TYPE_1__ mdm; } ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(void)
{
 modem_info *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2 = &VAR_1->mdm.info[VAR_3];
  FUNC_0(VAR_2);



  FUNC_1(VAR_2->xmit_buf - 4);
 }
 FUNC_3(VAR_1->mdm.tty_modem);
 FUNC_2(VAR_1->mdm.tty_modem);
 VAR_1->mdm.tty_modem = ((void*)0);
}
