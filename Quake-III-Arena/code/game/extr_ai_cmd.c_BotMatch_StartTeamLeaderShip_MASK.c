
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int teammate ;
struct TYPE_6__ {char* teamleader; } ;
typedef TYPE_1__ bot_state_t ;
struct TYPE_7__ {int subtype; } ;
typedef TYPE_2__ bot_match_t ;


 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (TYPE_2__*,int ,char*,int) ;

void FUNC_5(bot_state_t *VAR_4, bot_match_t *VAR_5) {
 int VAR_6;
 char VAR_7[VAR_0];

 if (!FUNC_2()) return;

 if (VAR_5->subtype & VAR_2) {

  FUNC_4(VAR_5, VAR_1, VAR_7, sizeof(VAR_7));
  FUNC_3(VAR_4->teamleader, VAR_7, sizeof(VAR_4->teamleader));
  VAR_4->teamleader[sizeof(VAR_4->teamleader)] = '\0';
 }

 else {

  FUNC_4(VAR_5, VAR_3, VAR_7, sizeof(VAR_7));
  VAR_6 = FUNC_1(VAR_7);
  if (VAR_6 >= 0) FUNC_0(VAR_6, VAR_4->teamleader, sizeof(VAR_4->teamleader));
 }
}
