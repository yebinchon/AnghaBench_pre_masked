
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ le_last_refill; scalar_t__ le_refill_period; } ;
struct TYPE_13__ {TYPE_1__ le_refill; } ;
struct ledger_entry {TYPE_2__ _le; void* le_warn_level; void* le_limit; scalar_t__ le_debit; scalar_t__ le_credit; int le_flags; } ;
struct entry_template {int * et_callback; int et_flags; } ;
typedef TYPE_3__* ledger_template_t ;
typedef TYPE_4__* ledger_t ;
typedef int int32_t ;
struct TYPE_15__ {int l_refs; int l_size; struct ledger_entry* l_entries; scalar_t__ l_id; TYPE_3__* l_template; } ;
struct TYPE_14__ {size_t lt_cnt; struct entry_template* lt_entries; scalar_t__ lt_zone; int lt_refs; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 TYPE_4__* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_4__* FUNC_4 () ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

ledger_t
FUNC_8(ledger_template_t VAR_6, int VAR_7)
{
 ledger_t VAR_8;
 size_t VAR_9;
 int VAR_10;

 FUNC_5(VAR_6);
 VAR_6->lt_refs++;
 VAR_9 = VAR_6->lt_cnt;
 FUNC_6(VAR_6);

 if (VAR_6->lt_zone) {
  VAR_8 = (ledger_t)FUNC_7(VAR_6->lt_zone);
 } else {
  VAR_8 = FUNC_4();
 }

 if (VAR_8 == ((void*)0)) {
  FUNC_3(VAR_6);
  return VAR_3;
 }

 VAR_8->l_template = VAR_6;
 VAR_8->l_id = VAR_5++;
 VAR_8->l_refs = 1;
 VAR_8->l_size = (int32_t)VAR_9;

 FUNC_5(VAR_6);
 FUNC_0(VAR_8->l_size <= VAR_6->lt_cnt);
 for (VAR_10 = 0; VAR_10 < VAR_8->l_size; VAR_10++) {
  struct ledger_entry *VAR_11 = &VAR_8->l_entries[VAR_10];
  struct entry_template *VAR_12 = &VAR_6->lt_entries[VAR_10];

  VAR_11->le_flags = VAR_12->et_flags;

  if (VAR_7 == VAR_1)
   FUNC_1(&VAR_11->le_flags, VAR_4);




  if (VAR_12->et_callback != ((void*)0))
   FUNC_2(&VAR_11->le_flags, VAR_0);
  VAR_11->le_credit = 0;
  VAR_11->le_debit = 0;
  VAR_11->le_limit = VAR_2;
  VAR_11->le_warn_level = VAR_2;
  VAR_11->_le.le_refill.le_refill_period = 0;
  VAR_11->_le.le_refill.le_last_refill = 0;
 }
 FUNC_6(VAR_6);

 return (VAR_8);
}
