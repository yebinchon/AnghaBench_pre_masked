
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int chan_id; int device; } ;
struct at_dma_chan {TYPE_1__ chan_common; } ;
struct at_dma {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct at_dma*,int ,int) ;
 struct at_dma* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct at_dma_chan *VAR_2, int VAR_3)
{
 struct at_dma *VAR_4 = FUNC_3(VAR_2->chan_common.device);
 u32 VAR_5;


 VAR_5 = FUNC_0(VAR_2->chan_common.chan_id)
  | FUNC_1(VAR_2->chan_common.chan_id);
 if (VAR_3)
  FUNC_2(VAR_4, VAR_1, VAR_5);
 else
  FUNC_2(VAR_4, VAR_0, VAR_5);
}
