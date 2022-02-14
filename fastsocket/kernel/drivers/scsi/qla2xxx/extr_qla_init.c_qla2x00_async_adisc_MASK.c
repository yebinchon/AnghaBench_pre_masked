
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


typedef int uint16_t ;
struct TYPE_15__ {int flags; } ;
struct TYPE_16__ {TYPE_2__ logio; } ;
struct srb_iocb {TYPE_3__ u; int timeout; } ;
struct scsi_qla_host {int dummy; } ;
struct TYPE_14__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_19__ {char* name; int (* free ) (int ,TYPE_6__*) ;int handle; int done; TYPE_1__ u; int type; } ;
typedef TYPE_6__ srb_t ;
struct TYPE_17__ {int al_pa; int area; int domain; } ;
struct TYPE_18__ {TYPE_4__ b; } ;
struct TYPE_20__ {int vha; TYPE_5__ d_id; int loop_id; } ;
typedef TYPE_7__ fc_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct scsi_qla_host*,int,char*,int ,int ,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct scsi_qla_host*) ;
 TYPE_6__* FUNC_2 (struct scsi_qla_host*,TYPE_7__*,int ) ;
 int FUNC_3 (TYPE_6__*,scalar_t__) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (int ,TYPE_6__*) ;

int
FUNC_6(struct scsi_qla_host *VAR_9, fc_port_t *VAR_10,
    uint16_t *VAR_11)
{
 srb_t *VAR_12;
 struct srb_iocb *VAR_13;
 int VAR_14;

 VAR_14 = VAR_1;
 VAR_12 = FUNC_2(VAR_9, VAR_10, VAR_0);
 if (!VAR_12)
  goto done;

 VAR_12->type = VAR_4;
 VAR_12->name = "adisc";
 FUNC_3(VAR_12, FUNC_1(VAR_9) + 2);
 VAR_13 = &VAR_12->u.iocb_cmd;
 VAR_13->timeout = VAR_8;
 VAR_12->done = VAR_7;
 if (VAR_11[1] & VAR_2)
 VAR_13->u.logio.flags |= VAR_5;
 VAR_14 = FUNC_4(VAR_12);
 if (VAR_14 != VAR_3)
  goto done_free_sp;

 FUNC_0(VAR_6, VAR_9, 0x206f,
     "Async-adisc - hdl=%x loopid=%x portid=%02x%02x%02x.\n",
     VAR_12->handle, VAR_10->loop_id, VAR_10->d_id.b.domain,
     VAR_10->d_id.b.area, VAR_10->d_id.b.al_pa);
 return VAR_14;

done_free_sp:
 VAR_12->free(VAR_10->vha, VAR_12);
done:
 return VAR_14;
}
