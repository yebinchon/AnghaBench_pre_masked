
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ reg_base; } ;
struct ioat_dma_chan {TYPE_1__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ioat_dma_chan*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_2)
{
 struct ioat_dma_chan *VAR_3 = (void *)VAR_2;

 FUNC_0(VAR_3);
 FUNC_1(VAR_1, VAR_3->base.reg_base + VAR_0);
}
