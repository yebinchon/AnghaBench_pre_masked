
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bss_l2; int data_l2; int text_l2; int bss_b_l1; int data_b_l1; int bss_a_l1; int data_a_l1; int text_l1; } ;
struct module {TYPE_1__ arch; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct module *VAR_0)
{
 FUNC_2(VAR_0->arch.text_l1);
 FUNC_0(VAR_0->arch.data_a_l1);
 FUNC_0(VAR_0->arch.bss_a_l1);
 FUNC_1(VAR_0->arch.data_b_l1);
 FUNC_1(VAR_0->arch.bss_b_l1);
 FUNC_3(VAR_0->arch.text_l2);
 FUNC_3(VAR_0->arch.data_l2);
 FUNC_3(VAR_0->arch.bss_l2);
}
