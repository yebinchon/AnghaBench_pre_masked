
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wait_result_t ;
typedef int wait_interrupt_t ;
typedef int lck_spin_t ;
typedef int lck_sleep_action_t ;
typedef int event_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (int ) ;

wait_result_t
FUNC_5(
        lck_spin_t *VAR_4,
 lck_sleep_action_t VAR_5,
 event_t VAR_6,
 wait_interrupt_t VAR_7)
{
 wait_result_t VAR_8;

 if ((VAR_5 & ~VAR_0) != 0)
  FUNC_3("Invalid lock sleep action %x\n", VAR_5);

 VAR_8 = FUNC_0(VAR_6, VAR_7);
 if (VAR_8 == VAR_3) {
  FUNC_2(VAR_4);
  VAR_8 = FUNC_4(VAR_2);
  if (!(VAR_5 & VAR_1))
   FUNC_1(VAR_4);
 }
 else
 if (VAR_5 & VAR_1)
  FUNC_2(VAR_4);

 return VAR_8;
}
