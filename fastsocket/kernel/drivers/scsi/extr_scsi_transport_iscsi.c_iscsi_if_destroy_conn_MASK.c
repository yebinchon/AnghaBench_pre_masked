
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cid; int sid; } ;
struct TYPE_4__ {TYPE_1__ d_conn; } ;
struct iscsi_uevent {TYPE_2__ u; } ;
struct iscsi_transport {int (* destroy_conn ) (struct iscsi_cls_conn*) ;} ;
struct iscsi_cls_conn {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iscsi_cls_conn*,char*) ;
 struct iscsi_cls_conn* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct iscsi_cls_conn*) ;

__attribute__((used)) static int
FUNC_3(struct iscsi_transport *VAR_1, struct iscsi_uevent *VAR_2)
{
 struct iscsi_cls_conn *VAR_3;

 VAR_3 = FUNC_1(VAR_2->u.d_conn.sid, VAR_2->u.d_conn.cid);
 if (!VAR_3)
  return -VAR_0;

 FUNC_0(VAR_3, "Destroying transport conn\n");
 if (VAR_1->destroy_conn)
  VAR_1->destroy_conn(VAR_3);

 return 0;
}
