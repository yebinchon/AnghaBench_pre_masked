
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int le_lifetime_max; } ;
struct TYPE_7__ {TYPE_1__ _le_max; } ;
struct ledger_entry {int le_flags; TYPE_2__ _le; } ;
typedef TYPE_3__* ledger_t ;
typedef int ledger_amount_t ;
typedef int kern_return_t ;
struct TYPE_8__ {struct ledger_entry* l_entries; } ;


 int FUNC_0 (TYPE_3__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;

kern_return_t
FUNC_2(ledger_t VAR_3, int VAR_4,
        ledger_amount_t *VAR_5)
{
 struct ledger_entry *VAR_6;
 VAR_6 = &VAR_3->l_entries[VAR_4];

 if (!FUNC_0(VAR_3, VAR_4) || !(VAR_6->le_flags & VAR_2)) {
  return (VAR_0);
 }

 *VAR_5 = VAR_6->_le._le_max.le_lifetime_max;
 FUNC_1(("ledger_get_lifetime_max: %lld\n", *VAR_5));

 return (VAR_1);
}
