
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_cls_session {unsigned int target_id; int sess_list; int dev; int sid; } ;
struct iscsi_cls_host {int dummy; } ;
struct Scsi_Host {int shost_gendev; struct iscsi_cls_host* shost_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct iscsi_cls_session*,char*) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned int*,int ) ;
 int FUNC_5 (int ,struct iscsi_cls_session*,char*,...) ;
 int VAR_4 ;
 int FUNC_6 (struct iscsi_cls_session*,int ) ;
 int VAR_5 ;
 struct Scsi_Host* FUNC_7 (struct iscsi_cls_session*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (struct Scsi_Host*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *) ;

int FUNC_13(struct iscsi_cls_session *VAR_8, unsigned int VAR_9)
{
 struct Scsi_Host *VAR_10 = FUNC_7(VAR_8);
 struct iscsi_cls_host *VAR_11;
 unsigned long VAR_12;
 unsigned int VAR_13 = VAR_9;
 int VAR_14;

 VAR_11 = VAR_10->shost_data;
 VAR_8->sid = FUNC_1(1, &VAR_5);

 if (VAR_13 == VAR_2) {
  for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++) {
   VAR_14 = FUNC_4(&VAR_10->shost_gendev, &VAR_13,
          VAR_4);
   if (!VAR_14)
    break;
  }

  if (VAR_13 == VAR_2) {
   FUNC_5(VAR_3, VAR_8,
       "Too many iscsi targets. Max "
       "number of targets is %d.\n",
       VAR_2 - 1);
   VAR_14 = -VAR_0;
   goto release_host;
  }
 }
 VAR_8->target_id = VAR_13;

 FUNC_2(&VAR_8->dev, "session%u", VAR_8->sid);
 VAR_14 = FUNC_3(&VAR_8->dev);
 if (VAR_14) {
  FUNC_5(VAR_3, VAR_8,
      "could not register session's dev\n");
  goto release_host;
 }
 FUNC_12(&VAR_8->dev);

 FUNC_10(&VAR_7, VAR_12);
 FUNC_8(&VAR_8->sess_list, &VAR_6);
 FUNC_11(&VAR_7, VAR_12);

 FUNC_6(VAR_8, VAR_1);
 FUNC_0(VAR_8, "Completed session adding\n");
 return 0;

release_host:
 FUNC_9(VAR_10);
 return VAR_14;
}
