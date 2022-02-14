
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__* data; int len; } ;
struct net_device {int dummy; } ;
struct baycom_state {struct sk_buff* skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct baycom_state*,scalar_t__*,int) ;
 struct baycom_state* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_3, struct net_device *VAR_4)
{
 struct baycom_state *VAR_5 = FUNC_2(VAR_4);

 if (VAR_3->data[0] != 0) {
  FUNC_1(VAR_5, VAR_3->data, VAR_3->len);
  FUNC_0(VAR_3);
  return VAR_2;
 }
 if (VAR_5->skb)
  return VAR_1;

 if (VAR_3->len >= VAR_0+1 || VAR_3->len < 3) {
  FUNC_0(VAR_3);
  return VAR_2;
 }
 FUNC_3(VAR_4);
 VAR_5->skb = VAR_3;
 return VAR_2;
}
