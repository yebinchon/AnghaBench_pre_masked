
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct TYPE_3__ {int error; int sid; int cid; } ;
struct TYPE_4__ {TYPE_1__ connerror; } ;
struct iscsi_uevent {TYPE_2__ r; int type; int transport_handle; } ;
struct iscsi_internal {int dummy; } ;
struct iscsi_cls_conn {int cid; int transport; } ;
typedef enum iscsi_err { ____Placeholder_iscsi_err } iscsi_err ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct iscsi_uevent* FUNC_0 (struct nlmsghdr*) ;
 int FUNC_1 (int) ;
 struct nlmsghdr* FUNC_2 (struct sk_buff*,int ,int ,int ,int,int ) ;
 struct sk_buff* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,struct iscsi_cls_conn*,char*,int) ;
 int FUNC_5 (struct iscsi_cls_conn*) ;
 int FUNC_6 (int ) ;
 struct iscsi_internal* FUNC_7 (int ) ;
 int FUNC_8 (struct sk_buff*,int ,int ) ;

void FUNC_9(struct iscsi_cls_conn *VAR_5, enum iscsi_err VAR_6)
{
 struct nlmsghdr *VAR_7;
 struct sk_buff *VAR_8;
 struct iscsi_uevent *VAR_9;
 struct iscsi_internal *VAR_10;
 int VAR_11 = FUNC_1(sizeof(*VAR_9));

 VAR_10 = FUNC_7(VAR_5->transport);
 if (!VAR_10)
  return;

 VAR_8 = FUNC_3(VAR_11, VAR_0);
 if (!VAR_8) {
  FUNC_4(VAR_3, VAR_5, "gracefully ignored "
          "conn error (%d)\n", VAR_6);
  return;
 }

 VAR_7 = FUNC_2(VAR_8, 0, 0, 0, (VAR_11 - sizeof(*VAR_7)), 0);
 VAR_9 = FUNC_0(VAR_7);
 VAR_9->transport_handle = FUNC_6(VAR_5->transport);
 VAR_9->type = VAR_1;
 VAR_9->r.connerror.error = VAR_6;
 VAR_9->r.connerror.cid = VAR_5->cid;
 VAR_9->r.connerror.sid = FUNC_5(VAR_5);

 FUNC_8(VAR_8, VAR_2, VAR_0);

 FUNC_4(VAR_4, VAR_5, "detected conn error (%d)\n",
         VAR_6);
}
