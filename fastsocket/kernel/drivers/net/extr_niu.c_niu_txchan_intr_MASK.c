
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tx_ring_info {scalar_t__ tx_cs; int tx_channel; } ;
struct niu {TYPE_1__* dev; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,unsigned long long) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct niu *VAR_1, struct tx_ring_info *VAR_2,
       int VAR_3)
{
 VAR_2->tx_cs = FUNC_2(FUNC_0(VAR_2->tx_channel));

 FUNC_1(VAR_0, "%s: txchan_intr cs[%llx]\n",
        VAR_1->dev->name, (unsigned long long) VAR_2->tx_cs);
}
