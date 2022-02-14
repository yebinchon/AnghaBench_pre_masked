
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef TYPE_1__* task_t ;
struct ledger_entry_info {int dummy; } ;
struct ledger_entry {int dummy; } ;
typedef TYPE_2__* ledger_t ;
struct TYPE_5__ {int l_size; struct ledger_entry* l_entries; } ;
struct TYPE_4__ {TYPE_2__* ledger; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ledger_entry_info* FUNC_0 (int) ;
 int FUNC_1 (struct ledger_entry*,struct ledger_entry_info*,int ) ;
 int FUNC_2 () ;

int
FUNC_3(task_t VAR_2, void **VAR_3, int *VAR_4)
{
 struct ledger_entry_info *VAR_5;
 struct ledger_entry *VAR_6;
 uint64_t VAR_7 = FUNC_2();
 int VAR_8;
 ledger_t VAR_9;

 if ((*VAR_4 < 0) || ((VAR_9 = VAR_2->ledger) == ((void*)0)))
  return (VAR_0);

 if (*VAR_4 > VAR_9->l_size)
   *VAR_4 = VAR_9->l_size;
 VAR_5 = FUNC_0((*VAR_4) * sizeof (struct ledger_entry_info));
 if (VAR_5 == ((void*)0))
  return (VAR_1);
 *VAR_3 = VAR_5;

 VAR_6 = VAR_9->l_entries;

 for (VAR_8 = 0; VAR_8 < *VAR_4; VAR_8++) {
  FUNC_1(VAR_6, VAR_5, VAR_7);
  VAR_6++;
  VAR_5++;
 }

 return (0);
}
