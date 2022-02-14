
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_6__ {scalar_t__ le_last_refill; scalar_t__ le_refill_period; } ;
struct TYPE_7__ {TYPE_1__ le_refill; } ;
struct ledger_entry {scalar_t__ le_limit; int le_flags; scalar_t__ le_debit; scalar_t__ le_credit; TYPE_2__ _le; } ;
typedef TYPE_3__* ledger_t ;
typedef scalar_t__ ledger_amount_t ;
struct TYPE_8__ {int l_size; struct ledger_entry* l_entries; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,scalar_t__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*,scalar_t__,TYPE_3__*,int,scalar_t__,scalar_t__) ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 (int*,int) ;
 int FUNC_5 (struct ledger_entry*) ;
 int FUNC_6 (struct ledger_entry*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8(uint64_t VAR_3, ledger_t VAR_4, int VAR_5)
{
 uint64_t VAR_6, VAR_7, VAR_8;
 struct ledger_entry *VAR_9;
 ledger_amount_t VAR_10, VAR_11;

 FUNC_1(VAR_5 >= 0 && VAR_5 < VAR_4->l_size);

 VAR_9 = &VAR_4->l_entries[VAR_5];

 FUNC_1(VAR_9->le_limit != VAR_0);

 if (VAR_9->le_flags & VAR_2) {
  FUNC_1(VAR_9->le_debit == 0);
  return;
 }





 if (FUNC_4(&VAR_9->le_flags, VAR_1) & VAR_1) {
  return;
 }






 if (VAR_3 <= VAR_9->_le.le_refill.le_last_refill) {
  FUNC_3(&VAR_9->le_flags, VAR_1);
  return;
 }





 VAR_7 = VAR_9->_le.le_refill.le_refill_period;
 VAR_6 = VAR_3 - VAR_9->_le.le_refill.le_last_refill;
 if ((VAR_7 == 0) || (VAR_6 < VAR_7)) {
  FUNC_3(&VAR_9->le_flags, VAR_1);
  return;
 }





 VAR_8 = 0;
 while ((VAR_8 < 2) && (VAR_6 > 0)) {
  VAR_8++;
  VAR_6 -= VAR_7;
 }





 if (VAR_6 > 0)
  VAR_8 = (VAR_3 - VAR_9->_le.le_refill.le_last_refill) / VAR_7;

 VAR_10 = VAR_9->le_credit - VAR_9->le_debit;
 VAR_11 = VAR_8 * VAR_9->le_limit;

 if (VAR_10 - VAR_11 < 0)
  VAR_11 = VAR_10;

 FUNC_2(VAR_11 >= 0,"now=%llu, ledger=%p, entry=%d, balance=%lld, due=%lld", VAR_3, VAR_4, VAR_5, VAR_10, VAR_11);

 FUNC_0(VAR_11, &VAR_9->le_debit);

 FUNC_1(VAR_9->le_debit >= 0);






 if (VAR_10 == VAR_11)
  VAR_9->_le.le_refill.le_last_refill = VAR_3;
 else
  VAR_9->_le.le_refill.le_last_refill += (VAR_9->_le.le_refill.le_refill_period * VAR_8);

 FUNC_3(&VAR_9->le_flags, VAR_1);

 FUNC_7(("Refill %lld %lld->%lld\n", VAR_8, VAR_10, VAR_10 - VAR_11));
 if (!FUNC_6(VAR_9))
  FUNC_5(VAR_9);
}
