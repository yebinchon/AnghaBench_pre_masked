
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_cls_session {int dd_data; } ;
struct Scsi_Host {int dummy; } ;


 int FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (struct iscsi_cls_session*) ;
 struct Scsi_Host* FUNC_3 (struct iscsi_cls_session*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct iscsi_cls_session *VAR_0)
{
 struct Scsi_Host *VAR_1 = FUNC_3(VAR_0);

 FUNC_4(VAR_0->dd_data);
 FUNC_2(VAR_0);

 FUNC_1(VAR_1);
 FUNC_0(VAR_1);
}
