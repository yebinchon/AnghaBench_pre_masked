
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_2__ {int request_type; void** cdb; } ;
struct ipr_ioarcb {TYPE_1__ cmd_pkt; int res_handle; } ;
struct ipr_cmnd {struct ipr_ioarcb ioarcb; } ;
typedef int dma_addr_t ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (struct ipr_cmnd*,int ,void*,int ) ;

__attribute__((used)) static void FUNC_1(struct ipr_cmnd *VAR_3,
     __be32 VAR_4,
     u8 VAR_5, dma_addr_t VAR_6, u8 VAR_7)
{
 struct ipr_ioarcb *VAR_8 = &VAR_3->ioarcb;

 VAR_8->res_handle = VAR_4;
 VAR_8->cmd_pkt.cdb[0] = VAR_2;
 VAR_8->cmd_pkt.cdb[2] = VAR_5;
 VAR_8->cmd_pkt.cdb[4] = VAR_7;
 VAR_8->cmd_pkt.request_type = VAR_1;

 FUNC_0(VAR_3, VAR_6, VAR_7, VAR_0);
}
