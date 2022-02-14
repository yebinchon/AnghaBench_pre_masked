
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int origin; } ;
typedef TYPE_1__ playerState_t ;
struct TYPE_6__ {int areanum; } ;
typedef TYPE_2__ bot_goal_t ;


 int FUNC_0 (int,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int,int ,int ,int ) ;

int FUNC_3(int VAR_1, bot_goal_t *VAR_2) {
 playerState_t VAR_3;
 int VAR_4;

 FUNC_0(VAR_1, &VAR_3);
 VAR_4 = FUNC_1(VAR_3.origin);
 if (!VAR_4) return 1;
 return FUNC_2(VAR_4, VAR_3.origin, VAR_2->areanum, VAR_0);
}
