
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int lun; int id; int queue_depth; scalar_t__ hostdata; } ;
struct fc_port {TYPE_1__* vha; } ;
typedef struct fc_port fc_port_t ;
struct TYPE_2__ {int host_no; } ;


 int FUNC_0 (int ,TYPE_1__*,int,char*,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct scsi_device*,int) ;

__attribute__((used)) static void FUNC_2(struct scsi_device *VAR_1, int VAR_2)
{
 fc_port_t *VAR_3 = (struct fc_port *) VAR_1->hostdata;

 if (!FUNC_1(VAR_1, VAR_2))
  return;

 FUNC_0(VAR_0, VAR_3->vha, 0x3029,
     "Queue depth adjusted-down to %d for nexus=%ld:%d:%d.\n",
     VAR_1->queue_depth, VAR_3->vha->host_no, VAR_1->id, VAR_1->lun);
}
