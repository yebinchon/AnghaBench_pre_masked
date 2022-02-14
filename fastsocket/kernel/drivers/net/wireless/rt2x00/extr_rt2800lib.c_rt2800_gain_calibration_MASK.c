
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rt2x00_dev {int tx_power; TYPE_3__* hw; } ;
struct TYPE_4__ {int chan; } ;
struct TYPE_5__ {TYPE_1__ chandef; } ;
struct TYPE_6__ {TYPE_2__ conf; } ;


 int FUNC_0 (struct rt2x00_dev*,int ,int ) ;

void FUNC_1(struct rt2x00_dev *VAR_0)
{
 FUNC_0(VAR_0, VAR_0->hw->conf.chandef.chan,
         VAR_0->tx_power);
}
