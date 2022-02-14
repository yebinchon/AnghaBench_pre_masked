
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct unit_directory {int device; TYPE_3__* ne; } ;
struct sbp2_status_block {int dummy; } ;
struct sbp2_lu {size_t speed_code; scalar_t__ status_fifo_addr; struct Scsi_Host* shost; int lu_list; struct sbp2_fwhost_info* hi; int protocol_work; int state; int cmd_orb_lock; int cmd_orb_completed; int cmd_orb_inuse; int max_payload_size; struct unit_directory* ud; TYPE_3__* ne; } ;
struct sbp2_fwhost_info {int logical_units; TYPE_4__* host; } ;
struct Scsi_Host {unsigned long* hostdata; int max_cmd_len; } ;
typedef int quadlet_t ;
struct TYPE_8__ {int parent; } ;
struct TYPE_11__ {int low_addr_space; TYPE_2__* driver; TYPE_1__ device; } ;
struct TYPE_10__ {TYPE_4__* host; } ;
struct TYPE_9__ {int owner; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int VAR_4 ;
 int FUNC_3 (char*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,struct sbp2_lu*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,scalar_t__) ;
 scalar_t__ FUNC_8 (int *,TYPE_4__*,int *,int,int,int ,int ) ;
 struct sbp2_fwhost_info* FUNC_9 (int *,TYPE_4__*,int) ;
 struct sbp2_fwhost_info* FUNC_10 (int *,TYPE_4__*) ;
 int FUNC_11 (int *,TYPE_4__*,int *,int,int) ;
 struct sbp2_lu* FUNC_12 (int,int ) ;
 int FUNC_13 (int *,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_14 (struct sbp2_lu*) ;
 int VAR_11 ;
 int * VAR_12 ;
 int FUNC_15 (struct Scsi_Host*,int *) ;
 struct Scsi_Host* FUNC_16 (int *,int) ;
 int FUNC_17 (struct Scsi_Host*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int *,unsigned long) ;
 int FUNC_21 (int *,unsigned long) ;

__attribute__((used)) static struct sbp2_lu *FUNC_22(struct unit_directory *VAR_13)
{
 struct sbp2_fwhost_info *VAR_14;
 struct Scsi_Host *VAR_15 = ((void*)0);
 struct sbp2_lu *VAR_16 = ((void*)0);
 unsigned long VAR_17;

 VAR_16 = FUNC_12(sizeof(*VAR_16), VAR_2);
 if (!VAR_16) {
  FUNC_3("failed to create lu");
  goto failed_alloc;
 }

 VAR_16->ne = VAR_13->ne;
 VAR_16->ud = VAR_13;
 VAR_16->speed_code = VAR_3;
 VAR_16->max_payload_size = VAR_12[VAR_3];
 VAR_16->status_fifo_addr = VAR_1;
 FUNC_1(&VAR_16->cmd_orb_inuse);
 FUNC_1(&VAR_16->cmd_orb_completed);
 FUNC_1(&VAR_16->lu_list);
 FUNC_18(&VAR_16->cmd_orb_lock);
 FUNC_4(&VAR_16->state, VAR_4);
 FUNC_2(&VAR_16->protocol_work, ((void*)0));

 FUNC_5(&VAR_13->device, VAR_16);

 VAR_14 = FUNC_10(&VAR_8, VAR_13->ne->host);
 if (!VAR_14) {
  VAR_14 = FUNC_9(&VAR_8, VAR_13->ne->host,
       sizeof(*VAR_14));
  if (!VAR_14) {
   FUNC_3("failed to allocate hostinfo");
   goto failed_alloc;
  }
  VAR_14->host = VAR_13->ne->host;
  FUNC_1(&VAR_14->logical_units);
 }

 if (FUNC_6(VAR_14->host->device.parent) > VAR_6)
  FUNC_0(FUNC_7(VAR_14->host->device.parent,
         VAR_6));


 if (!FUNC_19(VAR_14->host->driver->owner)) {
  FUNC_3("failed to get a reference on 1394 host driver");
  goto failed_alloc;
 }

 VAR_16->hi = VAR_14;

 FUNC_20(&VAR_7, VAR_17);
 FUNC_13(&VAR_16->lu_list, &VAR_14->logical_units);
 FUNC_21(&VAR_7, VAR_17);
 VAR_16->status_fifo_addr = FUNC_8(
   &VAR_8, VAR_13->ne->host, &VAR_9,
   sizeof(struct sbp2_status_block), sizeof(quadlet_t),
   VAR_13->ne->host->low_addr_space, VAR_0);
 if (VAR_16->status_fifo_addr == VAR_1) {
  FUNC_3("failed to allocate status FIFO address range");
  goto failed_alloc;
 }

 VAR_15 = FUNC_16(&VAR_11, sizeof(unsigned long));
 if (!VAR_15) {
  FUNC_3("failed to register scsi host");
  goto failed_alloc;
 }

 VAR_15->hostdata[0] = (unsigned long)VAR_16;
 VAR_15->max_cmd_len = VAR_5;

 if (!FUNC_15(VAR_15, &VAR_13->device)) {
  VAR_16->shost = VAR_15;
  return VAR_16;
 }

 FUNC_3("failed to add scsi host");
 FUNC_17(VAR_15);

failed_alloc:
 FUNC_14(VAR_16);
 return ((void*)0);
}
