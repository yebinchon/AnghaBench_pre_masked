
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ bot_goal_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,TYPE_1__*) ;

int FUNC_2(char *VAR_3, bot_goal_t *VAR_4) {
 int VAR_5;

 if (!FUNC_0(VAR_3)) return VAR_1;
 VAR_5 = -1;
 do {
  VAR_5 = FUNC_1(VAR_5, VAR_3, VAR_4);
  if (VAR_5 > 0) {

   if (VAR_4->flags & VAR_0)
    continue;
   return VAR_2;
  }
 } while(VAR_5 > 0);
 return VAR_1;
}
