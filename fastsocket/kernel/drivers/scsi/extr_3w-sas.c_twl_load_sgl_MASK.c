
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
typedef int dma_addr_t ;
struct TYPE_13__ {int request_id; int size; int opcode__sgloffset; } ;
struct TYPE_12__ {void* sgl_entries__lunh; TYPE_1__* sg_list; void* request_id__lunl; int opcode__reserved; } ;
struct TYPE_9__ {TYPE_6__ oldcommand; TYPE_5__ newcommand; } ;
struct TYPE_11__ {TYPE_2__ command; } ;
struct TYPE_10__ {void* length; void* address; } ;
struct TYPE_8__ {void* length; void* address; } ;
typedef TYPE_3__ TW_SG_Entry_ISO ;
typedef int TW_Ioctl_Buf_Apache ;
typedef int TW_Device_Extension ;
typedef TYPE_4__ TW_Command_Full ;
typedef TYPE_5__ TW_Command_Apache ;
typedef TYPE_6__ TW_Command ;


 void* FUNC_0 (int) ;
 int FUNC_1 (void*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(TW_Device_Extension *VAR_1, TW_Command_Full *VAR_2, int VAR_3, dma_addr_t VAR_4, int VAR_5)
{
 TW_Command *VAR_6;
 TW_Command_Apache *VAR_7;
 TW_SG_Entry_ISO *VAR_8;
 unsigned int VAR_9 = 0;

 if ((sizeof(long) < 8) && (sizeof(dma_addr_t) > 4))
  VAR_9 = 1;

 if (FUNC_2(VAR_2->command.newcommand.opcode__reserved) == VAR_0) {
  VAR_7 = &VAR_2->command.newcommand;
  VAR_7->request_id__lunl =
   FUNC_5(FUNC_3(FUNC_1(VAR_7->request_id__lunl), VAR_3));
  if (VAR_5) {
   VAR_7->sg_list[0].address = FUNC_0(VAR_4 + sizeof(TW_Ioctl_Buf_Apache) - 1);
   VAR_7->sg_list[0].length = FUNC_0(VAR_5);
  }
  VAR_7->sgl_entries__lunh =
   FUNC_5(FUNC_3(FUNC_1(VAR_7->sgl_entries__lunh), VAR_5 ? 1 : 0));
 } else {
  VAR_6 = &VAR_2->command.oldcommand;
  VAR_6->request_id = VAR_3;

  if (FUNC_4(VAR_6->opcode__sgloffset)) {

   VAR_8 = (TW_SG_Entry_ISO *)((u32 *)VAR_6+VAR_6->size - (sizeof(TW_SG_Entry_ISO)/4) + VAR_9 + (sizeof(dma_addr_t) > 4 ? 1 : 0));
   VAR_8->address = FUNC_0(VAR_4 + sizeof(TW_Ioctl_Buf_Apache) - 1);
   VAR_8->length = FUNC_0(VAR_5);
   VAR_6->size += VAR_9;
   VAR_6->size += sizeof(dma_addr_t) > 4 ? 1 : 0;
  }
 }
}
