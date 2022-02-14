
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_7__ {int le_last_refill; int le_refill_period; } ;
struct TYPE_8__ {TYPE_1__ le_refill; } ;
struct ledger_entry {scalar_t__ le_limit; int le_flags; TYPE_2__ _le; } ;
typedef TYPE_3__* ledger_t ;
typedef int kern_return_t ;
struct TYPE_9__ {struct ledger_entry* l_entries; } ;


 int FUNC_0 (TYPE_3__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int ) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;

kern_return_t
FUNC_7(ledger_t VAR_5, int VAR_6, uint64_t VAR_7)
{
 struct ledger_entry *VAR_8;

 FUNC_4(("ledger_set_period: %llx\n", VAR_7));
 if (!FUNC_0(VAR_5, VAR_6))
  return (VAR_0);

 VAR_8 = &VAR_5->l_entries[VAR_6];





 FUNC_1(VAR_8->le_limit != VAR_2);

 if (VAR_8->le_flags & VAR_4) {



  return (VAR_0);
 }

 VAR_8->_le.le_refill.le_refill_period = FUNC_6(VAR_7);







 VAR_8->_le.le_refill.le_last_refill = FUNC_5();
 FUNC_3(VAR_5, VAR_6);

 FUNC_2(&VAR_8->le_flags, VAR_3);

 return (VAR_1);
}
