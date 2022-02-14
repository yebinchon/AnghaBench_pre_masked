
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_transport {int dummy; } ;
struct iscsi_cls_session {int dummy; } ;
struct Scsi_Host {int dummy; } ;


 scalar_t__ FUNC_0 (struct iscsi_cls_session*,unsigned int) ;
 struct iscsi_cls_session* FUNC_1 (struct Scsi_Host*,struct iscsi_transport*,int) ;
 int FUNC_2 (struct iscsi_cls_session*) ;

struct iscsi_cls_session *
FUNC_3(struct Scsi_Host *VAR_0, struct iscsi_transport *VAR_1,
       int VAR_2, unsigned int VAR_3)
{
 struct iscsi_cls_session *VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (!VAR_4)
  return ((void*)0);

 if (FUNC_0(VAR_4, VAR_3)) {
  FUNC_2(VAR_4);
  return ((void*)0);
 }
 return VAR_4;
}
