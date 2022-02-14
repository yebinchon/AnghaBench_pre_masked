
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_13__ {int cpu_affinity_enabled; } ;
struct qla_hw_data {TYPE_2__ flags; int vport_lock; int vp_idx_map; int cur_vport_count; } ;
struct fc_vport {TYPE_3__* dd_data; } ;
struct TYPE_12__ {int delete_progress; } ;
struct TYPE_14__ {int host; TYPE_7__* req; int vp_idx; int vref_count; scalar_t__ timer_active; TYPE_1__ flags; int dpc_flags; struct qla_hw_data* hw; } ;
typedef TYPE_3__ scsi_qla_host_t ;
struct TYPE_15__ {scalar_t__ id; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;
 int FUNC_7 (int,TYPE_3__*,int,char*,int ) ;
 int VAR_4 ;
 int FUNC_8 (int ,TYPE_3__*,int,char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 scalar_t__ FUNC_11 (TYPE_3__*,TYPE_7__*) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 () ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ,int *) ;

__attribute__((used)) static int
FUNC_18(struct fc_vport *VAR_7)
{
 scsi_qla_host_t *VAR_8 = VAR_7->dd_data;
 struct qla_hw_data *VAR_9 = VAR_8->hw;
 uint16_t VAR_10 = VAR_8->vp_idx;

 while (FUNC_17(VAR_1, &VAR_8->dpc_flags) ||
     FUNC_17(VAR_0, &VAR_8->dpc_flags))
  FUNC_4(1000);

 FUNC_10(VAR_8);

 VAR_8->flags.delete_progress = 1;

 FUNC_3(VAR_8->host);

 FUNC_16(VAR_8->host);


 FUNC_9(VAR_8);

 if (VAR_8->timer_active) {
  FUNC_13(VAR_8);
  FUNC_7(VAR_4, VAR_8, 0x7086,
      "Timer for the VP[%d] has stopped\n", VAR_8->vp_idx);
 }


 if (VAR_3 & VAR_4)
  FUNC_4(FUNC_14()%10);


 FUNC_0(FUNC_1(&VAR_8->vref_count));

 FUNC_12(VAR_8);

 FUNC_5(&VAR_9->vport_lock);
 VAR_9->cur_vport_count--;
 FUNC_2(VAR_8->vp_idx, VAR_9->vp_idx_map);
 FUNC_6(&VAR_9->vport_lock);

 if (VAR_8->req->id && !VAR_9->flags.cpu_affinity_enabled) {
  if (FUNC_11(VAR_8, VAR_8->req) != VAR_2)
   FUNC_8(VAR_6, VAR_8, 0x7087,
       "Queue delete failed.\n");
 }

 FUNC_8(VAR_5, VAR_8, 0x7088, "VP[%d] deleted.\n", VAR_10);
 FUNC_15(VAR_8->host);
 return 0;
}
