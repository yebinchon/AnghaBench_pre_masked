
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iscsi_tcp_conn {struct cxgbi_conn* dd_data; } ;
struct iscsi_conn {int datadgst_en; int hdrdgst_en; struct iscsi_tcp_conn* dd_data; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;
struct cxgbi_sock {int tid; TYPE_2__* cdev; } ;
struct cxgbi_conn {TYPE_1__* cep; } ;
typedef enum iscsi_param { ____Placeholder_iscsi_param } iscsi_param ;
struct TYPE_4__ {int (* csk_ddp_setup_digest ) (struct cxgbi_sock*,int ,int ,int ,int ) ;} ;
struct TYPE_3__ {struct cxgbi_sock* csk; } ;


 int VAR_0 ;





 int FUNC_0 (struct iscsi_conn*) ;
 int FUNC_1 (struct iscsi_conn*) ;
 int FUNC_2 (struct iscsi_cls_conn*,int,char*,int) ;
 int FUNC_3 (struct iscsi_conn*,char*) ;
 int FUNC_4 (int,char*,struct iscsi_cls_conn*,int,int,char*) ;
 int FUNC_5 (struct cxgbi_sock*,int ,int ,int ,int ) ;
 int FUNC_6 (struct cxgbi_sock*,int ,int ,int ,int ) ;

int FUNC_7(struct iscsi_cls_conn *VAR_1,
   enum iscsi_param VAR_2, char *VAR_3, int VAR_4)
{
 struct iscsi_conn *VAR_5 = VAR_1->dd_data;
 struct iscsi_tcp_conn *VAR_6 = VAR_5->dd_data;
 struct cxgbi_conn *VAR_7 = VAR_6->dd_data;
 struct cxgbi_sock *VAR_8 = VAR_7->cep->csk;
 int VAR_9;

 FUNC_4(1 << VAR_0,
  "cls_conn 0x%p, param %d, buf(%d) %s.\n",
  VAR_1, VAR_2, VAR_4, VAR_3);

 switch (VAR_2) {
 case 131:
  VAR_9 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
  if (!VAR_9 && VAR_5->hdrdgst_en)
   VAR_9 = VAR_8->cdev->csk_ddp_setup_digest(VAR_8, VAR_8->tid,
       VAR_5->hdrdgst_en,
       VAR_5->datadgst_en, 0);
  break;
 case 132:
  VAR_9 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
  if (!VAR_9 && VAR_5->datadgst_en)
   VAR_9 = VAR_8->cdev->csk_ddp_setup_digest(VAR_8, VAR_8->tid,
       VAR_5->hdrdgst_en,
       VAR_5->datadgst_en, 0);
  break;
 case 130:
  return FUNC_3(VAR_5, VAR_3);
 case 129:
  VAR_9 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
  if (!VAR_9)
   VAR_9 = FUNC_0(VAR_5);
  break;
 case 128:
  VAR_9 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
  if (!VAR_9)
   VAR_9 = FUNC_1(VAR_5);
  break;
 default:
  return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
 }
 return VAR_9;
}
