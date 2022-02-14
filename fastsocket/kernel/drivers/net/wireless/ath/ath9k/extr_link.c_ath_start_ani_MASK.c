
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct ath_softc {TYPE_2__* hw; int sc_flags; struct ath_hw* sc_ah; } ;
struct TYPE_8__ {scalar_t__ ani_poll_interval; } ;
struct ath_hw {TYPE_4__ config; } ;
struct TYPE_7__ {unsigned long longcal_timer; unsigned long shortcal_timer; unsigned long checkani_timer; int timer; } ;
struct ath_common {TYPE_3__ ani; scalar_t__ disable_ani; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_6__ {TYPE_1__ conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_common*,int ,char*) ;
 scalar_t__ VAR_3 ;
 unsigned long FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;

void FUNC_6(struct ath_softc *VAR_4)
{
 struct ath_hw *VAR_5 = VAR_4->sc_ah;
 struct ath_common *VAR_6 = FUNC_0(VAR_5);
 unsigned long VAR_7 = FUNC_2(VAR_3);

 if (VAR_6->disable_ani ||
     !FUNC_5(VAR_2, &VAR_4->sc_flags) ||
     (VAR_4->hw->conf.flags & VAR_1))
  return;

 VAR_6->ani.longcal_timer = VAR_7;
 VAR_6->ani.shortcal_timer = VAR_7;
 VAR_6->ani.checkani_timer = VAR_7;

 FUNC_1(VAR_6, VAR_0, "Starting ANI\n");
 FUNC_3(&VAR_6->ani.timer,
    VAR_3 + FUNC_4((u32)VAR_5->config.ani_poll_interval));
}
