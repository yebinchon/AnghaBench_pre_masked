
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u32 ;
typedef int dma_addr_t ;
struct TYPE_13__ {int oldcommand; } ;
struct TYPE_11__ {int size_header; } ;
struct TYPE_12__ {TYPE_1__ header_desc; } ;
struct TYPE_16__ {TYPE_3__ command; TYPE_2__ header; } ;
struct TYPE_15__ {int * state; int posted_request_count; int host; TYPE_6__** command_packet_virt; } ;
struct TYPE_14__ {int request_id; int features; int result; void* fw_build; void* fw_branch; void* fw_arch_id; void* fw_srl; int size; void* message_credits; int opcode__reserved; } ;
typedef TYPE_4__ TW_Initconnect ;
typedef TYPE_5__ TW_Device_Extension ;
typedef TYPE_6__ TW_Command_Full ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int,char*) ;
 int VAR_5 ;
 void* FUNC_2 (unsigned short) ;
 int FUNC_3 (int) ;
 unsigned short FUNC_4 (void*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_6__*,int ,int) ;
 scalar_t__ FUNC_7 (TYPE_5__*,int,int) ;
 int FUNC_8 (TYPE_5__*,int,int) ;

__attribute__((used)) static int FUNC_9(TW_Device_Extension *VAR_6, int VAR_7,
          u32 VAR_8, unsigned short VAR_9,
         unsigned short VAR_10,
         unsigned short VAR_11,
         unsigned short VAR_12,
         unsigned short *VAR_13,
         unsigned short *VAR_14,
         unsigned short *VAR_15,
         unsigned short *VAR_16,
         u32 *VAR_17)
{
 TW_Command_Full *VAR_18;
 TW_Initconnect *VAR_19;
 int VAR_20 = 0, VAR_21 = 1;


 VAR_18 = VAR_6->command_packet_virt[VAR_20];
 FUNC_6(VAR_18, 0, sizeof(TW_Command_Full));
 VAR_18->header.header_desc.size_header = 128;

 VAR_19 = (TW_Initconnect *)&VAR_18->command.oldcommand;
 VAR_19->opcode__reserved = FUNC_0(0, VAR_4);
 VAR_19->request_id = VAR_20;
 VAR_19->message_credits = FUNC_2(VAR_7);
 VAR_19->features = VAR_8;


 VAR_19->features |= sizeof(dma_addr_t) > 4 ? 1 : 0;

 VAR_19->features = FUNC_3(VAR_19->features);

 if (VAR_8 & VAR_1) {
  VAR_19->size = VAR_3;
  VAR_19->fw_srl = FUNC_2(VAR_9);
  VAR_19->fw_arch_id = FUNC_2(VAR_10);
  VAR_19->fw_branch = FUNC_2(VAR_11);
  VAR_19->fw_build = FUNC_2(VAR_12);
 } else
  VAR_19->size = VAR_2;


 FUNC_8(VAR_6, VAR_20, 1);


 if (FUNC_7(VAR_6, VAR_20, 30)) {
  FUNC_1(VAR_6->host, VAR_0, 0x15, "No valid response during init connection");
 } else {
  if (VAR_8 & VAR_1) {
   *VAR_13 = FUNC_4(VAR_19->fw_srl);
   *VAR_14 = FUNC_4(VAR_19->fw_arch_id);
   *VAR_15 = FUNC_4(VAR_19->fw_branch);
   *VAR_16 = FUNC_4(VAR_19->fw_build);
   *VAR_17 = FUNC_5(VAR_19->result);
  }
  VAR_21 = 0;
 }

 VAR_6->posted_request_count--;
 VAR_6->state[VAR_20] = VAR_5;

 return VAR_21;
}
