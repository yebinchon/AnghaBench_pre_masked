
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ledger_entry {scalar_t__ le_debit; scalar_t__ le_credit; int le_flags; } ;
typedef TYPE_1__* ledger_t ;
typedef scalar_t__ ledger_amount_t ;
typedef int kern_return_t ;
struct TYPE_4__ {struct ledger_entry* l_entries; } ;


 int FUNC_0 (TYPE_1__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;

kern_return_t
FUNC_5(ledger_t VAR_3, int VAR_4)
{
 struct ledger_entry *VAR_5;
 ledger_amount_t VAR_6, VAR_7;

 if (!FUNC_0(VAR_3, VAR_4))
  return (VAR_0);

 VAR_5 = &VAR_3->l_entries[VAR_4];

top:
 VAR_6 = VAR_5->le_debit;
 VAR_7 = VAR_5->le_credit;

 if (VAR_5->le_flags & VAR_2) {
  FUNC_2(VAR_5->le_debit == 0);
  if (!FUNC_1(VAR_7, 0, &VAR_5->le_credit)) {
   goto top;
  }
  FUNC_4(("%p zeroed %lld->%lld\n", FUNC_3(), VAR_5->le_credit, 0));
 } else if (VAR_7 > VAR_6) {
  if (!FUNC_1(VAR_6, VAR_7, &VAR_5->le_debit))
   goto top;
  FUNC_4(("%p zeroed %lld->%lld\n", FUNC_3(), VAR_5->le_debit, VAR_5->le_credit));
 } else if (VAR_7 < VAR_6) {
  if (!FUNC_1(VAR_7, VAR_6, &VAR_5->le_credit))
   goto top;
  FUNC_4(("%p zeroed %lld->%lld\n", FUNC_3(), VAR_5->le_credit, VAR_5->le_debit));
 }

 return (VAR_1);
}
