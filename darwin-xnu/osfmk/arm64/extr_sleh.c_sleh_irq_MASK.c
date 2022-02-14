
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_4__ {int (* interrupt_handler ) (int ,int ,int ,int ) ;int interrupt_source; int interrupt_nub; int interrupt_refCon; int interrupt_target; } ;
typedef TYPE_1__ cpu_data_t ;
typedef int arm_saved_state_t ;
struct TYPE_5__ {int* index_ptr; int* buffer; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (int,int) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*,int (*) (int ,int ,int ,int ),int,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;

void
FUNC_8(arm_saved_state_t *VAR_3)
{
 uint64_t VAR_4 = 0;
 uint32_t VAR_5 = 0;
 uint32_t * VAR_6 = ((void*)0);
 uint32_t * VAR_7 = ((void*)0);
 cpu_data_t * VAR_8 = FUNC_1();




 FUNC_6(VAR_3, VAR_0);


 VAR_8->interrupt_handler(VAR_8->interrupt_target,
                        VAR_8->interrupt_refCon,
                        VAR_8->interrupt_nub,
                        VAR_8->interrupt_source);


 VAR_4 = FUNC_3();
 VAR_6 = VAR_2.index_ptr;
 VAR_7 = VAR_6 + 1;

 if (VAR_7 >= &VAR_2.buffer[VAR_1]) {
  VAR_7 = VAR_2.buffer;
 }

 VAR_2.index_ptr = VAR_7;


 VAR_5 = *VAR_6;
 *VAR_6 = (uint32_t)VAR_4 ^ FUNC_0(VAR_5, 9);

 FUNC_5();




}
