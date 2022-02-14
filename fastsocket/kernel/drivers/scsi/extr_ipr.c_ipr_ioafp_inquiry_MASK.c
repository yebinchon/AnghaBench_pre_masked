
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_2__ {void** cdb; int request_type; } ;
struct ipr_ioarcb {TYPE_1__ cmd_pkt; int res_handle; } ;
struct ipr_cmnd {struct ipr_ioarcb ioarcb; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ipr_cmnd*,int ,int ,int ) ;
 int FUNC_2 (struct ipr_cmnd*,int ,void*,int ) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_3(struct ipr_cmnd *VAR_9, u8 VAR_10, u8 VAR_11,
         dma_addr_t VAR_12, u8 VAR_13)
{
 struct ipr_ioarcb *VAR_14 = &VAR_9->ioarcb;

 VAR_0;
 VAR_14->cmd_pkt.request_type = VAR_5;
 VAR_14->res_handle = FUNC_0(VAR_4);

 VAR_14->cmd_pkt.cdb[0] = VAR_1;
 VAR_14->cmd_pkt.cdb[1] = VAR_10;
 VAR_14->cmd_pkt.cdb[2] = VAR_11;
 VAR_14->cmd_pkt.cdb[4] = VAR_13;

 FUNC_2(VAR_9, VAR_12, VAR_13, VAR_3);

 FUNC_1(VAR_9, VAR_7, VAR_8, VAR_2);
 VAR_6;
}
