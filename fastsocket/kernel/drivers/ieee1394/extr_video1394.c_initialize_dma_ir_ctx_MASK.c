
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_ohci {int dummy; } ;
struct dma_iso_ctx {int flags; int num_desc; int channel; int ctx; int ctxMatch; int ctrlSet; int ctrlClear; scalar_t__ ohci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dma_iso_ctx*,int,int) ;
 int FUNC_1 (struct ti_ohci*,int ,int *) ;
 int FUNC_2 (struct ti_ohci*,int ,int) ;
 int FUNC_3 (struct dma_iso_ctx*,int) ;

__attribute__((used)) static void FUNC_4(struct dma_iso_ctx *VAR_2, int VAR_3, int VAR_4)
{
 struct ti_ohci *VAR_5 = (struct ti_ohci *)VAR_2->ohci;
 int VAR_6;

 VAR_2->flags = VAR_4;

 FUNC_1(VAR_5, VAR_2->ctrlClear, ((void*)0));

 for (VAR_6=0;VAR_6<VAR_2->num_desc;VAR_6++) {
  FUNC_0(VAR_2, VAR_6, VAR_4);
  FUNC_3(VAR_2, VAR_6);
 }


 FUNC_2(VAR_5, VAR_2->ctrlClear, 0xf0000000);


 FUNC_2(VAR_5, VAR_2->ctrlSet, 0x80000000);


 if (VAR_4 & VAR_1)
  FUNC_2(VAR_5, VAR_2->ctrlSet, 0x40000000);



 FUNC_2(VAR_5, VAR_2->ctxMatch, 0xf0000000|((VAR_3&0xf)<<8)|VAR_2->channel);


 FUNC_2(VAR_5, VAR_0, 1<<VAR_2->ctx);
}
