
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* ledger_t ;
typedef int kern_return_t ;
struct TYPE_6__ {TYPE_1__* l_entries; } ;
struct TYPE_5__ {int le_flags; } ;


 int FUNC_0 (TYPE_2__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (char*) ;

kern_return_t
FUNC_3(ledger_t VAR_2, int VAR_3, int VAR_4)
{
 FUNC_2(("ledger_set_action: %#x\n", VAR_4));
 if (!FUNC_0(VAR_2, VAR_3))
  return (VAR_0);

 FUNC_1(&VAR_2->l_entries[VAR_3].le_flags, VAR_4);
 return (VAR_1);
}
