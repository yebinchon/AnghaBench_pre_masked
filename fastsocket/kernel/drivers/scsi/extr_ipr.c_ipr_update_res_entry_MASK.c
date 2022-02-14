
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ipr_std_inq_data {int dummy; } ;
struct TYPE_6__ {int scsi_lun; } ;
struct ipr_resource_entry {int flags; int type; int res_handle; int qmodel; int std_inq_data; int * res_path; TYPE_5__* ioa_cfg; scalar_t__ sdev; TYPE_1__ dev_lun; int dev_id; int res_flags; } ;
struct TYPE_9__ {TYPE_3__* cfgte; TYPE_2__* cfgte64; } ;
struct ipr_config_table_entry_wrapper {TYPE_4__ u; } ;
typedef int buffer ;
struct TYPE_10__ {scalar_t__ sis64; } ;
struct TYPE_8__ {int flags; int rsvd_subtype; unsigned int proto; int res_handle; int std_inq_data; } ;
struct TYPE_7__ {int flags; int res_type; unsigned int proto; int res_path; int lun; int dev_id; int res_handle; int std_inq_data; int res_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ipr_resource_entry*) ;
 int FUNC_1 (struct ipr_resource_entry*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_5__*,int *,char*,int) ;
 int FUNC_3 (struct ipr_resource_entry*,unsigned int) ;
 scalar_t__ FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int ,scalar_t__,char*,int ) ;

__attribute__((used)) static void FUNC_7(struct ipr_resource_entry *VAR_4,
     struct ipr_config_table_entry_wrapper *VAR_5)
{
 char VAR_6[VAR_1];
 unsigned int VAR_7;
 int VAR_8 = 0;

 if (VAR_4->ioa_cfg->sis64) {
  VAR_4->flags = VAR_5->u.cfgte64->flags;
  VAR_4->res_flags = VAR_5->u.cfgte64->res_flags;
  VAR_4->type = VAR_5->u.cfgte64->res_type;

  FUNC_5(&VAR_4->std_inq_data, &VAR_5->u.cfgte64->std_inq_data,
   sizeof(struct ipr_std_inq_data));

  VAR_4->qmodel = FUNC_1(VAR_4);
  VAR_7 = VAR_5->u.cfgte64->proto;
  VAR_4->res_handle = VAR_5->u.cfgte64->res_handle;
  VAR_4->dev_id = VAR_5->u.cfgte64->dev_id;

  FUNC_5(&VAR_4->dev_lun.scsi_lun, &VAR_5->u.cfgte64->lun,
   sizeof(VAR_4->dev_lun.scsi_lun));

  if (FUNC_4(VAR_4->res_path, &VAR_5->u.cfgte64->res_path,
     sizeof(VAR_4->res_path))) {
   FUNC_5(VAR_4->res_path, &VAR_5->u.cfgte64->res_path,
    sizeof(VAR_4->res_path));
   VAR_8 = 1;
  }

  if (VAR_4->sdev && VAR_8)
   FUNC_6(VAR_3, VAR_4->sdev, "Resource path: %s\n",
        FUNC_2(VAR_4->ioa_cfg,
     VAR_4->res_path, VAR_6, sizeof(VAR_6)));
 } else {
  VAR_4->flags = VAR_5->u.cfgte->flags;
  if (VAR_4->flags & VAR_0)
   VAR_4->type = VAR_2;
  else
   VAR_4->type = VAR_5->u.cfgte->rsvd_subtype & 0x0f;

  FUNC_5(&VAR_4->std_inq_data, &VAR_5->u.cfgte->std_inq_data,
   sizeof(struct ipr_std_inq_data));

  VAR_4->qmodel = FUNC_0(VAR_4);
  VAR_7 = VAR_5->u.cfgte->proto;
  VAR_4->res_handle = VAR_5->u.cfgte->res_handle;
 }

 FUNC_3(VAR_4, VAR_7);
}
