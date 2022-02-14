
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ le_refill_period; scalar_t__ le_last_refill; } ;
struct TYPE_6__ {TYPE_1__ le_refill; } ;
struct ledger_entry {int le_flags; TYPE_2__ _le; } ;
typedef TYPE_3__* ledger_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_7__ {int l_size; struct ledger_entry* l_entries; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct ledger_entry*,int ,scalar_t__) ;
 int FUNC_2 (int*,int ) ;
 int FUNC_3 (struct ledger_entry*) ;
 scalar_t__ FUNC_4 (int ,int *,int ) ;

__attribute__((used)) static kern_return_t
FUNC_5(ledger_t VAR_10)
{
 int VAR_11;
 kern_return_t VAR_12;
 struct ledger_entry *VAR_13;

 for (VAR_11 = 0; VAR_11 < VAR_10->l_size; VAR_11++) {
  VAR_13 = &VAR_10->l_entries[VAR_11];
  if ((!FUNC_3(VAR_13)) ||
      ((VAR_13->le_flags & VAR_3) == 0))
   continue;

  FUNC_0(!(VAR_13->le_flags & VAR_4));


  VAR_12 = FUNC_1(VAR_13, VAR_8,
      VAR_13->_le.le_refill.le_last_refill + VAR_13->_le.le_refill.le_refill_period);
  if (VAR_12 != VAR_9)
   return(VAR_2);


  FUNC_2(&VAR_13->le_flags, VAR_5);

  VAR_12 = FUNC_4(VAR_7, ((void*)0),
      VAR_0);
  if (VAR_12 != VAR_6)
   return(VAR_2);







  return(VAR_1);
 }
 return(VAR_2);
}
