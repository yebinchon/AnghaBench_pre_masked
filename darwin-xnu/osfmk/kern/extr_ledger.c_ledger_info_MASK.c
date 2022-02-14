
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* task_t ;
struct ledger_info {int li_entries; int li_id; int li_name; } ;
typedef TYPE_3__* ledger_t ;
struct TYPE_7__ {int l_size; int l_id; TYPE_1__* l_template; } ;
struct TYPE_6__ {TYPE_3__* ledger; } ;
struct TYPE_5__ {int lt_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ledger_info*,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;

int
FUNC_2(task_t VAR_2, struct ledger_info *VAR_3)
{
 ledger_t VAR_4;

 if ((VAR_4 = VAR_2->ledger) == ((void*)0))
  return (VAR_0);

 FUNC_0(VAR_3, 0, sizeof (*VAR_3));

 FUNC_1(VAR_3->li_name, VAR_4->l_template->lt_name, VAR_1);
 VAR_3->li_id = VAR_4->l_id;
 VAR_3->li_entries = VAR_4->l_size;
 return (0);
}
