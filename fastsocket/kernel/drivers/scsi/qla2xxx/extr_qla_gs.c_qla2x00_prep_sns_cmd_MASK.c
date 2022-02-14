
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {void* size; void* subcommand; void* subcommand_length; void** buffer_address; void* buffer_length; } ;
struct TYPE_6__ {TYPE_1__ cmd; } ;
struct sns_cmd_pkt {TYPE_2__ p; } ;
struct qla_hw_data {int sns_cmd_dma; struct sns_cmd_pkt* sns_cmd; } ;
struct TYPE_7__ {struct qla_hw_data* hw; } ;
typedef TYPE_3__ scsi_qla_host_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct sns_cmd_pkt*,int ,int) ;

__attribute__((used)) static inline struct sns_cmd_pkt *
FUNC_5(scsi_qla_host_t *VAR_0, uint16_t VAR_1, uint16_t VAR_2,
    uint16_t VAR_3)
{
 uint16_t VAR_4;
 struct sns_cmd_pkt *VAR_5;
 struct qla_hw_data *VAR_6 = VAR_0->hw;

 VAR_5 = VAR_6->sns_cmd;
 FUNC_4(VAR_5, 0, sizeof(struct sns_cmd_pkt));
 VAR_4 = VAR_3 / 2;
 VAR_5->p.cmd.buffer_length = FUNC_2(VAR_4);
 VAR_5->p.cmd.buffer_address[0] = FUNC_3(FUNC_0(VAR_6->sns_cmd_dma));
 VAR_5->p.cmd.buffer_address[1] = FUNC_3(FUNC_1(VAR_6->sns_cmd_dma));
 VAR_5->p.cmd.subcommand_length = FUNC_2(VAR_2);
 VAR_5->p.cmd.subcommand = FUNC_2(VAR_1);
 VAR_4 = (VAR_3 - 16) / 4;
 VAR_5->p.cmd.size = FUNC_2(VAR_4);

 return (VAR_5);
}
