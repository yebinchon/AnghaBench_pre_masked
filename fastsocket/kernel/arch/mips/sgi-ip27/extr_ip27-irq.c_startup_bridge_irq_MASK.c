
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bridge_controller {int nasid; TYPE_2__* base; } ;
typedef int cpuid_t ;
typedef int bridgereg_t ;
struct TYPE_4__ {int b_int_enable; unsigned long b_int_mode; int b_int_device; int b_wid_tflush; TYPE_1__* b_int_addr; } ;
typedef TYPE_2__ bridge_t ;
struct TYPE_3__ {int addr; } ;


 struct bridge_controller* FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int *,unsigned int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char*,unsigned int,int) ;

__attribute__((used)) static unsigned int FUNC_5(unsigned int VAR_0)
{
 struct bridge_controller *VAR_1;
 bridgereg_t VAR_2;
 bridge_t *VAR_3;
 int VAR_4, VAR_5;
 cpuid_t VAR_6;

 VAR_4 = FUNC_1(VAR_0);
 VAR_1 = FUNC_0(VAR_0);
 VAR_3 = VAR_1->base;

 FUNC_4("bridge_startup(): irq= 0x%x  pin=%d\n", VAR_0, VAR_4);




 VAR_5 = FUNC_2(&VAR_6, VAR_0);
 VAR_3->b_int_addr[VAR_4].addr = (0x20000 | VAR_5 | (VAR_1->nasid << 8));
 VAR_3->b_int_enable |= (1 << VAR_4);
 VAR_3->b_int_enable |= 0x7ffffe00;
 VAR_3->b_int_mode |= (1UL << VAR_4);





 VAR_2 = VAR_3->b_int_device;
 VAR_2 &= ~(7 << (VAR_4*3));
 VAR_2 |= (VAR_4 << (VAR_4*3));
 VAR_3->b_int_device = VAR_2;

        VAR_3->b_wid_tflush;

 FUNC_3(VAR_6, VAR_5);

        return 0;
}
