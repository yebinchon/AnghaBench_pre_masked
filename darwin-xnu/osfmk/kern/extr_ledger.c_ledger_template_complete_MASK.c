
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ledger_entry {int dummy; } ;
struct ledger {int dummy; } ;
typedef TYPE_1__* ledger_template_t ;
struct TYPE_3__ {int lt_cnt; int lt_initialized; int lt_name; int lt_zone; } ;


 size_t VAR_0 ;
 int FUNC_0 (size_t,size_t,size_t,int ) ;

void
FUNC_1(ledger_template_t VAR_1)
{
 size_t VAR_2;
 VAR_2 = sizeof(struct ledger) + (VAR_1->lt_cnt * sizeof(struct ledger_entry));
 VAR_1->lt_zone = FUNC_0(VAR_2, VAR_0 * VAR_2,
                        VAR_2,
                        VAR_1->lt_name);
 VAR_1->lt_initialized = 1;
}
