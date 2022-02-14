
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ comp_status; int comp; int cmd_hndl; } ;
struct TYPE_14__ {TYPE_2__ abt; } ;
struct srb_iocb {TYPE_3__ u; int timeout; } ;
struct TYPE_12__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_15__ {char* name; int (* free ) (int *,TYPE_4__*) ;int handle; int done; int type; TYPE_1__ u; TYPE_5__* fcport; } ;
typedef TYPE_4__ srb_t ;
typedef int scsi_qla_host_t ;
struct TYPE_16__ {int tgt_id; int * vha; } ;
typedef TYPE_5__ fc_port_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int,char*,int ,int ) ;
 int VAR_6 ;
 TYPE_4__* FUNC_2 (int *,TYPE_5__*,int ) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int *,TYPE_4__*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(srb_t *VAR_9)
{
 scsi_qla_host_t *VAR_10 = VAR_9->fcport->vha;
 fc_port_t *VAR_11 = VAR_9->fcport;
 struct srb_iocb *VAR_12;
 srb_t *VAR_13;
 int VAR_14 = VAR_3;

 VAR_13 = FUNC_2(VAR_10, VAR_11, VAR_2);
 if (!VAR_13)
  goto done;

 VAR_12 = &VAR_13->u.iocb_cmd;
 VAR_13->type = VAR_5;
 VAR_13->name = "abort";
 FUNC_3(VAR_13, VAR_1);
 VAR_12->u.abt.cmd_hndl = VAR_9->handle;
 VAR_13->done = VAR_8;
 VAR_12->timeout = VAR_7;
 FUNC_0(&VAR_12->u.abt.comp);

 VAR_14 = FUNC_4(VAR_13);
 if (VAR_14 != VAR_4)
  goto done_free_sp;

 FUNC_1(VAR_6, VAR_10, 0x507c,
     "Abort command issued - hdl=%x, target_id=%x\n",
     VAR_9->handle, VAR_11->tgt_id);

 FUNC_6(&VAR_12->u.abt.comp);

 VAR_14 = VAR_12->u.abt.comp_status == VAR_0 ?
     VAR_4 : VAR_3;

done_free_sp:
 VAR_13->free(VAR_10, VAR_13);
done:
 return VAR_14;
}
