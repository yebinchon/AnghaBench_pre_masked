
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int* persistant; } ;
typedef TYPE_2__ playerState_t ;
typedef int buf ;
struct TYPE_6__ {int* persistant; } ;
struct TYPE_8__ {TYPE_1__ cur_ps; } ;
typedef TYPE_3__ bot_state_t ;


 int FUNC_0 (int,TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 char* FUNC_1 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (scalar_t__,char*,int) ;

int FUNC_6(bot_state_t *VAR_7) {
 int VAR_8, VAR_9;
 char VAR_10[VAR_2];
 static int VAR_11;
 playerState_t VAR_12;

 if (!VAR_11)
  VAR_11 = FUNC_4("sv_maxclients");

 VAR_9 = VAR_7->cur_ps.persistant[VAR_3];
 for (VAR_8 = 0; VAR_8 < VAR_11 && VAR_8 < VAR_1; VAR_8++) {
  FUNC_5(VAR_0+VAR_8, VAR_10, sizeof(VAR_10));

  if (!FUNC_3(VAR_10) || !FUNC_3(FUNC_1(VAR_10, "n"))) continue;

  if (FUNC_2(FUNC_1(VAR_10, "t")) == VAR_4) continue;

  FUNC_0(VAR_8, &VAR_12);
  if (VAR_9 > VAR_12.persistant[VAR_3]) return VAR_5;
 }
 return VAR_6;
}
