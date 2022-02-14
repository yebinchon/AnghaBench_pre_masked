
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int integer; } ;
struct TYPE_6__ {int client; scalar_t__ inuse; } ;
struct TYPE_5__ {int string; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 TYPE_2__** VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,char*) ;
 char* FUNC_7 (char*,scalar_t__,...) ;

void FUNC_8(void) {
 int VAR_10;

 FUNC_5(&VAR_5);
 if (!FUNC_2(VAR_5.string)) return;

 if (VAR_7 != VAR_1) {
  FUNC_4("g_gametype", FUNC_7("%d", VAR_1));
  FUNC_1();
  return;
 }

 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  if (VAR_6[VAR_10] && VAR_6[VAR_10]->inuse) {
   FUNC_0(VAR_6[VAR_10]->client, VAR_8);
  }
 }

 FUNC_3("bot_reloadcharacters", "1");

 for (VAR_10 = 0; VAR_10 < VAR_4.integer; VAR_10++) {
  FUNC_6( VAR_0, FUNC_7("addbot %s 4 free %i %s%d\n",
      VAR_5.string, VAR_10 * 50, VAR_5.string, VAR_10) );
 }

 FUNC_4("bot_interbreedchar", "");
 VAR_3 = VAR_9;
}
