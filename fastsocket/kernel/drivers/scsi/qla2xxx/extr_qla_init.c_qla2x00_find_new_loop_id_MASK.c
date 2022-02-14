
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct qla_hw_data {int vport_slock; int loop_id_map; } ;
struct TYPE_8__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;
struct TYPE_7__ {int b24; } ;
struct TYPE_9__ {scalar_t__ loop_id; TYPE_1__ d_id; int vha; } ;
typedef TYPE_3__ fc_port_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,int ,int,char*,scalar_t__,int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int,char*,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (TYPE_2__*,scalar_t__) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

int
FUNC_7(scsi_qla_host_t *VAR_6, fc_port_t *VAR_7)
{
 int VAR_8;
 struct qla_hw_data *VAR_9 = VAR_6->hw;
 unsigned long VAR_10 = 0;

 VAR_8 = VAR_3;

 FUNC_5(&VAR_9->vport_slock, VAR_10);

 VAR_7->loop_id = FUNC_0(VAR_9->loop_id_map,
     VAR_1);
 if (VAR_7->loop_id >= VAR_1 ||
     FUNC_3(VAR_6, VAR_7->loop_id)) {
  VAR_7->loop_id = VAR_0;
  VAR_8 = VAR_2;
 } else
  FUNC_4(VAR_7->loop_id, VAR_9->loop_id_map);

 FUNC_6(&VAR_9->vport_slock, VAR_10);

 if (VAR_8 == VAR_3)
  FUNC_1(VAR_4, VAR_7->vha, 0x2086,
      "Assigning new loopid=%x, portid=%x.\n",
      VAR_7->loop_id, VAR_7->d_id.b24);
 else
  FUNC_2(VAR_5, VAR_7->vha, 0x2087,
      "No loop_id's available, portid=%x.\n",
      VAR_7->d_id.b24);

 return (VAR_8);
}
