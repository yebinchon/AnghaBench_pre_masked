
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
 int VAR_3 ;
 int VAR_4 ;

kern_return_t
FUNC_1(ledger_t VAR_5, int VAR_6, int *VAR_7)
{
 struct ledger_entry *VAR_8;

 if (!FUNC_0(VAR_5, VAR_6))
  return (VAR_1);

 VAR_8 = &VAR_5->l_entries[VAR_6];

 if (VAR_8->le_flags & VAR_3) {
  *VAR_7 = VAR_4;
 } else {
  *VAR_7 = VAR_0;
 }

 return (VAR_2);
}
