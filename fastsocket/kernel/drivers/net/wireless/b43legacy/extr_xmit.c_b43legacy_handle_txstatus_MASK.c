
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct b43legacy_wldev {TYPE_2__* wl; } ;
struct b43legacy_txstatus {int rts_count; int acked; scalar_t__ for_ampdu; scalar_t__ intermediate; } ;
struct TYPE_3__ {int dot11RTSSuccessCount; int dot11RTSFailureCount; int dot11ACKFailureCount; } ;
struct TYPE_4__ {TYPE_1__ ieee_stats; } ;


 int FUNC_0 (struct b43legacy_wldev*,struct b43legacy_txstatus const*) ;
 int FUNC_1 (struct b43legacy_wldev*,struct b43legacy_txstatus const*) ;
 int FUNC_2 (struct b43legacy_wldev*,struct b43legacy_txstatus const*) ;
 scalar_t__ FUNC_3 (struct b43legacy_wldev*) ;

void FUNC_4(struct b43legacy_wldev *VAR_0,
        const struct b43legacy_txstatus *VAR_1)
{
 FUNC_0(VAR_0, VAR_1);

 if (VAR_1->intermediate)
  return;
 if (VAR_1->for_ampdu)
  return;
 if (!VAR_1->acked)
  VAR_0->wl->ieee_stats.dot11ACKFailureCount++;
 if (VAR_1->rts_count) {
  if (VAR_1->rts_count == 0xF)
   VAR_0->wl->ieee_stats.dot11RTSFailureCount++;
  else
   VAR_0->wl->ieee_stats.dot11RTSSuccessCount++;
 }

 if (FUNC_3(VAR_0))
  FUNC_2(VAR_0, VAR_1);
 else
  FUNC_1(VAR_0, VAR_1);
}
