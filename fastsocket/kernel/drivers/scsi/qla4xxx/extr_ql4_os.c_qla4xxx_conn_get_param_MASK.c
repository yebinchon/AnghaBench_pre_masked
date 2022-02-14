
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct qla_conn {TYPE_1__* qla_ep; } ;
struct iscsi_conn {struct qla_conn* dd_data; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;
typedef enum iscsi_param { ____Placeholder_iscsi_param } iscsi_param ;
struct TYPE_2__ {int dst_addr; } ;




 int FUNC_0 (struct sockaddr_storage*,int,char*) ;
 int FUNC_1 (struct iscsi_cls_conn*,int,char*) ;

__attribute__((used)) static int FUNC_2(struct iscsi_cls_conn *VAR_0,
      enum iscsi_param VAR_1, char *VAR_2)
{
 struct iscsi_conn *VAR_3;
 struct qla_conn *VAR_4;
 struct sockaddr *VAR_5;
 int VAR_6 = 0;

 VAR_3 = VAR_0->dd_data;
 VAR_4 = VAR_3->dd_data;
 VAR_5 = (struct sockaddr *)&VAR_4->qla_ep->dst_addr;

 switch (VAR_1) {
 case 128:
 case 129:
  return FUNC_0((struct sockaddr_storage *)
       VAR_5, VAR_1, VAR_2);
 default:
  return FUNC_1(VAR_0, VAR_1, VAR_2);
 }

 return VAR_6;

}
