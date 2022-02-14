
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int protocol; } ;
struct pcpu_lstats {int bytes; int drops; int packets; } ;
struct net_device {struct pcpu_lstats* ml_priv; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sk_buff*,struct net_device*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 struct pcpu_lstats* FUNC_3 (struct pcpu_lstats*,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 () ;

__attribute__((used)) static netdev_tx_t FUNC_6(struct sk_buff *VAR_2,
     struct net_device *VAR_3)
{
 struct pcpu_lstats *VAR_4, *VAR_5;
 int VAR_6;

 FUNC_4(VAR_2);

 VAR_2->protocol = FUNC_0(VAR_2, VAR_3);


 VAR_4 = VAR_3->ml_priv;
 VAR_5 = FUNC_3(VAR_4, FUNC_5());

 VAR_6 = VAR_2->len;
 if (FUNC_1(FUNC_2(VAR_2) == VAR_1)) {
  VAR_5->bytes += VAR_6;
  VAR_5->packets++;
 } else
  VAR_5->drops++;

 return VAR_0;
}
