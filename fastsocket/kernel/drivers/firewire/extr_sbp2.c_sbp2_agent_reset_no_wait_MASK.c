
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbp2_logical_unit {scalar_t__ command_block_agent_address; int generation; TYPE_1__* tgt; } ;
struct fw_transaction {int dummy; } ;
struct fw_device {int max_speed; int card; } ;
typedef int d ;
typedef int __be32 ;
struct TYPE_2__ {int node_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct fw_transaction*,int ,int ,int ,int ,scalar_t__,int *,int,int ,struct fw_transaction*) ;
 struct fw_transaction* FUNC_1 (int,int ) ;
 struct fw_device* FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct sbp2_logical_unit *VAR_4)
{
 struct fw_device *VAR_5 = FUNC_2(VAR_4->tgt);
 struct fw_transaction *VAR_6;
 static __be32 VAR_7;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_0);
 if (VAR_6 == ((void*)0))
  return;

 FUNC_0(VAR_5->card, VAR_6, VAR_2,
   VAR_4->tgt->node_id, VAR_4->generation, VAR_5->max_speed,
   VAR_4->command_block_agent_address + VAR_1,
   &VAR_7, sizeof(VAR_7), VAR_3, VAR_6);
}
