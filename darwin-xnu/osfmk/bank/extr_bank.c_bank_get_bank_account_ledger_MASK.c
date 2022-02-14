
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ledger_t ;
typedef TYPE_1__* bank_account_t ;
struct TYPE_4__ {scalar_t__ ba_holder; scalar_t__ ba_merchant; int ba_bill; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static ledger_t
FUNC_0(bank_account_t VAR_2)
{
 ledger_t VAR_3 = VAR_1;

 if (VAR_2 != VAR_0 &&
  VAR_2->ba_holder != VAR_2->ba_merchant)
  VAR_3 = VAR_2->ba_bill;

 return (VAR_3);
}
