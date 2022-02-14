
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ledger_callback {int dummy; } ;
typedef int spl_t ;
typedef TYPE_2__* ledger_t ;
struct TYPE_8__ {TYPE_1__* lt_entries; } ;
struct TYPE_7__ {TYPE_4__* l_template; } ;
struct TYPE_6__ {struct ledger_callback* et_callback; } ;


 int FUNC_0 (int ,TYPE_4__*) ;
 int FUNC_1 (int ,TYPE_4__*) ;

__attribute__((used)) static inline struct ledger_callback *
FUNC_2(ledger_t VAR_0, int VAR_1)
{
 struct ledger_callback *VAR_2;
 spl_t VAR_3;

 FUNC_1(VAR_3, VAR_0->l_template);
 VAR_2 = VAR_0->l_template->lt_entries[VAR_1].et_callback;
 FUNC_0(VAR_3, VAR_0->l_template);

 return (VAR_2);
}
