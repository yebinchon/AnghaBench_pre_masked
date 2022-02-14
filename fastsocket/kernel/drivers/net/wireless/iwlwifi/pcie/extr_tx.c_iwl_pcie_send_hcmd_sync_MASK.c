
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_queue {int write_ptr; int read_ptr; } ;
struct iwl_txq {TYPE_2__* entries; struct iwl_queue q; } ;
struct iwl_trans_pcie {size_t cmd_queue; struct iwl_txq* txq; int status; int wait_command_queue; } ;
struct iwl_trans {int dummy; } ;
struct iwl_host_cmd {int flags; int * resp_pkt; int id; } ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ meta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct iwl_trans*,char*,int ) ;
 int FUNC_1 (struct iwl_trans*,char*) ;
 int FUNC_2 (struct iwl_trans*,char*,int ,...) ;
 struct iwl_trans_pcie* FUNC_3 (struct iwl_trans*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct iwl_trans_pcie*,int ) ;
 int FUNC_7 (struct iwl_host_cmd*) ;
 int FUNC_8 (struct iwl_trans*,struct iwl_host_cmd*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,int,int ) ;

__attribute__((used)) static int FUNC_13(struct iwl_trans *VAR_8,
       struct iwl_host_cmd *VAR_9)
{
 struct iwl_trans_pcie *VAR_10 = FUNC_3(VAR_8);
 int VAR_11;
 int VAR_12;

 FUNC_0(VAR_8, "Attempting to send sync command %s\n",
         FUNC_6(VAR_10, VAR_9->id));

 if (FUNC_4(FUNC_10(VAR_6,
         &VAR_10->status))) {
  FUNC_2(VAR_8, "Command %s: a command is already active!\n",
   FUNC_6(VAR_10, VAR_9->id));
  return -VAR_1;
 }

 FUNC_0(VAR_8, "Setting HCMD_ACTIVE for command %s\n",
         FUNC_6(VAR_10, VAR_9->id));

 VAR_11 = FUNC_8(VAR_8, VAR_9);
 if (VAR_11 < 0) {
  VAR_12 = VAR_11;
  FUNC_5(VAR_6, &VAR_10->status);
  FUNC_2(VAR_8,
   "Error sending %s: enqueue_hcmd failed: %d\n",
   FUNC_6(VAR_10, VAR_9->id), VAR_12);
  return VAR_12;
 }

 VAR_12 = FUNC_12(VAR_10->wait_command_queue,
     !FUNC_11(VAR_6,
        &VAR_10->status),
     VAR_4);
 if (!VAR_12) {
  if (FUNC_11(VAR_6, &VAR_10->status)) {
   struct iwl_txq *VAR_13 =
    &VAR_10->txq[VAR_10->cmd_queue];
   struct iwl_queue *VAR_14 = &VAR_13->q;

   FUNC_2(VAR_8,
    "Error sending %s: time out after %dms.\n",
    FUNC_6(VAR_10, VAR_9->id),
    FUNC_9(VAR_4));

   FUNC_2(VAR_8,
    "Current CMD queue read_ptr %d write_ptr %d\n",
    VAR_14->read_ptr, VAR_14->write_ptr);

   FUNC_5(VAR_6, &VAR_10->status);
   FUNC_0(VAR_8,
           "Clearing HCMD_ACTIVE for command %s\n",
           FUNC_6(VAR_10, VAR_9->id));
   VAR_12 = -VAR_3;
   goto cancel;
  }
 }

 if (FUNC_11(VAR_5, &VAR_10->status)) {
  FUNC_2(VAR_8, "FW error in SYNC CMD %s\n",
   FUNC_6(VAR_10, VAR_9->id));
  VAR_12 = -VAR_1;
  goto cancel;
 }

 if (FUNC_11(VAR_7, &VAR_10->status)) {
  FUNC_1(VAR_8, "RFKILL in SYNC CMD... no rsp\n");
  VAR_12 = -VAR_2;
  goto cancel;
 }

 if ((VAR_9->flags & VAR_0) && !VAR_9->resp_pkt) {
  FUNC_2(VAR_8, "Error: Response NULL in '%s'\n",
   FUNC_6(VAR_10, VAR_9->id));
  VAR_12 = -VAR_1;
  goto cancel;
 }

 return 0;

cancel:
 if (VAR_9->flags & VAR_0) {






  VAR_10->txq[VAR_10->cmd_queue].
   entries[VAR_11].meta.flags &= ~VAR_0;
 }

 if (VAR_9->resp_pkt) {
  FUNC_7(VAR_9);
  VAR_9->resp_pkt = ((void*)0);
 }

 return VAR_12;
}
