
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ledger_entry {int le_flags; } ;
typedef TYPE_1__* ledger_t ;
typedef int kern_return_t ;
struct TYPE_3__ {int l_size; struct ledger_entry* l_entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int) ;

kern_return_t
FUNC_1(ledger_t VAR_3, int VAR_4)
{
 struct ledger_entry *VAR_5;

 if ((VAR_3 == ((void*)0)) || (VAR_4 < 0) || (VAR_4 >= VAR_3->l_size))
  return (VAR_0);

 VAR_5 = &VAR_3->l_entries[VAR_4];
 if ((VAR_5->le_flags & VAR_2) == 0) {
  FUNC_0(&VAR_5->le_flags, VAR_2);
 }
 return (VAR_1);
}
