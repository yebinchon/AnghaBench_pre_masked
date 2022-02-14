
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int thread_t ;
struct TYPE_5__ {scalar_t__ le_last_refill; scalar_t__ le_refill_period; } ;
struct TYPE_4__ {scalar_t__ le_lifetime_max; scalar_t__ le_interval_max; } ;
struct TYPE_6__ {TYPE_2__ le_refill; TYPE_1__ _le_max; } ;
struct ledger_entry {int le_flags; scalar_t__ le_credit; scalar_t__ le_debit; TYPE_3__ _le; } ;
typedef int ledger_t ;
typedef scalar_t__ ledger_amount_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (struct ledger_entry*) ;
 int FUNC_4 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_5 (struct ledger_entry*) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (char*,int ,int,struct ledger_entry*,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (struct ledger_entry*) ;

void
FUNC_9(thread_t VAR_8, ledger_t VAR_9,
                               int VAR_10, struct ledger_entry *VAR_11)
{
 if (VAR_11->le_flags & VAR_5) {
  ledger_amount_t VAR_12 = VAR_11->le_credit - VAR_11->le_debit;

  if (VAR_12 > VAR_11->_le._le_max.le_lifetime_max){
   VAR_11->_le._le_max.le_lifetime_max = VAR_12;
  }






 }


 if (VAR_11->le_flags & VAR_4) {
  FUNC_1(!(VAR_11->le_flags & VAR_5));

  uint64_t VAR_13 = FUNC_6();
  if ((VAR_13 - VAR_11->_le.le_refill.le_last_refill) > VAR_11->_le.le_refill.le_refill_period)
   FUNC_4(VAR_13, VAR_9, VAR_10);
 }

 if (FUNC_5(VAR_11)) {
  if ((VAR_11->le_flags & VAR_0) ||
      (!(VAR_11->le_flags & VAR_2) &&
      FUNC_2(VAR_9, VAR_10))) {
   FUNC_0(VAR_8);
  }
 } else {






  if (VAR_11->le_flags & VAR_6)
   FUNC_3(VAR_11);

  if (VAR_11->le_flags & VAR_1) {





    if (FUNC_8(VAR_11)) {



     if ((VAR_11->le_flags & VAR_7) == 0) {






     FUNC_0(VAR_8);
    }
   } else {



     if (VAR_11->le_flags & VAR_7) {







     FUNC_0(VAR_8);
    }
   }
  }
 }

 if ((VAR_11->le_flags & VAR_3) &&
     (VAR_11->le_credit < VAR_11->le_debit)) {
  FUNC_7("ledger_entry_check_new_balance(%p,%d): negative ledger %p credit:%lld debit:%lld balance:%lld\n",
        VAR_9, VAR_10, VAR_11,
        VAR_11->le_credit,
        VAR_11->le_debit,
        VAR_11->le_credit - VAR_11->le_debit);
 }
}
