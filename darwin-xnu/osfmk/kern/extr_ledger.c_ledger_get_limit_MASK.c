
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ledger_entry {int le_limit; } ;
typedef TYPE_1__* ledger_t ;
typedef int ledger_amount_t ;
typedef int kern_return_t ;
struct TYPE_4__ {struct ledger_entry* l_entries; } ;


 int FUNC_0 (TYPE_1__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;

kern_return_t
FUNC_2(ledger_t VAR_2, int VAR_3, ledger_amount_t *VAR_4)
{
 struct ledger_entry *VAR_5;

 if (!FUNC_0(VAR_2, VAR_3))
  return (VAR_0);

 VAR_5 = &VAR_2->l_entries[VAR_3];
 *VAR_4 = VAR_5->le_limit;

 FUNC_1(("ledger_get_limit: %lld\n", *VAR_4));

 return (VAR_1);
}
