
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_info {int flags; int tx_buf; } ;
struct sk_buff {scalar_t__ cb; } ;
struct hostap_skb_tx_data {int flags; } ;
typedef int local_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(local_info_t *VAR_3, struct sta_info *VAR_4,
     struct sk_buff *VAR_5)
{
 struct hostap_skb_tx_data *VAR_6;

 if (!(VAR_4->flags & VAR_2)) {


  FUNC_0(VAR_5);
  return;
 }



 VAR_6 = (struct hostap_skb_tx_data *) VAR_5->cb;
 VAR_6->flags |= VAR_1;
 if (!FUNC_1(&VAR_4->tx_buf)) {

  VAR_6->flags |= VAR_0;
 }
 FUNC_0(VAR_5);
}
