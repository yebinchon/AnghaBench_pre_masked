
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ fw_stats_update; int fw_stats; } ;
struct wl1251 {scalar_t__ state; int mutex; TYPE_1__ stats; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (struct wl1251*,int ) ;
 int FUNC_5 (struct wl1251*) ;
 int FUNC_6 (struct wl1251*) ;

__attribute__((used)) static void FUNC_7(struct wl1251 *VAR_3)
{
 int VAR_4;

 FUNC_1(&VAR_3->mutex);

 VAR_4 = FUNC_6(VAR_3);
 if (VAR_4 < 0)
  goto out;

 if (VAR_3->state == VAR_1 &&
     FUNC_3(VAR_2, VAR_3->stats.fw_stats_update +
         FUNC_0(VAR_0))) {
  FUNC_4(VAR_3, VAR_3->stats.fw_stats);
  VAR_3->stats.fw_stats_update = VAR_2;
 }

 FUNC_5(VAR_3);

out:
 FUNC_2(&VAR_3->mutex);
}
