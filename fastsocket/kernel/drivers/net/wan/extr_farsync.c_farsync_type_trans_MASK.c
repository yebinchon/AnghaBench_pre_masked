
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int pkt_type; struct net_device* dev; } ;
struct net_device {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static __be16 FUNC_2(struct sk_buff *VAR_2, struct net_device *VAR_3)
{
 VAR_2->dev = VAR_3;
 FUNC_1(VAR_2);
 VAR_2->pkt_type = VAR_1;
 return FUNC_0(VAR_0);
}
