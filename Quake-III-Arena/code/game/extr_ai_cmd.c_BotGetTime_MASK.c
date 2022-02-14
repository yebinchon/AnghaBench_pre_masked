
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int subtype; scalar_t__ type; } ;
typedef TYPE_1__ bot_match_t ;


 float FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,char*,int) ;

float FUNC_4(bot_match_t *VAR_9) {
 bot_match_t VAR_10;
 char VAR_11[VAR_0];
 float VAR_12;


 if (VAR_9->subtype & VAR_7) {

  FUNC_3(VAR_9, VAR_8, VAR_11, VAR_0);

  if (FUNC_2(VAR_11, &VAR_10, VAR_6)) {
   if (VAR_10.type == VAR_3) {
    VAR_12 = 99999999.0f;
   }
   else if (VAR_10.type == VAR_2) {
    VAR_12 = 10 * 60;
   }
   else if (VAR_10.type == VAR_1) {
    VAR_12 = 30 * 60;
   }
   else {
    FUNC_3(&VAR_10, VAR_8, VAR_11, VAR_0);
    if (VAR_10.type == VAR_4) VAR_12 = FUNC_1(VAR_11) * 60;
    else if (VAR_10.type == VAR_5) VAR_12 = FUNC_1(VAR_11);
    else VAR_12 = 0;
   }

   if (VAR_12 > 0) return FUNC_0() + VAR_12;
  }
 }
 return 0;
}
