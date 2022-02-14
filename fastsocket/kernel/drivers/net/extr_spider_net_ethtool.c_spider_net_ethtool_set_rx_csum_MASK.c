
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int rx_csum; } ;
struct spider_net_card {TYPE_1__ options; } ;
struct net_device {int dummy; } ;


 struct spider_net_card* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int
FUNC_1(struct net_device *VAR_0, u32 VAR_1)
{
 struct spider_net_card *VAR_2 = FUNC_0(VAR_0);

 VAR_2->options.rx_csum = VAR_1;
 return 0;
}
