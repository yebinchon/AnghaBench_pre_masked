
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {scalar_t__ le_last_refill; } ;
struct TYPE_8__ {TYPE_1__ le_refill; } ;
struct ledger_entry {int le_limit; int le_flags; int le_warn_level; TYPE_2__ _le; } ;
typedef TYPE_3__* ledger_t ;
typedef scalar_t__ ledger_amount_t ;
typedef int kern_return_t ;
struct TYPE_9__ {struct ledger_entry* l_entries; } ;


 int FUNC_0 (TYPE_3__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int ) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (struct ledger_entry*) ;
 int FUNC_5 (char*) ;

kern_return_t
FUNC_6(ledger_t VAR_7, int VAR_8, ledger_amount_t VAR_9,
    uint8_t VAR_10)
{
 struct ledger_entry *VAR_11;

 if (!FUNC_0(VAR_7, VAR_8))
  return (VAR_0);

 FUNC_5(("ledger_set_limit: %lld\n", VAR_9));
 VAR_11 = &VAR_7->l_entries[VAR_8];

 if (VAR_9 == VAR_2) {





  FUNC_3(VAR_7, VAR_8);
 }

 VAR_11->le_limit = VAR_9;
 if (VAR_11->le_flags & VAR_4) {
  FUNC_1(!(VAR_11->le_flags & VAR_5));
  VAR_11->_le.le_refill.le_last_refill = 0;
 }
 FUNC_2(&VAR_11->le_flags, VAR_3);
 FUNC_2(&VAR_11->le_flags, VAR_6);
 FUNC_4(VAR_11);

 if (VAR_10 != 0) {
  FUNC_1(VAR_10 <= 100);
  FUNC_1(VAR_9 > 0);
  FUNC_1(VAR_9 != VAR_2);
  VAR_11->le_warn_level = (VAR_11->le_limit * VAR_10) / 100;
 } else {
  VAR_11->le_warn_level = VAR_2;
 }

 return (VAR_1);
}
