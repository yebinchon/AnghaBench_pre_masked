
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ledger_entry {int le_flags; } ;
typedef TYPE_1__* ledger_t ;
typedef int kern_return_t ;
struct TYPE_4__ {struct ledger_entry* l_entries; } ;


 int FUNC_0 (TYPE_1__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;

kern_return_t
FUNC_2(ledger_t VAR_3, int VAR_4)
{
 struct ledger_entry *VAR_5;

 if (!FUNC_0(VAR_3, VAR_4))
  return (VAR_0);

 VAR_5 = &VAR_3->l_entries[VAR_4];

 FUNC_1(&VAR_5->le_flags, VAR_2);

 return (VAR_1);
}
