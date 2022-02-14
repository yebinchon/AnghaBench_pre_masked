
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct srb_iocb {int timeout; } ;
struct scsi_qla_host {int dummy; } ;
struct TYPE_12__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_15__ {char* name; int (* free ) (int ,TYPE_4__*) ;int handle; int done; TYPE_1__ u; int type; } ;
typedef TYPE_4__ srb_t ;
struct TYPE_13__ {int al_pa; int area; int domain; } ;
struct TYPE_14__ {TYPE_2__ b; } ;
struct TYPE_16__ {int vha; TYPE_3__ d_id; int loop_id; } ;
typedef TYPE_5__ fc_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct scsi_qla_host*,int,char*,int ,int ,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct scsi_qla_host*) ;
 TYPE_4__* FUNC_2 (struct scsi_qla_host*,TYPE_5__*,int ) ;
 int FUNC_3 (TYPE_4__*,scalar_t__) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ,TYPE_4__*) ;

int
FUNC_6(struct scsi_qla_host *VAR_7, fc_port_t *VAR_8)
{
 srb_t *VAR_9;
 struct srb_iocb *VAR_10;
 int VAR_11;

 VAR_11 = VAR_1;
 VAR_9 = FUNC_2(VAR_7, VAR_8, VAR_0);
 if (!VAR_9)
  goto done;

 VAR_9->type = VAR_3;
 VAR_9->name = "logout";
 FUNC_3(VAR_9, FUNC_1(VAR_7) + 2);

 VAR_10 = &VAR_9->u.iocb_cmd;
 VAR_10->timeout = VAR_5;
 VAR_9->done = VAR_6;
 VAR_11 = FUNC_4(VAR_9);
 if (VAR_11 != VAR_2)
  goto done_free_sp;

 FUNC_0(VAR_4, VAR_7, 0x2070,
     "Async-logout - hdl=%x loop-id=%x portid=%02x%02x%02x.\n",
     VAR_9->handle, VAR_8->loop_id, VAR_8->d_id.b.domain,
     VAR_8->d_id.b.area, VAR_8->d_id.b.al_pa);
 return VAR_11;

done_free_sp:
 VAR_9->free(VAR_8->vha, VAR_9);
done:
 return VAR_11;
}
