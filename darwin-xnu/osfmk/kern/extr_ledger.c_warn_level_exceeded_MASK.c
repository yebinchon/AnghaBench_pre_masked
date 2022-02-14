
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ledger_entry {int le_flags; scalar_t__ le_debit; scalar_t__ le_credit; scalar_t__ le_warn_level; } ;
typedef scalar_t__ ledger_amount_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline int
FUNC_1(struct ledger_entry *VAR_2)
{
 ledger_amount_t VAR_3;

 if (VAR_2->le_flags & VAR_1) {
  FUNC_0(VAR_2->le_debit == 0);
 } else {
  FUNC_0((VAR_2->le_credit >= 0) && (VAR_2->le_debit >= 0));
 }





 VAR_3 = VAR_2->le_credit - VAR_2->le_debit;
 if ((VAR_2->le_warn_level != VAR_0) && (VAR_3 > VAR_2->le_warn_level))
  return (1);
 return (0);
}
