
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ledger_callback {void const* lc_param1; void const* lc_param0; scalar_t__ lc_func; } ;
struct entry_template {struct ledger_callback* et_callback; } ;
typedef TYPE_1__* ledger_template_t ;
typedef scalar_t__ ledger_callback_t ;
typedef int kern_return_t ;
struct TYPE_5__ {int lt_cnt; struct entry_template* lt_entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ledger_callback*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

kern_return_t
FUNC_4(ledger_template_t VAR_2, int VAR_3,
   ledger_callback_t VAR_4, const void *VAR_5, const void *VAR_6)
{
 struct entry_template *VAR_7;
 struct ledger_callback *VAR_8, *VAR_9;

 if ((VAR_3 < 0) || (VAR_3 >= VAR_2->lt_cnt))
  return (VAR_0);

 if (VAR_4) {
  VAR_9 = (struct ledger_callback *)FUNC_0(sizeof (*VAR_9));
  VAR_9->lc_func = VAR_4;
  VAR_9->lc_param0 = VAR_5;
  VAR_9->lc_param1 = VAR_6;
 } else {
  VAR_9 = ((void*)0);
 }

 FUNC_2(VAR_2);
 VAR_7 = &VAR_2->lt_entries[VAR_3];
 VAR_8 = VAR_7->et_callback;
 VAR_7->et_callback = VAR_9;
 FUNC_3(VAR_2);
 if (VAR_8)
  FUNC_1(VAR_8, sizeof (*VAR_8));

 return (VAR_1);
}
