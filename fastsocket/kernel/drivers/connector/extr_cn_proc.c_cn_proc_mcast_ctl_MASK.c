
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_skb_parms {int dummy; } ;
struct cn_msg {int len; int ack; int seq; scalar_t__ data; } ;
typedef enum proc_cn_mcast_op { ____Placeholder_proc_cn_mcast_op } proc_cn_mcast_op ;


 int VAR_0 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct cn_msg *VAR_2,
         struct netlink_skb_parms *VAR_3)
{
 enum proc_cn_mcast_op *VAR_4 = ((void*)0);
 int VAR_5 = 0;

 if (VAR_2->len != sizeof(*VAR_4))
  return;

 VAR_4 = (enum proc_cn_mcast_op*)VAR_2->data;
 switch (*VAR_4) {
 case 128:
  FUNC_1(&VAR_1);
  break;
 case 129:
  FUNC_0(&VAR_1);
  break;
 default:
  VAR_5 = VAR_0;
  break;
 }
 FUNC_2(VAR_5, VAR_2->seq, VAR_2->ack);
}
