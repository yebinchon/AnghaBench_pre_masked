
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_ohci {int dummy; } ;
struct dma_iso_ctx {int flags; int syt_offset; int num_desc; int ctx; int ctrlClear; scalar_t__ ohci; } ;


 int VAR_0 ;
 int FUNC_0 (struct dma_iso_ctx*,int,int) ;
 int FUNC_1 (struct ti_ohci*,int ,int *) ;
 int FUNC_2 (struct ti_ohci*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct dma_iso_ctx *VAR_1, int VAR_2,
      unsigned int VAR_3, int VAR_4)
{
 struct ti_ohci *VAR_5 = (struct ti_ohci *)VAR_1->ohci;
 int VAR_6;

 VAR_1->flags = VAR_4;
 VAR_1->syt_offset = (VAR_3 == 0 ? 11000 : VAR_3);

 FUNC_1(VAR_5, VAR_1->ctrlClear, ((void*)0));

 for (VAR_6=0;VAR_6<VAR_1->num_desc;VAR_6++)
  FUNC_0(VAR_1, VAR_6, VAR_2);


 FUNC_2(VAR_5, VAR_0, 1<<VAR_1->ctx);
}
