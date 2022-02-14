
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {struct net_device* dev; } ;
struct TYPE_2__ {int rx_errors; int rx_dropped; } ;
struct net_device {TYPE_1__ stats; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct net_device*,struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_4)
{
 struct net_device *VAR_5 = VAR_4->dev;

 if ((VAR_4 = FUNC_2(VAR_4, VAR_0)) == ((void*)0)) {
  VAR_5->stats.rx_dropped++;
  return VAR_2;
 }

 if (FUNC_1(VAR_5, VAR_4) == VAR_1)
  return VAR_3;

 VAR_5->stats.rx_errors++;
 FUNC_0(VAR_4);
 return VAR_2;
}
