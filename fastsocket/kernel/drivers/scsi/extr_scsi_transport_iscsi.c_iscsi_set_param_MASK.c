
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int param; int len; int cid; int sid; } ;
struct TYPE_4__ {TYPE_1__ set_param; } ;
struct iscsi_uevent {TYPE_2__ u; } ;
struct iscsi_transport {int (* set_param ) (struct iscsi_cls_conn*,int,char*,int ) ;} ;
struct iscsi_cls_session {int recovery_tmo; } ;
struct iscsi_cls_conn {int dummy; } ;


 int VAR_0 ;

 struct iscsi_cls_conn* FUNC_0 (int ,int ) ;
 struct iscsi_cls_session* FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int*) ;
 int FUNC_3 (struct iscsi_cls_conn*,int,char*,int ) ;

__attribute__((used)) static int
FUNC_4(struct iscsi_transport *VAR_1, struct iscsi_uevent *VAR_2)
{
 char *VAR_3 = (char*)VAR_2 + sizeof(*VAR_2);
 struct iscsi_cls_conn *VAR_4;
 struct iscsi_cls_session *VAR_5;
 int VAR_6 = 0, VAR_7 = 0;

 VAR_5 = FUNC_1(VAR_2->u.set_param.sid);
 VAR_4 = FUNC_0(VAR_2->u.set_param.sid, VAR_2->u.set_param.cid);
 if (!VAR_4 || !VAR_5)
  return -VAR_0;

 switch (VAR_2->u.set_param.param) {
 case 128:
  FUNC_2(VAR_3, "%d", &VAR_7);
  VAR_5->recovery_tmo = VAR_7;
  break;
 default:
  VAR_6 = VAR_1->set_param(VAR_4, VAR_2->u.set_param.param,
        VAR_3, VAR_2->u.set_param.len);
 }

 return VAR_6;
}
