
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ sync_buffer_state ;
struct task_struct {int dummy; } ;
struct op_sample {unsigned long event; int eip; } ;
struct op_entry {int dummy; } ;
struct mm_struct {int dummy; } ;
struct TYPE_2__ {int bt_lost_no_mapping; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct op_entry*,struct mm_struct*) ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (struct mm_struct*,struct op_sample*,int) ;
 int FUNC_4 () ;
 int FUNC_5 (struct task_struct*,unsigned long) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 unsigned long FUNC_7 (struct mm_struct*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 unsigned long FUNC_12 (int) ;
 scalar_t__ FUNC_13 (struct op_entry*,unsigned long*) ;
 scalar_t__ FUNC_14 (struct op_entry*) ;
 struct op_sample* FUNC_15 (struct op_entry*,int) ;
 int FUNC_16 (int) ;
 TYPE_1__ VAR_5 ;
 int FUNC_17 (struct mm_struct*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 struct mm_struct* FUNC_18 (struct task_struct*) ;

void FUNC_19(int VAR_10)
{
 struct mm_struct *VAR_11 = ((void*)0);
 struct mm_struct *VAR_12;
 unsigned long VAR_13;
 struct task_struct *VAR_14;
 unsigned long VAR_15 = 0;
 int VAR_16 = 1;
 sync_buffer_state VAR_17 = VAR_8;
 unsigned int VAR_18;
 unsigned long VAR_19;
 unsigned long VAR_20;
 struct op_entry VAR_21;
 struct op_sample *VAR_22;

 FUNC_10(&VAR_4);

 FUNC_0(VAR_10);

 FUNC_16(VAR_10);
 VAR_19 = FUNC_12(VAR_10);

 for (VAR_18 = 0; VAR_18 < VAR_19; ++VAR_18) {
  VAR_22 = FUNC_15(&VAR_21, VAR_10);
  if (!VAR_22)
   break;

  if (FUNC_8(VAR_22->eip)) {
   VAR_20 = VAR_22->event;
   if (VAR_20 & VAR_2) {
    VAR_17 = VAR_7;
    FUNC_4();
   }
   if (VAR_20 & VAR_1) {

    VAR_16 = VAR_20 & VAR_0;
    if (VAR_17 == VAR_8)
     VAR_17 = VAR_9;
    FUNC_2(VAR_20 & VAR_0);
   }
   if (VAR_20 & VAR_3
       && FUNC_13(&VAR_21, &VAR_13)) {

    VAR_14 = (struct task_struct *)VAR_13;
    VAR_12 = VAR_11;
    FUNC_17(VAR_12);
    VAR_11 = FUNC_18(VAR_14);
    if (VAR_11 != VAR_12)
     VAR_15 = FUNC_7(VAR_11);
    FUNC_5(VAR_14, VAR_15);
   }
   if (FUNC_14(&VAR_21))
    FUNC_1(&VAR_21, VAR_11);
   continue;
  }

  if (VAR_17 < VAR_7)

   continue;

  if (FUNC_3(VAR_11, VAR_22, VAR_16))
   continue;


  if (VAR_17 == VAR_7) {
   VAR_17 = VAR_6;
   FUNC_6(&VAR_5.bt_lost_no_mapping);
  }
 }
 FUNC_17(VAR_11);

 FUNC_9(VAR_10);

 FUNC_11(&VAR_4);
}
