
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbp2_logical_unit {scalar_t__ command_block_agent_address; int generation; TYPE_1__* tgt; } ;
struct fw_device {int max_speed; int card; } ;
typedef int d ;
typedef int __be32 ;
struct TYPE_2__ {int node_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int ,scalar_t__,int *,int) ;
 struct fw_device* FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct sbp2_logical_unit *VAR_2)
{
 struct fw_device *VAR_3 = FUNC_1(VAR_2->tgt);
 __be32 VAR_4 = 0;

 FUNC_0(VAR_3->card, VAR_1,
      VAR_2->tgt->node_id, VAR_2->generation, VAR_3->max_speed,
      VAR_2->command_block_agent_address + VAR_0,
      &VAR_4, sizeof(VAR_4));
}
