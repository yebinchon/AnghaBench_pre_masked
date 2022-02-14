
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int thread_t ;
struct ledger_entry {int dummy; } ;
typedef TYPE_1__* ledger_t ;
struct TYPE_4__ {int l_size; struct ledger_entry* l_entries; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_1__*,int,struct ledger_entry*) ;

void
FUNC_2(thread_t VAR_0, ledger_t VAR_1, int VAR_2)
{
 struct ledger_entry *VAR_3;
 FUNC_0(VAR_2 > 0 && VAR_2 <= VAR_1->l_size);
 VAR_3 = &VAR_1->l_entries[VAR_2];
 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
}
