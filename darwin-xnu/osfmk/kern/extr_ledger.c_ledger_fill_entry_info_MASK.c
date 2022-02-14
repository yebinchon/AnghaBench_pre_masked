
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct ledger_entry_info {void* lei_last_refill; void* lei_refill_period; scalar_t__ lei_debit; scalar_t__ lei_credit; scalar_t__ lei_balance; int lei_limit; } ;
struct TYPE_3__ {scalar_t__ le_last_refill; scalar_t__ le_refill_period; } ;
struct TYPE_4__ {TYPE_1__ le_refill; } ;
struct ledger_entry {int le_flags; TYPE_2__ _le; scalar_t__ le_debit; scalar_t__ le_credit; int le_limit; } ;


 int VAR_0 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ledger_entry_info*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct ledger_entry *VAR_1,
                       struct ledger_entry_info *VAR_2,
                       uint64_t VAR_3)
{
 FUNC_1(VAR_1 != ((void*)0));
 FUNC_1(VAR_2 != ((void*)0));

 FUNC_2(VAR_2, 0, sizeof (*VAR_2));

 VAR_2->lei_limit = VAR_1->le_limit;
 VAR_2->lei_credit = VAR_1->le_credit;
 VAR_2->lei_debit = VAR_1->le_debit;
 VAR_2->lei_balance = VAR_2->lei_credit - VAR_2->lei_debit;
 VAR_2->lei_refill_period = (VAR_1->le_flags & VAR_0) ?
            FUNC_0(VAR_1->_le.le_refill.le_refill_period) : 0;
 VAR_2->lei_last_refill = FUNC_0(VAR_3 - VAR_1->_le.le_refill.le_last_refill);
}
