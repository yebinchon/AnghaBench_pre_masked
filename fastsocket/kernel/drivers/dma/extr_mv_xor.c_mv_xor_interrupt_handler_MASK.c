
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mv_xor_chan {int irq_tasklet; TYPE_2__* device; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {TYPE_1__ common; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct mv_xor_chan*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct mv_xor_chan*) ;
 int FUNC_4 (struct mv_xor_chan*,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_1, void *VAR_2)
{
 struct mv_xor_chan *VAR_3 = VAR_2;
 u32 VAR_4 = FUNC_1(VAR_3);

 FUNC_0(VAR_3->device->common.dev, "intr cause %x\n", VAR_4);

 if (FUNC_2(VAR_4))
  FUNC_4(VAR_3, VAR_4);

 FUNC_5(&VAR_3->irq_tasklet);

 FUNC_3(VAR_3);

 return VAR_0;
}
