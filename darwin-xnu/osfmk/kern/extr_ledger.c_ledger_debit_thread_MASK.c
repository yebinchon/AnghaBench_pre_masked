
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ thread_t ;
struct ledger_entry {int le_flags; scalar_t__ le_debit; scalar_t__ le_credit; } ;
typedef TYPE_1__* ledger_t ;
typedef scalar_t__ ledger_amount_t ;
typedef int kern_return_t ;
struct TYPE_5__ {struct ledger_entry* l_entries; } ;


 int FUNC_0 (TYPE_1__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,TYPE_1__*,int,struct ledger_entry*) ;
 int FUNC_4 (char*) ;

kern_return_t
FUNC_5(thread_t VAR_3, ledger_t VAR_4, int VAR_5, ledger_amount_t VAR_6)
{
 struct ledger_entry *VAR_7;
 ledger_amount_t VAR_8, VAR_9;

 if (!FUNC_0(VAR_4, VAR_5) || (VAR_6 < 0))
  return (VAR_0);

 if (VAR_6 == 0)
  return (VAR_1);

 VAR_7 = &VAR_4->l_entries[VAR_5];

 if (VAR_7->le_flags & VAR_2) {
  FUNC_2(VAR_7->le_debit == 0);
  VAR_8 = FUNC_1(-VAR_6, &VAR_7->le_credit);
  VAR_9 = VAR_8 - VAR_6;
 } else {
  VAR_8 = FUNC_1(VAR_6, &VAR_7->le_debit);
  VAR_9 = VAR_8 + VAR_6;
 }
 FUNC_4(("%p Debit %lld->%lld\n", VAR_3, VAR_8, VAR_9));

 if (VAR_3) {
  FUNC_3(VAR_3, VAR_4, VAR_5, VAR_7);
 }

 return (VAR_1);
}
