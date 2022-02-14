
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int lock; struct sk_buff* next; } ;
struct sk_buff {struct sk_buff* next; } ;
struct fcoe_rcv_info {struct fc_lport* fr_dev; } ;
struct fcoe_percpu_s {struct sk_buff_head fcoe_rx_list; } ;
struct fc_lport {int dummy; } ;


 int FUNC_0 (struct sk_buff*,struct sk_buff_head*) ;
 struct fcoe_percpu_s VAR_0 ;
 struct fcoe_rcv_info* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct fc_lport *VAR_1)
{
 struct fcoe_percpu_s *VAR_2;
 struct fcoe_rcv_info *VAR_3;
 struct sk_buff_head *VAR_4;
 struct sk_buff *VAR_5, *VAR_6;
 struct sk_buff *VAR_7;

 VAR_2 = &VAR_0;
 FUNC_3(&VAR_2->fcoe_rx_list.lock);
 VAR_4 = &VAR_2->fcoe_rx_list;
 VAR_7 = VAR_4->next;
 for (VAR_5 = VAR_7; VAR_5 != (struct sk_buff *)VAR_4;
      VAR_5 = VAR_6) {
  VAR_6 = VAR_5->next;
  VAR_3 = FUNC_1(VAR_5);
  if (VAR_3->fr_dev == VAR_1) {
   FUNC_0(VAR_5, VAR_4);
   FUNC_2(VAR_5);
  }
 }
 FUNC_4(&VAR_2->fcoe_rx_list.lock);
}
