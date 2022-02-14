
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ reg_base; } ;
struct ioat2_dma_chan {TYPE_1__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ioat2_dma_chan*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_3)
{
 struct ioat2_dma_chan *VAR_4 = (void *) VAR_3;

 FUNC_0(VAR_4);
 FUNC_1(VAR_2 | VAR_0,
        VAR_4->base.reg_base + VAR_1);
}
