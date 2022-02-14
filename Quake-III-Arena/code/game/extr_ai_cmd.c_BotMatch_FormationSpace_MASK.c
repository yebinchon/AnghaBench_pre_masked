
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {float formation_dist; } ;
typedef TYPE_1__ bot_state_t ;
struct TYPE_9__ {int subtype; } ;
typedef TYPE_2__ bot_match_t ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*,int ,char*,int) ;

void FUNC_4(bot_state_t *VAR_3, bot_match_t *VAR_4) {
 char VAR_5[VAR_0];
 float VAR_6;

 if (!FUNC_1()) return;

 if (!FUNC_0(VAR_3, VAR_4)) return;

 FUNC_3(VAR_4, VAR_1, VAR_5, VAR_0);

 if (VAR_4->subtype & VAR_2) VAR_6 = 0.3048 * 32 * FUNC_2(VAR_5);

 else VAR_6 = 32 * FUNC_2(VAR_5);

 if (VAR_6 < 48 || VAR_6 > 500) VAR_6 = 100;
 VAR_3->formation_dist = VAR_6;
}
