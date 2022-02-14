
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int channel; } ;
struct TYPE_4__ {int auth_mode; } ;
struct lbs_private {int mac_control; int radio_on; int enablehwauto; int event_fifo; scalar_t__* resp_len; scalar_t__ resp_idx; int cmd_pending; int driver_lock; int cmdpendingq; int cmdfreeq; int command_timer; int lock; int psstate; int psmode; int capability; TYPE_2__ curbssparams; int mode; TYPE_1__ secinfo; void* mesh_connect_status; void* connect_status; int current_addr; int network_free_list; TYPE_3__* networks; int network_list; } ;
struct bss_descriptor {int dummy; } ;
struct TYPE_6__ {int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int ,int *) ;
 TYPE_3__* FUNC_4 (size_t,int ) ;
 scalar_t__ FUNC_5 (struct lbs_private*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int ,int,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ,unsigned long) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct lbs_private *VAR_15)
{
 size_t VAR_16;
 int VAR_17, VAR_18 = 0;

 FUNC_6(VAR_9);


 VAR_16 = VAR_11 * sizeof(struct bss_descriptor);
 VAR_15->networks = FUNC_4(VAR_16, VAR_5);
 if (!VAR_15->networks) {
  FUNC_8("Out of memory allocating beacons\n");
  VAR_18 = -1;
  goto out;
 }


 FUNC_0(&VAR_15->network_free_list);
 FUNC_0(&VAR_15->network_list);
 for (VAR_17 = 0; VAR_17 < VAR_11; VAR_17++) {
  FUNC_9(&VAR_15->networks[VAR_17].list,
         &VAR_15->network_free_list);
 }

 FUNC_10(VAR_15->current_addr, 0xff, VAR_4);

 VAR_15->connect_status = VAR_10;
 VAR_15->mesh_connect_status = VAR_10;
 VAR_15->secinfo.auth_mode = VAR_6;
 VAR_15->mode = VAR_7;
 VAR_15->curbssparams.channel = VAR_2;
 VAR_15->mac_control = VAR_0 | VAR_1;
 VAR_15->radio_on = 1;
 VAR_15->enablehwauto = 1;
 VAR_15->capability = VAR_13;
 VAR_15->psmode = VAR_8;
 VAR_15->psstate = VAR_12;

 FUNC_11(&VAR_15->lock);

 FUNC_12(&VAR_15->command_timer, VAR_14,
  (unsigned long)VAR_15);

 FUNC_0(&VAR_15->cmdfreeq);
 FUNC_0(&VAR_15->cmdpendingq);

 FUNC_13(&VAR_15->driver_lock);
 FUNC_2(&VAR_15->cmd_pending);


 if (FUNC_5(VAR_15)) {
  FUNC_8("Out of memory allocating command buffers\n");
  VAR_18 = -VAR_3;
  goto out;
 }
 VAR_15->resp_idx = 0;
 VAR_15->resp_len[0] = VAR_15->resp_len[1] = 0;


 VAR_15->event_fifo = FUNC_3(sizeof(u32) * 16, VAR_5, ((void*)0));
 if (FUNC_1(VAR_15->event_fifo)) {
  FUNC_8("Out of memory allocating event FIFO buffer\n");
  VAR_18 = -VAR_3;
  goto out;
 }

out:
 FUNC_7(VAR_9, "ret %d", VAR_18);

 return VAR_18;
}
