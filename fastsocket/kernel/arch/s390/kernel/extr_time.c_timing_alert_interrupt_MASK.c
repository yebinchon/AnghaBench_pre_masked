
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stp_irq_parm {int dummy; } ;
struct etr_irq_parm {int dummy; } ;
typedef int __u16 ;
struct TYPE_2__ {int ext_params; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (struct etr_irq_parm*) ;
 int FUNC_1 (struct stp_irq_parm*) ;

__attribute__((used)) static void FUNC_2(__u16 VAR_1)
{
 if (VAR_0.ext_params & 0x00c40000)
  FUNC_0((struct etr_irq_parm *)
     &VAR_0.ext_params);
 if (VAR_0.ext_params & 0x00038000)
  FUNC_1((struct stp_irq_parm *)
     &VAR_0.ext_params);
}
