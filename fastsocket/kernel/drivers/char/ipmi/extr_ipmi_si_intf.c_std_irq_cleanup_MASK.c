
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* outputb ) (TYPE_1__*,int ,int ) ;} ;
struct smi_info {scalar_t__ si_type; int irq; TYPE_1__ io; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct smi_info*) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct smi_info *VAR_2)
{
 if (VAR_2->si_type == VAR_1)

  VAR_2->io.outputb(&VAR_2->io, VAR_0, 0);
 FUNC_0(VAR_2->irq, VAR_2);
}
