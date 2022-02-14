
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_transport {int dummy; } ;
struct TYPE_2__ {int release; int * parent; } ;
struct iscsi_cls_session {int creator; int recovery_tmo; struct iscsi_cls_session* dd_data; TYPE_1__ dev; int lock; int scan_work; int unbind_work; int block_work; int unblock_work; int sess_list; int recovery_work; int state; struct iscsi_transport* transport; } ;
struct Scsi_Host {int shost_gendev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct iscsi_cls_session*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 struct iscsi_cls_session* FUNC_5 (int,int ) ;
 int FUNC_6 (struct Scsi_Host*) ;
 int VAR_7 ;
 int FUNC_7 (int *) ;

struct iscsi_cls_session *
FUNC_8(struct Scsi_Host *VAR_8, struct iscsi_transport *VAR_9,
      int VAR_10)
{
 struct iscsi_cls_session *VAR_11;

 VAR_11 = FUNC_5(sizeof(*VAR_11) + VAR_10,
     VAR_0);
 if (!VAR_11)
  return ((void*)0);

 VAR_11->transport = VAR_9;
 VAR_11->creator = -1;
 VAR_11->recovery_tmo = 120;
 VAR_11->state = VAR_1;
 FUNC_0(&VAR_11->recovery_work, VAR_7);
 FUNC_1(&VAR_11->sess_list);
 FUNC_2(&VAR_11->unblock_work, VAR_4);
 FUNC_2(&VAR_11->block_work, VAR_2);
 FUNC_2(&VAR_11->unbind_work, VAR_3);
 FUNC_2(&VAR_11->scan_work, VAR_5);
 FUNC_7(&VAR_11->lock);


 FUNC_6(VAR_8);
 VAR_11->dev.parent = &VAR_8->shost_gendev;
 VAR_11->dev.release = VAR_6;
 FUNC_4(&VAR_11->dev);
 if (VAR_10)
  VAR_11->dd_data = &VAR_11[1];

 FUNC_3(VAR_11, "Completed session allocation\n");
 return VAR_11;
}
