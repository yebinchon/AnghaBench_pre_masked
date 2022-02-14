
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ledger_entry {int le_flags; scalar_t__ le_debit; scalar_t__ le_credit; } ;
typedef TYPE_1__* ledger_t ;
typedef scalar_t__ ledger_amount_t ;
typedef int kern_return_t ;
struct TYPE_4__ {struct ledger_entry* l_entries; } ;


 int FUNC_0 (TYPE_1__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;

kern_return_t
FUNC_2(ledger_t VAR_3, int VAR_4, ledger_amount_t *VAR_5)
{
 struct ledger_entry *VAR_6;

 if (!FUNC_0(VAR_3, VAR_4))
  return (VAR_0);

 VAR_6 = &VAR_3->l_entries[VAR_4];

 if (VAR_6->le_flags & VAR_2) {
  FUNC_1(VAR_6->le_debit == 0);
 } else {
  FUNC_1((VAR_6->le_credit >= 0) && (VAR_6->le_debit >= 0));
 }

 *VAR_5 = VAR_6->le_credit - VAR_6->le_debit;

 return (VAR_1);
}
