
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_endpoint {struct bnx2i_endpoint* dd_data; } ;
struct bnx2i_hba {int net_dev_lock; } ;
struct bnx2i_endpoint {TYPE_1__* cm_sk; struct bnx2i_hba* hba; } ;
typedef enum iscsi_param { ____Placeholder_iscsi_param } iscsi_param ;
struct TYPE_2__ {int dst_ip; int * dst_port; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,int *) ;

__attribute__((used)) static int FUNC_3(struct iscsi_endpoint *VAR_2,
         enum iscsi_param VAR_3, char *VAR_4)
{
 struct bnx2i_endpoint *VAR_5 = VAR_2->dd_data;
 struct bnx2i_hba *VAR_6 = VAR_5->hba;
 int VAR_7 = -VAR_1;

 if (!VAR_6)
  return -VAR_1;

 switch (VAR_3) {
 case 128:
  FUNC_0(&VAR_6->net_dev_lock);
  if (VAR_5->cm_sk)
   VAR_7 = FUNC_2(VAR_4, "%hu\n", VAR_5->cm_sk->dst_port);
  FUNC_1(&VAR_6->net_dev_lock);
  break;
 case 129:
  FUNC_0(&VAR_6->net_dev_lock);
  if (VAR_5->cm_sk)
   VAR_7 = FUNC_2(VAR_4, "%pI4\n", &VAR_5->cm_sk->dst_ip);
  FUNC_1(&VAR_6->net_dev_lock);
  break;
 default:
  return -VAR_0;
 }

 return VAR_7;
}
