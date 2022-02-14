
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* thread_t ;
struct arm_saved_state {int cpsr; } ;
typedef int kern_return_t ;
struct TYPE_4__ {int * DebugData; int kVFPdata; int uVFPdata; int PcbData; } ;
struct TYPE_5__ {TYPE_1__ machine; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *) ;

kern_return_t
FUNC_2(
    thread_t VAR_2)
{
 struct arm_saved_state *VAR_3;

 VAR_3 = (struct arm_saved_state *) & VAR_2->machine.PcbData;
 FUNC_0((char *) VAR_3, sizeof(struct arm_saved_state));
 VAR_3->cpsr = VAR_1;






 VAR_2->machine.DebugData = ((void*)0);

 return VAR_0;
}
