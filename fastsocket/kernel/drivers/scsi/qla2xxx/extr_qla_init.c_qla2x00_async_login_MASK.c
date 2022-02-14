
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
struct TYPE_20__ {int vha; int login_retry; TYPE_5__ d_id; int loop_id; } ;
typedef TYPE_7__ fc_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,struct scsi_qla_host*,int,char*,int ,int ,int ,int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (struct scsi_qla_host*) ;
 TYPE_6__* FUNC_2 (struct scsi_qla_host*,TYPE_7__*,int ) ;
 int FUNC_3 (TYPE_6__*,scalar_t__) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (int ,TYPE_6__*) ;

int
FUNC_6(struct scsi_qla_host *VAR_10, fc_port_t *VAR_11,
    uint16_t *VAR_12)
{
 srb_t *VAR_13;
 struct srb_iocb *VAR_14;
 int VAR_15;

 VAR_15 = VAR_1;
 VAR_13 = FUNC_2(VAR_10, VAR_11, VAR_0);
 if (!VAR_13)
  goto done;

 VAR_13->type = VAR_4;
 VAR_13->name = "login";
 FUNC_3(VAR_13, FUNC_1(VAR_10) + 2);
 VAR_14 = &VAR_13->u.iocb_cmd;
 VAR_14->timeout = VAR_8;
 VAR_13->done = VAR_9;
 VAR_14->u.logio.flags |= VAR_5;
 if (VAR_12[1] & VAR_2)
  VAR_14->u.logio.flags |= VAR_6;
 VAR_15 = FUNC_4(VAR_13);
 if (VAR_15 != VAR_3)
  goto done_free_sp;

 FUNC_0(VAR_7, VAR_10, 0x2072,
     "Async-login - hdl=%x, loopid=%x portid=%02x%02x%02x "
     "retries=%d.\n", VAR_13->handle, VAR_11->loop_id,
     VAR_11->d_id.b.domain, VAR_11->d_id.b.area, VAR_11->d_id.b.al_pa,
     VAR_11->login_retry);
 return VAR_15;

done_free_sp:
 VAR_13->free(VAR_11->vha, VAR_13);
done:
 return VAR_15;
}
