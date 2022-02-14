
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_dbf_scsi_record {int dummy; } ;
struct zfcp_dbf_san_record {int dummy; } ;
struct zfcp_dbf_rec_record {int dummy; } ;
struct zfcp_dbf_hba_record {int dummy; } ;
struct zfcp_dbf {void* scsi; void* san; void* hba; void* rec; int rec_lock; int scsi_lock; int san_lock; int hba_lock; struct zfcp_adapter* adapter; } ;
struct zfcp_adapter {struct zfcp_dbf* dbf; TYPE_1__* ccw_device; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int *) ;
 struct zfcp_dbf* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,char*) ;
 int FUNC_4 (struct zfcp_dbf*) ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_5 (char*,int,int *,int) ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_6(struct zfcp_adapter *VAR_7)
{
 char VAR_8[VAR_0];
 struct zfcp_dbf *VAR_9;

 VAR_9 = FUNC_1(sizeof(struct zfcp_dbf), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->adapter = VAR_7;

 FUNC_2(&VAR_9->hba_lock);
 FUNC_2(&VAR_9->san_lock);
 FUNC_2(&VAR_9->scsi_lock);
 FUNC_2(&VAR_9->rec_lock);


 FUNC_3(VAR_8, "zfcp_%s_rec", FUNC_0(&VAR_7->ccw_device->dev));
 VAR_9->rec = FUNC_5(VAR_8, 3, &VAR_4,
    sizeof(struct zfcp_dbf_rec_record));
 if (!VAR_9->rec)
  goto err_out;


 FUNC_3(VAR_8, "zfcp_%s_hba", FUNC_0(&VAR_7->ccw_device->dev));
 VAR_9->hba = FUNC_5(VAR_8, 3, &VAR_3,
    sizeof(struct zfcp_dbf_hba_record));
 if (!VAR_9->hba)
  goto err_out;


 FUNC_3(VAR_8, "zfcp_%s_san", FUNC_0(&VAR_7->ccw_device->dev));
 VAR_9->san = FUNC_5(VAR_8, 6, &VAR_5,
    sizeof(struct zfcp_dbf_san_record));
 if (!VAR_9->san)
  goto err_out;


 FUNC_3(VAR_8, "zfcp_%s_scsi", FUNC_0(&VAR_7->ccw_device->dev));
 VAR_9->scsi = FUNC_5(VAR_8, 3, &VAR_6,
     sizeof(struct zfcp_dbf_scsi_record));
 if (!VAR_9->scsi)
  goto err_out;

 VAR_7->dbf = VAR_9;
 return 0;

err_out:
 FUNC_4(VAR_9);
 return -VAR_1;
}
