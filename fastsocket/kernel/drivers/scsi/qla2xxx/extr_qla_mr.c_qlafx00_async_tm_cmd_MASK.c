
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_13__ {scalar_t__ comp_status; int comp; void* data; void* lun; void* flags; } ;
struct TYPE_14__ {TYPE_2__ tmf; } ;
struct srb_iocb {TYPE_3__ u; int timeout; } ;
struct TYPE_12__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_15__ {char* name; int (* free ) (int *,TYPE_4__*) ;int done; int type; TYPE_1__ u; } ;
typedef TYPE_4__ srb_t ;
typedef int scsi_qla_host_t ;
struct TYPE_16__ {int tgt_id; int * vha; } ;
typedef TYPE_5__ fc_port_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int,char*,int ) ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 TYPE_4__* FUNC_3 (int *,TYPE_5__*,int ) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int *,TYPE_4__*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(fc_port_t *VAR_8, uint32_t VAR_9,
       uint32_t VAR_10, uint32_t VAR_11)
{
 scsi_qla_host_t *VAR_12 = VAR_8->vha;
 struct srb_iocb *VAR_13;
 srb_t *VAR_14;
 int VAR_15 = VAR_2;

 VAR_14 = FUNC_3(VAR_12, VAR_8, VAR_1);
 if (!VAR_14)
  goto done;

 VAR_13 = &VAR_14->u.iocb_cmd;
 VAR_14->type = VAR_4;
 VAR_14->name = "tmf";
 FUNC_4(VAR_14, FUNC_2(VAR_12));
 VAR_13->u.tmf.flags = VAR_9;
 VAR_13->u.tmf.lun = VAR_10;
 VAR_13->u.tmf.data = VAR_11;
 VAR_14->done = VAR_7;
 VAR_13->timeout = VAR_6;
 FUNC_0(&VAR_13->u.tmf.comp);

 VAR_15 = FUNC_5(VAR_14);
 if (VAR_15 != VAR_3)
  goto done_free_sp;

 FUNC_1(VAR_5, VAR_12, 0x507b,
     "Task management command issued target_id=%x\n",
     VAR_8->tgt_id);

 FUNC_7(&VAR_13->u.tmf.comp);

 VAR_15 = VAR_13->u.tmf.comp_status == VAR_0 ?
     VAR_3 : VAR_2;

done_free_sp:
 VAR_14->free(VAR_12, VAR_14);
done:
 return VAR_15;
}
