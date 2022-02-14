
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ledger_entry {int dummy; } ;
struct ledger {int dummy; } ;
typedef TYPE_1__* ledger_template_t ;
struct TYPE_3__ {int lt_cnt; int lt_initialized; } ;


 int FUNC_0 (size_t) ;

void
FUNC_1(ledger_template_t VAR_0)
{
 size_t VAR_1;
 VAR_1 = sizeof(struct ledger) + (VAR_0->lt_cnt * sizeof(struct ledger_entry));
 FUNC_0(VAR_1);
 VAR_0->lt_initialized = 1;
}
