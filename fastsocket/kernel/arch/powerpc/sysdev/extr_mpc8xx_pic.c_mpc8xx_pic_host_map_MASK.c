
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_host {int dummy; } ;
typedef int irq_hw_number_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,unsigned int,int ) ;
 int FUNC_1 (unsigned int,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct irq_host *VAR_2, unsigned int VAR_3,
     irq_hw_number_t VAR_4)
{
 FUNC_0("mpc8xx_pic_host_map(%d, 0x%lx)\n", VAR_3, VAR_4);


 FUNC_1(VAR_3, &VAR_1, VAR_0);
 return 0;
}
