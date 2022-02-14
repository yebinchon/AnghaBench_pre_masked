
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sn_pcibus_provider {int (* force_interrupt ) (struct sn_irq_info*) ;} ;
struct sn_irq_info {size_t irq_bridge_type; size_t irq_irq; } ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 struct sn_pcibus_provider** VAR_2 ;
 int FUNC_0 (struct sn_irq_info*) ;

__attribute__((used)) static inline void
FUNC_1(struct sn_irq_info *VAR_3)
{
 struct sn_pcibus_provider *VAR_4;

 VAR_4 = VAR_2[VAR_3->irq_bridge_type];


 if (!(VAR_1[VAR_3->irq_irq].status & VAR_0) &&
     VAR_4 && VAR_4->force_interrupt)
  (*VAR_4->force_interrupt)(VAR_3);
}
