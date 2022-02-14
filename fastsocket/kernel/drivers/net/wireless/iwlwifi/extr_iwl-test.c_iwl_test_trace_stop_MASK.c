
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dma_addr; scalar_t__ cpu_addr; int tsize; int enabled; } ;
struct iwl_test {TYPE_2__ trace; TYPE_1__* trans; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct iwl_test*) ;

__attribute__((used)) static void FUNC_2(struct iwl_test *VAR_0)
{
 if (!VAR_0->trace.enabled)
  return;

 if (VAR_0->trace.cpu_addr && VAR_0->trace.dma_addr)
  FUNC_0(VAR_0->trans->dev,
      VAR_0->trace.tsize,
      VAR_0->trace.cpu_addr,
      VAR_0->trace.dma_addr);

 FUNC_1(VAR_0);
}
