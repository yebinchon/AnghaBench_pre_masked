
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ledger_entry {int le_flags; scalar_t__ le_debit; scalar_t__ le_credit; scalar_t__ le_limit; } ;
typedef scalar_t__ ledger_amount_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline int
FUNC_1(struct ledger_entry *VAR_1)
{
 ledger_amount_t VAR_2;

 if (VAR_1->le_flags & VAR_0) {
  FUNC_0(VAR_1->le_debit == 0);
 } else {
  FUNC_0((VAR_1->le_credit >= 0) && (VAR_1->le_debit >= 0));
 }

 VAR_2 = VAR_1->le_credit - VAR_1->le_debit;
 if ((VAR_1->le_limit <= 0) && (VAR_2 < VAR_1->le_limit))
  return (1);

 if ((VAR_1->le_limit > 0) && (VAR_2 > VAR_1->le_limit))
  return (1);
 return (0);
}
