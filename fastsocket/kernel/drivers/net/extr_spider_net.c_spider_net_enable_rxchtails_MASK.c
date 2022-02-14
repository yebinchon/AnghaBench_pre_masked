
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* tail; } ;
struct spider_net_card {TYPE_2__ rx_chain; } ;
struct TYPE_3__ {int bus_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct spider_net_card*,int ,int ) ;

__attribute__((used)) static inline void
FUNC_1(struct spider_net_card *VAR_1)
{

 FUNC_0(VAR_1, VAR_0 ,
        VAR_1->rx_chain.tail->bus_addr);
}
