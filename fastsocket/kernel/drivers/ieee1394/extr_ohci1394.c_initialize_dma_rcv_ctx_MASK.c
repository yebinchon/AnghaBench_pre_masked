
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ti_ohci {int dummy; } ;
struct dma_rcv_ctx {int num_desc; int buf_size; int* prg_bus; int* buf_bus; scalar_t__ type; int ctx; int ctrlSet; int cmdPtr; int ctxtMatch; int ctrlClear; scalar_t__ buf_offset; scalar_t__ buf_ind; TYPE_1__** prg_cpu; scalar_t__ ohci; } ;
struct TYPE_2__ {void* status; void* address; void* branchAddress; void* control; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct ti_ohci*,int ,int *) ;
 int FUNC_3 (struct ti_ohci*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct dma_rcv_ctx *VAR_8, int VAR_9)
{
 struct ti_ohci *VAR_10 = (struct ti_ohci*)(VAR_8->ohci);
 int VAR_11;

 FUNC_2(VAR_10, VAR_8->ctrlClear, ((void*)0));

 for (VAR_11=0; VAR_11<VAR_8->num_desc; VAR_11++) {
  u32 VAR_12;

  VAR_12 = VAR_1 | VAR_3 | VAR_0;
  if (VAR_9)
   VAR_12 |= VAR_2;

  VAR_8->prg_cpu[VAR_11]->control = FUNC_1(VAR_12 | VAR_8->buf_size);


  if (VAR_11 + 1 < VAR_8->num_desc) {
   VAR_8->prg_cpu[VAR_11]->branchAddress =
    FUNC_1((VAR_8->prg_bus[VAR_11+1] & 0xfffffff0) | 0x1);
  } else {
   VAR_8->prg_cpu[VAR_11]->branchAddress =
    FUNC_1((VAR_8->prg_bus[0] & 0xfffffff0));
  }

  VAR_8->prg_cpu[VAR_11]->address = FUNC_1(VAR_8->buf_bus[VAR_11]);
  VAR_8->prg_cpu[VAR_11]->status = FUNC_1(VAR_8->buf_size);
 }

        VAR_8->buf_ind = 0;
        VAR_8->buf_offset = 0;

 if (VAR_8->type == VAR_4) {

  FUNC_3(VAR_10, VAR_8->ctrlClear, 0xffffffff);


  FUNC_3(VAR_10, VAR_8->ctrlSet, 0xd0000000);


  FUNC_3(VAR_10, VAR_8->ctxtMatch, 0xf0000000);


  FUNC_3(VAR_10, VAR_5, 0xffffffff);
  FUNC_3(VAR_10, VAR_6, 0xffffffff);


  FUNC_3(VAR_10, VAR_7, 1 << VAR_8->ctx);
 }


 FUNC_3(VAR_10, VAR_8->cmdPtr, VAR_8->prg_bus[0] | 0x1);


 FUNC_3(VAR_10, VAR_8->ctrlSet, 0x00008000);

 FUNC_0("Receive DMA ctx=%d initialized", VAR_8->ctx);
}
