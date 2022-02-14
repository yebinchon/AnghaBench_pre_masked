
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bridge_controller {TYPE_1__* base; } ;
typedef int cpuid_t ;
struct TYPE_2__ {int b_int_enable; int b_wid_tflush; } ;
typedef TYPE_1__ bridge_t ;


 struct bridge_controller* FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int *,unsigned int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char*,unsigned int) ;

__attribute__((used)) static void FUNC_5(unsigned int VAR_0)
{
 struct bridge_controller *VAR_1 = FUNC_0(VAR_0);
 bridge_t *VAR_2 = VAR_1->base;
 int VAR_3, VAR_4;
 cpuid_t VAR_5;

 FUNC_4("bridge_shutdown: irq 0x%x\n", VAR_0);
 VAR_3 = FUNC_1(VAR_0);





 VAR_4 = FUNC_2(&VAR_5, VAR_0);
 FUNC_3(VAR_5, VAR_4);

 VAR_2->b_int_enable &= ~(1 << VAR_3);
 VAR_2->b_wid_tflush;
}
