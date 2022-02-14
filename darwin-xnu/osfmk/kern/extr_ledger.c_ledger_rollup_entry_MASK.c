
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ledger_entry {int le_debit; int le_credit; } ;
typedef TYPE_1__* ledger_t ;
typedef int kern_return_t ;
struct TYPE_5__ {scalar_t__ l_template; struct ledger_entry* l_entries; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int) ;

kern_return_t
FUNC_3(ledger_t VAR_1, ledger_t VAR_2, int VAR_3)
{
 struct ledger_entry *VAR_4, *VAR_5;

 FUNC_2(VAR_1->l_template == VAR_2->l_template);
 if (FUNC_0(VAR_2, VAR_3) && FUNC_0(VAR_1, VAR_3)) {
  VAR_4 = &VAR_2->l_entries[VAR_3];
  VAR_5 = &VAR_1->l_entries[VAR_3];
  FUNC_1(VAR_4->le_credit, &VAR_5->le_credit);
  FUNC_1(VAR_4->le_debit, &VAR_5->le_debit);
 }

 return (VAR_0);
}
