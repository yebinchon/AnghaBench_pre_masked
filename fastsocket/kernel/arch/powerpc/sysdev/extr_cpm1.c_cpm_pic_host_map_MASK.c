
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_host {int dummy; } ;
typedef int irq_hw_number_t ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (unsigned int) ;
 int VAR_2 ;
 int FUNC_1 (char*,unsigned int,int ) ;
 int FUNC_2 (unsigned int,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct irq_host *VAR_3, unsigned int VAR_4,
     irq_hw_number_t VAR_5)
{
 FUNC_1("cpm_pic_host_map(%d, 0x%lx)\n", VAR_4, VAR_5);

 FUNC_0(VAR_4)->status |= VAR_0;
 FUNC_2(VAR_4, &VAR_1, VAR_2);
 return 0;
}
