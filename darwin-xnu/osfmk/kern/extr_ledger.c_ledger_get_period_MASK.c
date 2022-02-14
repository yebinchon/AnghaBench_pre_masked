
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {int le_refill_period; } ;
struct TYPE_7__ {TYPE_1__ le_refill; } ;
struct ledger_entry {TYPE_2__ _le; } ;
typedef TYPE_3__* ledger_t ;
typedef int kern_return_t ;
struct TYPE_8__ {struct ledger_entry* l_entries; } ;


 int FUNC_0 (TYPE_3__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

kern_return_t
FUNC_3(ledger_t VAR_2, int VAR_3, uint64_t *VAR_4)
{
 struct ledger_entry *VAR_5;

 if (!FUNC_0(VAR_2, VAR_3))
  return (VAR_0);

 VAR_5 = &VAR_2->l_entries[VAR_3];
 *VAR_4 = FUNC_1(VAR_5->_le.le_refill.le_refill_period);
 FUNC_2(("ledger_get_period: %llx\n", *VAR_4));
 return (VAR_1);
}
