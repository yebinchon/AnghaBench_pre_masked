
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int device; } ;
struct at_dma_chan {int mask; TYPE_1__ chan_common; } ;
struct at_dma {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct at_dma*,int ) ;
 struct at_dma* FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct at_dma_chan *VAR_1)
{
 struct at_dma *VAR_2 = FUNC_1(VAR_1->chan_common.device);

 return !!(FUNC_0(VAR_2, VAR_0) & VAR_1->mask);
}
