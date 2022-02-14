
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct ledger_entry_info {int dummy; } ;
struct ledger_entry {int dummy; } ;
typedef TYPE_1__* ledger_t ;
struct TYPE_3__ {int l_size; struct ledger_entry* l_entries; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ledger_entry*,struct ledger_entry_info*,int ) ;
 int FUNC_2 () ;

void
FUNC_3(ledger_t VAR_0,
                      int VAR_1,
                      struct ledger_entry_info *VAR_2)
{
 uint64_t VAR_3 = FUNC_2();

 FUNC_0(VAR_0 != ((void*)0));
 FUNC_0(VAR_2 != ((void*)0));

 if (VAR_1 >= 0 && VAR_1 < VAR_0->l_size) {
  struct ledger_entry *VAR_4 = &VAR_0->l_entries[VAR_1];
  FUNC_1(VAR_4, VAR_2, VAR_3);
 }
}
