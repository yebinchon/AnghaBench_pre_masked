
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int cpu_decrementer; } ;
typedef TYPE_1__ cpu_data_t ;
typedef int arm_saved_state_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (char*,unsigned int,int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,unsigned int) ;

void
FUNC_9(arm_saved_state_t *VAR_4)
{
 unsigned int VAR_5 = VAR_2;
 if (FUNC_2()) {
  VAR_5 = VAR_1;
 }

 FUNC_8(VAR_4, VAR_5);






 {





  cpu_data_t *VAR_6 = FUNC_0();

  VAR_6->cpu_decrementer = -1;






  FUNC_6(VAR_3);
 }

 FUNC_7();




}
