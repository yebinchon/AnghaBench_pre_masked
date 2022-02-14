
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ledger_entry_info {int lei_refill_period; int lei_limit; int lei_last_refill; int lei_balance; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;

void
FUNC_2(uint16_t VAR_2,
                         struct ledger_entry_info *VAR_3)
{
 FUNC_1(FUNC_0(VAR_0, VAR_1, VAR_2),
                     VAR_3->lei_balance, VAR_3->lei_last_refill,
                     VAR_3->lei_limit, VAR_3->lei_refill_period);
}
