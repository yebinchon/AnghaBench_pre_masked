
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int tagged_supported; struct ddb_entry* hostdata; int sdev_target; } ;
struct iscsi_session {struct ddb_entry* dd_data; } ;
struct iscsi_cls_session {struct iscsi_session* dd_data; } ;
struct ddb_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct scsi_device*,int) ;
 struct iscsi_cls_session* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct scsi_device *VAR_2)
{
 struct iscsi_cls_session *VAR_3;
 struct iscsi_session *VAR_4;
 struct ddb_entry *VAR_5;
 int VAR_6 = VAR_0;

 VAR_3 = FUNC_1(VAR_2->sdev_target);
 VAR_4 = VAR_3->dd_data;
 VAR_5 = VAR_4->dd_data;

 VAR_2->hostdata = VAR_5;
 VAR_2->tagged_supported = 1;

 if (VAR_1 != 0 && VAR_1 <= 0xffffU)
  VAR_6 = VAR_1;

 FUNC_0(VAR_2, VAR_6);
 return 0;
}
