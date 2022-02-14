
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_6__ {scalar_t__ slottime; int ppersist; scalar_t__ fulldup; } ;
struct TYPE_5__ {scalar_t__ slotcnt; scalar_t__ ptt; } ;
struct TYPE_4__ {scalar_t__ dcd; } ;
struct hdlcdrv_state {scalar_t__ magic; TYPE_3__ ch_params; TYPE_2__ hdlctx; TYPE_1__ hdlcrx; int skb; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct net_device*,struct hdlcdrv_state*) ;

void FUNC_2(struct net_device *VAR_1, struct hdlcdrv_state *VAR_2)
{
 if (!VAR_2 || VAR_2->magic != VAR_0 || VAR_2->hdlctx.ptt || !VAR_2->skb)
  return;
 if (VAR_2->ch_params.fulldup) {
  FUNC_1(VAR_1, VAR_2);
  return;
 }
 if (VAR_2->hdlcrx.dcd) {
  VAR_2->hdlctx.slotcnt = VAR_2->ch_params.slottime;
  return;
 }
 if ((--VAR_2->hdlctx.slotcnt) > 0)
  return;
 VAR_2->hdlctx.slotcnt = VAR_2->ch_params.slottime;
 if ((FUNC_0() % 256) > VAR_2->ch_params.ppersist)
  return;
 FUNC_1(VAR_1, VAR_2);
}
