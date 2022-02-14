
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tx_ring_info {int max_burst; } ;
struct niu {TYPE_1__* dev; } ;
struct TYPE_2__ {int mtu; } ;



__attribute__((used)) static void FUNC_0(struct niu *VAR_0, struct tx_ring_info *VAR_1)
{
 int VAR_2 = VAR_0->dev->mtu;




 VAR_1->max_burst = VAR_2 + 32;
 if (VAR_1->max_burst > 4096)
  VAR_1->max_burst = 4096;
}
