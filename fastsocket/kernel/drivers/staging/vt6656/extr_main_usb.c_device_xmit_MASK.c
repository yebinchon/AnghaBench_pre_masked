
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device_stats {int tx_dropped; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ bLinkPass; scalar_t__ bStopDataPkt; int lock; int dev; struct net_device_stats stats; } ;
typedef TYPE_1__* PSDevice ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ,struct sk_buff*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_3, struct net_device *VAR_4) {
    PSDevice VAR_5=FUNC_1(VAR_4);
    struct net_device_stats* VAR_6 = &VAR_5->stats;


    FUNC_6(&VAR_5->lock);

    FUNC_3(VAR_5->dev);

    if (VAR_5->bLinkPass == VAR_0) {
        FUNC_0(VAR_3);
        FUNC_7(&VAR_5->lock);
        return 0;
    }
    if (VAR_5->bStopDataPkt == VAR_1) {
        FUNC_0(VAR_3);
        VAR_6->tx_dropped++;
        FUNC_7(&VAR_5->lock);
        return 0;
    }

    if(FUNC_5(VAR_5, VAR_2, VAR_3) !=0) {
         if (FUNC_2(VAR_5->dev))
              FUNC_4(VAR_5->dev);
    }

    FUNC_7(&VAR_5->lock);

    return 0;
}
