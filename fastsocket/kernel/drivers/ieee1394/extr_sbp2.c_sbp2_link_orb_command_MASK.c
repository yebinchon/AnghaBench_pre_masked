
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct sbp2_lu {int protocol_work; int shost; int ne; int cmd_orb_lock; scalar_t__ last_orb_dma; struct sbp2_command_orb* last_orb; int command_block_agent_addr; struct sbp2_fwhost_info* hi; } ;
struct sbp2_fwhost_info {TYPE_2__* host; } ;
struct sbp2_command_orb {scalar_t__ next_ORB_hi; int next_ORB_lo; } ;
struct sbp2_command_info {scalar_t__ command_orb_dma; struct sbp2_command_orb command_orb; } ;
typedef scalar_t__ quadlet_t ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ device; int node_id; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__,int,int ) ;
 int FUNC_4 (int ,scalar_t__,int,int ) ;
 int FUNC_5 (scalar_t__*,int) ;
 scalar_t__ FUNC_6 (int ,int ,scalar_t__*,size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 () ;

__attribute__((used)) static void FUNC_12(struct sbp2_lu *VAR_5,
      struct sbp2_command_info *VAR_6)
{
 struct sbp2_fwhost_info *VAR_7 = VAR_5->hi;
 struct sbp2_command_orb *VAR_8;
 dma_addr_t VAR_9;
 u64 VAR_10 = VAR_5->command_block_agent_addr;
 quadlet_t VAR_11[2];
 size_t VAR_12;
 unsigned long VAR_13;


 FUNC_9(&VAR_5->cmd_orb_lock, VAR_13);
 VAR_8 = VAR_5->last_orb;
 VAR_9 = VAR_5->last_orb_dma;
 if (!VAR_8) {




  VAR_10 += VAR_2;
  VAR_11[0] = FUNC_0(VAR_7->host->node_id);
  VAR_11[1] = VAR_6->command_orb_dma;
  FUNC_5(VAR_11, 8);
  VAR_12 = 8;
 } else {







  FUNC_3(VAR_7->host->device.parent, VAR_9,
     sizeof(struct sbp2_command_orb),
     VAR_0);
  VAR_8->next_ORB_lo = FUNC_2(VAR_6->command_orb_dma);
  FUNC_11();

  VAR_8->next_ORB_hi = 0;
  FUNC_4(VAR_7->host->device.parent,
        VAR_9,
        sizeof(struct sbp2_command_orb),
        VAR_0);
  VAR_10 += VAR_1;
  VAR_11[0] = 0;
  VAR_12 = 4;
 }
 VAR_5->last_orb = &VAR_6->command_orb;
 VAR_5->last_orb_dma = VAR_6->command_orb_dma;
 FUNC_10(&VAR_5->cmd_orb_lock, VAR_13);

 if (FUNC_6(VAR_5->ne, VAR_10, VAR_11, VAR_12)) {
  FUNC_8(VAR_5->shost);
  FUNC_1(&VAR_5->protocol_work,
        VAR_8 ? VAR_3:
     VAR_4);
  FUNC_7(&VAR_5->protocol_work);
 }
}
