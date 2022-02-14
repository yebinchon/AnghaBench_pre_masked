
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ thread_t ;
struct ledger_entry {int le_credit; } ;
typedef TYPE_1__* ledger_t ;
typedef scalar_t__ ledger_amount_t ;
typedef int kern_return_t ;
struct TYPE_5__ {struct ledger_entry* l_entries; } ;


 int FUNC_0 (TYPE_1__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (scalar_t__,TYPE_1__*,int,struct ledger_entry*) ;
 int FUNC_3 (char*) ;

kern_return_t
FUNC_4(thread_t VAR_2, ledger_t VAR_3, int VAR_4, ledger_amount_t VAR_5)
{
 ledger_amount_t VAR_6, VAR_7;
 struct ledger_entry *VAR_8;

 if (!FUNC_0(VAR_3, VAR_4) || (VAR_5 < 0))
  return (VAR_0);

 if (VAR_5 == 0)
  return (VAR_1);

 VAR_8 = &VAR_3->l_entries[VAR_4];

 VAR_6 = FUNC_1(VAR_5, &VAR_8->le_credit);
 VAR_7 = VAR_6 + VAR_5;
 FUNC_3(("%p Credit %lld->%lld\n", VAR_2, VAR_6, VAR_7));

 if (VAR_2) {
  FUNC_2(VAR_2, VAR_3, VAR_4, VAR_8);
 }

 return (VAR_1);
}
