
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct entry_template {int dummy; } ;
typedef TYPE_1__* ledger_template_t ;
struct TYPE_4__ {char const* lt_name; int lt_refs; int lt_table_size; struct entry_template* lt_entries; int lt_lock; int * lt_zone; scalar_t__ lt_inuse; scalar_t__ lt_cnt; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int *,int *,int ) ;
 int VAR_1 ;

ledger_template_t
FUNC_3(const char *VAR_2)
{
 ledger_template_t VAR_3;

 VAR_3 = (ledger_template_t)FUNC_0(sizeof (*VAR_3));
 if (VAR_3 == ((void*)0))
  return (((void*)0));

 VAR_3->lt_name = VAR_2;
 VAR_3->lt_refs = 1;
 VAR_3->lt_cnt = 0;
 VAR_3->lt_table_size = 1;
 VAR_3->lt_inuse = 0;
 VAR_3->lt_zone = ((void*)0);
 FUNC_2(&VAR_3->lt_lock, &VAR_1, VAR_0);

 VAR_3->lt_entries = (struct entry_template *)
     FUNC_0(sizeof (struct entry_template) * VAR_3->lt_table_size);
 if (VAR_3->lt_entries == ((void*)0)) {
  FUNC_1(VAR_3, sizeof (*VAR_3));
  VAR_3 = ((void*)0);
 }

 return (VAR_3);
}
