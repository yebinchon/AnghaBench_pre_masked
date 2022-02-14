
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int expires; } ;
struct TYPE_3__ {int last_tick_timer; int last_comms_qual_update; scalar_t__ iw_mode; TYPE_2__ tick_timer; int comms_qual_update; int dev; scalar_t__ dev_enabled; int hw_resetting; scalar_t__ hw_ready; int hw_downloading; } ;
typedef TYPE_1__ local_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ,int ,int *,int ) ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_6)
{
 static unsigned long VAR_7 = 0;
 local_info_t *VAR_8 = (local_info_t *) VAR_6;
 VAR_8->last_tick_timer = VAR_5;



 if ((!VAR_7 || FUNC_3(VAR_5, VAR_7 + 10 * VAR_2)) &&
     !VAR_8->hw_downloading && VAR_8->hw_ready &&
     !VAR_8->hw_resetting && VAR_8->dev_enabled) {
  FUNC_1(VAR_8->dev, VAR_0,
         VAR_1, ((void*)0), 0);
  VAR_7 = VAR_5;
 }

 if ((VAR_8->last_comms_qual_update == 0 ||
      FUNC_3(VAR_5, VAR_8->last_comms_qual_update + 10 * VAR_2)) &&
     (VAR_8->iw_mode == VAR_4 ||
      VAR_8->iw_mode == VAR_3)) {
  FUNC_2(&VAR_8->comms_qual_update);
 }

 VAR_8->tick_timer.expires = VAR_5 + 2 * VAR_2;
 FUNC_0(&VAR_8->tick_timer);
}
