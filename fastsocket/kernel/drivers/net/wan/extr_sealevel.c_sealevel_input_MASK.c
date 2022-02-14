
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z8530_channel {int netdevice; } ;
struct sk_buff {int dev; int protocol; scalar_t__ len; } ;


 int FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct z8530_channel *VAR_0, struct sk_buff *VAR_1)
{

 FUNC_3(VAR_1, VAR_1->len - 2);
 VAR_1->protocol = FUNC_0(VAR_1, VAR_0->netdevice);
 FUNC_2(VAR_1);
 VAR_1->dev = VAR_0->netdevice;
 FUNC_1(VAR_1);
}
