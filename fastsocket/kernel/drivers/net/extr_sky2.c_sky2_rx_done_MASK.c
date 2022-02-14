
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sky2_hw {struct net_device** dev; } ;
struct TYPE_2__ {int rx_bytes; int rx_packets; } ;
struct net_device {int last_rx; TYPE_1__ stats; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int * VAR_1 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct sky2_hw *VAR_2, unsigned VAR_3,
    unsigned VAR_4, unsigned VAR_5)
{
 if (VAR_4) {
  struct net_device *VAR_6 = VAR_2->dev[VAR_3];

  VAR_6->stats.rx_packets += VAR_4;
  VAR_6->stats.rx_bytes += VAR_5;
  VAR_6->last_rx = VAR_0;
  FUNC_1(FUNC_0(VAR_6), VAR_1[VAR_3]);
 }
}
