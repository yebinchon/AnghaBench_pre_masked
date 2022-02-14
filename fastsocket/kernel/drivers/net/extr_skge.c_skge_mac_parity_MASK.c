
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skge_hw {scalar_t__ chip_id; scalar_t__ chip_rev; struct net_device** dev; } ;
struct TYPE_2__ {int tx_heartbeat_errors; } ;
struct net_device {TYPE_1__ stats; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct skge_hw*,int ,int ) ;
 int FUNC_2 (struct skge_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct skge_hw *VAR_7, int VAR_8)
{
 struct net_device *VAR_9 = VAR_7->dev[VAR_8];

 ++VAR_9->stats.tx_heartbeat_errors;

 if (VAR_7->chip_id == VAR_0)
  FUNC_1(VAR_7, FUNC_0(VAR_8, VAR_6),
        VAR_4);
 else

  FUNC_2(VAR_7, FUNC_0(VAR_8, VAR_5),
       (VAR_7->chip_id == VAR_1 && VAR_7->chip_rev == 0)
       ? VAR_2 : VAR_3);
}
