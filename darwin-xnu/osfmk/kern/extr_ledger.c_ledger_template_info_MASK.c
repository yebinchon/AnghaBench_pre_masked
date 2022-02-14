
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ledger_template_info {int lti_units; int lti_group; int lti_name; } ;
struct entry_template {int et_units; int et_group; int et_key; } ;
typedef TYPE_1__* ledger_t ;
struct TYPE_7__ {TYPE_1__* ledger; } ;
struct TYPE_6__ {struct entry_template* lt_entries; } ;
struct TYPE_5__ {int l_size; TYPE_2__* l_template; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 () ;
 struct ledger_template_info* FUNC_1 (int) ;
 int FUNC_2 (struct ledger_template_info*,int ,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

int
FUNC_6(void **VAR_3, int *VAR_4)
{
 struct ledger_template_info *VAR_5;
 struct entry_template *VAR_6;
 int VAR_7;
 ledger_t VAR_8;





 VAR_8 = FUNC_0()->ledger;
 if ((*VAR_4 < 0) || (VAR_8 == ((void*)0)))
  return (VAR_0);

 if (*VAR_4 > VAR_8->l_size)
   *VAR_4 = VAR_8->l_size;
 VAR_5 = FUNC_1((*VAR_4) * sizeof (struct ledger_template_info));
 if (VAR_5 == ((void*)0))
  return (VAR_1);
 *VAR_3 = VAR_5;

 FUNC_4(VAR_8->l_template);
 VAR_6 = VAR_8->l_template->lt_entries;

 for (VAR_7 = 0; VAR_7 < *VAR_4; VAR_7++) {
  FUNC_2(VAR_5, 0, sizeof (*VAR_5));
  FUNC_3(VAR_5->lti_name, VAR_6->et_key, VAR_2);
  FUNC_3(VAR_5->lti_group, VAR_6->et_group, VAR_2);
  FUNC_3(VAR_5->lti_units, VAR_6->et_units, VAR_2);
  VAR_6++;
  VAR_5++;
 }
 FUNC_5(VAR_8->l_template);

 return (0);
}
