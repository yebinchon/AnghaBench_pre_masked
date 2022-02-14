
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_8__ {void* size; void* bus_addr; } ;
struct TYPE_7__ {void* size; void* bus_addr; } ;
struct TYPE_10__ {void* conn_handle; void* sister_scb; TYPE_3__ smp_resp; TYPE_2__ smp_req; int proto_conn_rate; } ;
struct TYPE_6__ {int opcode; } ;
struct scb {TYPE_5__ smp_task; TYPE_1__ header; } ;
struct TYPE_9__ {int smp_resp; int smp_req; } ;
struct sas_task {TYPE_4__ smp_task; struct domain_device* dev; } ;
struct domain_device {scalar_t__ lldd_dev; int linkrate; } ;
struct asd_ha_struct {int pcidev; } ;
struct asd_ascb {int tasklet_complete; struct scb* scb; struct asd_ha_struct* ha; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (scalar_t__) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct asd_ascb *VAR_4, struct sas_task *VAR_5,
         gfp_t VAR_6)
{
 struct asd_ha_struct *VAR_7 = VAR_4->ha;
 struct domain_device *VAR_8 = VAR_5->dev;
 struct scb *VAR_9;

 FUNC_3(VAR_7->pcidev, &VAR_5->smp_task.smp_req, 1,
     VAR_2);
 FUNC_3(VAR_7->pcidev, &VAR_5->smp_task.smp_resp, 1,
     VAR_1);

 VAR_9 = VAR_4->scb;

 VAR_9->header.opcode = VAR_0;

 VAR_9->smp_task.proto_conn_rate = VAR_8->linkrate;

 VAR_9->smp_task.smp_req.bus_addr =
  FUNC_2((u64)FUNC_4(&VAR_5->smp_task.smp_req));
 VAR_9->smp_task.smp_req.size =
  FUNC_1((u32)FUNC_5(&VAR_5->smp_task.smp_req)-4);

 VAR_9->smp_task.smp_resp.bus_addr =
  FUNC_2((u64)FUNC_4(&VAR_5->smp_task.smp_resp));
 VAR_9->smp_task.smp_resp.size =
  FUNC_1((u32)FUNC_5(&VAR_5->smp_task.smp_resp)-4);

 VAR_9->smp_task.sister_scb = FUNC_0(0xFFFF);
 VAR_9->smp_task.conn_handle = FUNC_0((u16)
      (unsigned long)VAR_8->lldd_dev);

 VAR_4->tasklet_complete = VAR_3;

 return 0;
}
