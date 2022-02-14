
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ti_ohci {int dummy; } ;
struct dma_rcv_ctx {int num_desc; int ctrlSet; int ctx; TYPE_1__** prg_cpu; int buf_size; scalar_t__ ohci; } ;
struct TYPE_2__ {int branchAddress; int status; } ;


 int FUNC_0 (char*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ti_ohci*,int ) ;
 int FUNC_5 (struct ti_ohci*,int ,int) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct dma_rcv_ctx *VAR_1, int VAR_2)
{
 struct ti_ohci *VAR_3 = (struct ti_ohci*)(VAR_1->ohci);
 FUNC_0("Inserting dma buf ctx=%d idx=%d", VAR_1->ctx, VAR_2);

 VAR_1->prg_cpu[VAR_2]->status = FUNC_2(VAR_1->buf_size);
 VAR_1->prg_cpu[VAR_2]->branchAddress &= FUNC_3(0xfffffff0);
 VAR_2 = (VAR_2 + VAR_1->num_desc - 1 ) % VAR_1->num_desc;
 VAR_1->prg_cpu[VAR_2]->branchAddress |= FUNC_3(0x00000001);



 FUNC_6();


 if (!(FUNC_4(VAR_3, VAR_1->ctrlSet) & 0x400)) {
  FUNC_1(VAR_0,
        "Waking dma ctx=%d ... processing is probably too slow",
        VAR_1->ctx);
 }


 FUNC_5(VAR_3, VAR_1->ctrlSet, 0x1000);
}
