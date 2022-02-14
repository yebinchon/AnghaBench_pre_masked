
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_15__ {void* data; void* lun; void* flags; } ;
struct TYPE_16__ {TYPE_2__ tmf; } ;
struct srb_iocb {int timeout; TYPE_3__ u; } ;
struct scsi_qla_host {int dummy; } ;
struct TYPE_14__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_19__ {char* name; int (* free ) (struct scsi_qla_host*,TYPE_6__*) ;int handle; int done; TYPE_1__ u; int type; } ;
typedef TYPE_6__ srb_t ;
struct TYPE_17__ {int al_pa; int area; int domain; } ;
struct TYPE_18__ {TYPE_4__ b; } ;
struct TYPE_20__ {struct scsi_qla_host* vha; TYPE_5__ d_id; int loop_id; } ;
typedef TYPE_7__ fc_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct scsi_qla_host*,int,char*,int ,int ,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct scsi_qla_host*) ;
 TYPE_6__* FUNC_2 (struct scsi_qla_host*,TYPE_7__*,int ) ;
 int FUNC_3 (TYPE_6__*,scalar_t__) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (struct scsi_qla_host*,TYPE_6__*) ;

int
FUNC_6(fc_port_t *VAR_7, uint32_t VAR_8, uint32_t VAR_9,
 uint32_t VAR_10)
{
 struct scsi_qla_host *VAR_11 = VAR_7->vha;
 srb_t *VAR_12;
 struct srb_iocb *VAR_13;
 int VAR_14;

 VAR_14 = VAR_1;
 VAR_12 = FUNC_2(VAR_11, VAR_7, VAR_0);
 if (!VAR_12)
  goto done;

 VAR_12->type = VAR_3;
 VAR_12->name = "tmf";
 FUNC_3(VAR_12, FUNC_1(VAR_11) + 2);

 VAR_13 = &VAR_12->u.iocb_cmd;
 VAR_13->u.tmf.flags = VAR_8;
 VAR_13->u.tmf.lun = VAR_9;
 VAR_13->u.tmf.data = VAR_10;
 VAR_13->timeout = VAR_5;
 VAR_12->done = VAR_6;

 VAR_14 = FUNC_4(VAR_12);
 if (VAR_14 != VAR_2)
  goto done_free_sp;

 FUNC_0(VAR_4, VAR_11, 0x802f,
     "Async-tmf hdl=%x loop-id=%x portid=%02x%02x%02x.\n",
     VAR_12->handle, VAR_7->loop_id, VAR_7->d_id.b.domain,
     VAR_7->d_id.b.area, VAR_7->d_id.b.al_pa);
 return VAR_14;

done_free_sp:
 VAR_12->free(VAR_7->vha, VAR_12);
done:
 return VAR_14;
}
