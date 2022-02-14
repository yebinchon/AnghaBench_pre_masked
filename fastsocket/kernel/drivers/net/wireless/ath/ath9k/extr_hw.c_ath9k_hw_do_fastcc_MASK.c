
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ath_hw {TYPE_3__* curchan; TYPE_2__* caldata; scalar_t__ chip_fullsleep; } ;
struct ath_common {TYPE_1__* bus_ops; } ;
struct ath9k_channel {scalar_t__ channel; int channelFlags; } ;
struct TYPE_6__ {scalar_t__ channel; int channelFlags; } ;
struct TYPE_5__ {int rtt_done; int done_txclcal_once; int done_txiqcal_once; } ;
struct TYPE_4__ {scalar_t__ ath_bus_type; } ;


 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_4 (struct ath_hw*,int) ;
 int FUNC_5 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_6 (struct ath_hw*) ;
 struct ath_common* FUNC_7 (struct ath_hw*) ;
 int FUNC_8 (struct ath_hw*,TYPE_3__*) ;
 scalar_t__ FUNC_9 (struct ath_hw*) ;
 int FUNC_10 (struct ath_hw*,int) ;
 int FUNC_11 (struct ath_common*,int ,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct ath_hw *VAR_6, struct ath9k_channel *VAR_7)
{
 struct ath_common *VAR_8 = FUNC_7(VAR_6);
 int VAR_9;

 if (FUNC_1(VAR_6) && VAR_8->bus_ops->ath_bus_type == VAR_0)
  goto fail;

 if (VAR_6->chip_fullsleep)
  goto fail;

 if (!VAR_6->curchan)
  goto fail;

 if (VAR_7->channel == VAR_6->curchan->channel)
  goto fail;

 if ((VAR_6->curchan->channelFlags | VAR_7->channelFlags) &
     (VAR_2 | VAR_3))
  goto fail;

 if ((VAR_7->channelFlags & VAR_1) !=
     (VAR_6->curchan->channelFlags & VAR_1))
  goto fail;

 if (!FUNC_6(VAR_6))
  goto fail;





 if (FUNC_2(VAR_6) && (VAR_6->caldata &&
     (!VAR_6->caldata->done_txiqcal_once ||
      !VAR_6->caldata->done_txclcal_once ||
      !VAR_6->caldata->rtt_done)))
  goto fail;

 FUNC_11(VAR_8, VAR_5, "FastChannelChange for %d -> %d\n",
  VAR_6->curchan->channel, VAR_7->channel);

 VAR_9 = FUNC_5(VAR_6, VAR_7);
 if (!VAR_9)
  goto fail;

 if (FUNC_9(VAR_6))
  FUNC_4(VAR_6, 0);

 FUNC_8(VAR_6, VAR_6->curchan);
 FUNC_10(VAR_6, 1);

 if (FUNC_0(VAR_6))
  FUNC_3(VAR_6, VAR_7);

 return 0;
fail:
 return -VAR_4;
}
