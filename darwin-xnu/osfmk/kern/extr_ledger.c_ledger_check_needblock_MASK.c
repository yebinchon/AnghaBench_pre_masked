
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_7__ {scalar_t__ le_last_refill; scalar_t__ le_refill_period; } ;
struct TYPE_8__ {TYPE_1__ le_refill; } ;
struct ledger_entry {int le_flags; TYPE_2__ _le; } ;
struct ledger_callback {int lc_param1; int lc_param0; int (* lc_func ) (scalar_t__,int ,int ) ;} ;
typedef TYPE_3__* ledger_t ;
struct TYPE_9__ {int l_size; struct ledger_entry* l_entries; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 struct ledger_callback* FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 (scalar_t__,TYPE_3__*,int) ;
 scalar_t__ FUNC_5 (struct ledger_entry*) ;
 int FUNC_6 (scalar_t__,int ,int ) ;
 int FUNC_7 (scalar_t__,int ,int ) ;
 int FUNC_8 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_9 (struct ledger_entry*) ;

__attribute__((used)) static uint32_t
FUNC_10(ledger_t VAR_9, uint64_t VAR_10)
{
 int VAR_11;
 uint32_t VAR_12, VAR_13 = 0;
 struct ledger_entry *VAR_14;
 struct ledger_callback *VAR_15;


 for (VAR_11 = 0; VAR_11 < VAR_9->l_size; VAR_11++) {
  VAR_14 = &VAR_9->l_entries[VAR_11];

  VAR_15 = FUNC_1(VAR_9, VAR_11);

  if (FUNC_5(VAR_14) == VAR_0) {
   if (VAR_14->le_flags & VAR_2) {





    FUNC_0(VAR_15 != ((void*)0));



    if (FUNC_9(VAR_14)) {
     VAR_12 = FUNC_3(&VAR_14->le_flags, VAR_8);
     if ((VAR_12 & VAR_8) == 0) {
      VAR_15->lc_func(VAR_4, VAR_15->lc_param0, VAR_15->lc_param1);
     }
    } else {
     VAR_12 = FUNC_2(&VAR_14->le_flags, VAR_8);
     if (VAR_12 & VAR_8) {
      VAR_15->lc_func(VAR_3, VAR_15->lc_param0, VAR_15->lc_param1);
     }
    }
   }

   continue;
  }


  if (VAR_14->le_flags & VAR_6) {
   FUNC_0(!(VAR_14->le_flags & VAR_7));

   if ((VAR_14->_le.le_refill.le_last_refill + VAR_14->_le.le_refill.le_refill_period) > VAR_10) {
    FUNC_4(VAR_10, VAR_9, VAR_11);
    if (FUNC_5(VAR_14) == VAR_0)
     continue;
   }
  }

  if (VAR_14->le_flags & VAR_1)
   VAR_13 = 1;
  if ((VAR_14->le_flags & VAR_2) == 0)
   continue;





  FUNC_0(VAR_15 != ((void*)0));
  VAR_12 = FUNC_3(&VAR_14->le_flags, VAR_5);

  if (VAR_12 & VAR_5)
   continue;
  VAR_15->lc_func(VAR_0, VAR_15->lc_param0, VAR_15->lc_param1);
 }
 return(VAR_13);
}
