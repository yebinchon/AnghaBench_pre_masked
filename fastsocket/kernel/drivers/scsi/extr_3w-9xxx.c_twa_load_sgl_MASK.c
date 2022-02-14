
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_18__ {int request_id; int size; int opcode__sgloffset; } ;
struct TYPE_17__ {void* sgl_entries__lunh; TYPE_1__* sg_list; void* request_id__lunl; int opcode__reserved; } ;
struct TYPE_12__ {TYPE_8__ oldcommand; TYPE_7__ newcommand; } ;
struct TYPE_16__ {TYPE_2__ command; } ;
struct TYPE_15__ {TYPE_3__* tw_pci_dev; } ;
struct TYPE_14__ {void* length; void* address; } ;
struct TYPE_13__ {scalar_t__ device; } ;
struct TYPE_11__ {void* length; void* address; } ;
typedef TYPE_4__ TW_SG_Entry ;
typedef int TW_Ioctl_Buf_Apache ;
typedef TYPE_5__ TW_Device_Extension ;
typedef TYPE_6__ TW_Command_Full ;
typedef TYPE_7__ TW_Command_Apache ;
typedef TYPE_8__ TW_Command ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (void*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 void* FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(TW_Device_Extension *VAR_2, TW_Command_Full *VAR_3, int VAR_4, dma_addr_t VAR_5, int VAR_6)
{
 TW_Command *VAR_7;
 TW_Command_Apache *VAR_8;
 TW_SG_Entry *VAR_9;
 unsigned int VAR_10 = 0;

 if ((sizeof(long) < 8) && (sizeof(dma_addr_t) > 4))
  VAR_10 = 1;

 if (FUNC_2(VAR_3->command.newcommand.opcode__reserved) == VAR_1) {
  VAR_8 = &VAR_3->command.newcommand;
  VAR_8->request_id__lunl =
   FUNC_5(FUNC_3(FUNC_1(VAR_8->request_id__lunl), VAR_4));
  if (VAR_6) {
   VAR_8->sg_list[0].address = FUNC_0(VAR_5 + sizeof(TW_Ioctl_Buf_Apache) - 1);
   VAR_8->sg_list[0].length = FUNC_6(VAR_6);
  }
  VAR_8->sgl_entries__lunh =
   FUNC_5(FUNC_3(FUNC_1(VAR_8->sgl_entries__lunh), VAR_6 ? 1 : 0));
 } else {
  VAR_7 = &VAR_3->command.oldcommand;
  VAR_7->request_id = VAR_4;

  if (FUNC_4(VAR_7->opcode__sgloffset)) {

   if (VAR_2->tw_pci_dev->device == VAR_0)
    VAR_9 = (TW_SG_Entry *)((u32 *)VAR_7+VAR_7->size - (sizeof(TW_SG_Entry)/4) + VAR_10);
   else
    VAR_9 = (TW_SG_Entry *)((u32 *)VAR_7+FUNC_4(VAR_7->opcode__sgloffset));
   VAR_9->address = FUNC_0(VAR_5 + sizeof(TW_Ioctl_Buf_Apache) - 1);
   VAR_9->length = FUNC_6(VAR_6);

   VAR_7->size += VAR_10;
  }
 }
}
