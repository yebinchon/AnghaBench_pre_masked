
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int buf ;
struct TYPE_2__ {char* string; } ;


 int FUNC_0 (char*,int,char*,int ) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*,int) ;

int FUNC_7(void) {
 char VAR_2[144];


 FUNC_6("sv_maxclients", VAR_2, sizeof(VAR_2));
 if (!FUNC_2(VAR_2)) FUNC_1(VAR_2, "8");
 FUNC_5("maxclients", VAR_2);
 FUNC_0(VAR_2, sizeof(VAR_2), "%d", VAR_0);
 FUNC_5("maxentities", VAR_2);

 FUNC_6("sv_mapChecksum", VAR_2, sizeof(VAR_2));
 if (FUNC_2(VAR_2)) FUNC_5("sv_mapChecksum", VAR_2);

 FUNC_6("max_aaslinks", VAR_2, sizeof(VAR_2));
 if (FUNC_2(VAR_2)) FUNC_5("max_aaslinks", VAR_2);

 FUNC_6("max_levelitems", VAR_2, sizeof(VAR_2));
 if (FUNC_2(VAR_2)) FUNC_5("max_levelitems", VAR_2);

 FUNC_6("g_gametype", VAR_2, sizeof(VAR_2));
 if (!FUNC_2(VAR_2)) FUNC_1(VAR_2, "0");
 FUNC_5("g_gametype", VAR_2);

 FUNC_5("bot_developer", VAR_1.string);
 FUNC_5("log", VAR_2);

 FUNC_6("bot_nochat", VAR_2, sizeof(VAR_2));
 if (FUNC_2(VAR_2)) FUNC_5("nochat", "0");

 FUNC_6("bot_visualizejumppads", VAR_2, sizeof(VAR_2));
 if (FUNC_2(VAR_2)) FUNC_5("bot_visualizejumppads", VAR_2);

 FUNC_6("bot_forceclustering", VAR_2, sizeof(VAR_2));
 if (FUNC_2(VAR_2)) FUNC_5("forceclustering", VAR_2);

 FUNC_6("bot_forcereachability", VAR_2, sizeof(VAR_2));
 if (FUNC_2(VAR_2)) FUNC_5("forcereachability", VAR_2);

 FUNC_6("bot_forcewrite", VAR_2, sizeof(VAR_2));
 if (FUNC_2(VAR_2)) FUNC_5("forcewrite", VAR_2);

 FUNC_6("bot_aasoptimize", VAR_2, sizeof(VAR_2));
 if (FUNC_2(VAR_2)) FUNC_5("aasoptimize", VAR_2);

 FUNC_6("bot_saveroutingcache", VAR_2, sizeof(VAR_2));
 if (FUNC_2(VAR_2)) FUNC_5("saveroutingcache", VAR_2);

 FUNC_6("bot_reloadcharacters", VAR_2, sizeof(VAR_2));
 if (!FUNC_2(VAR_2)) FUNC_1(VAR_2, "0");
 FUNC_5("bot_reloadcharacters", VAR_2);

 FUNC_6("fs_basepath", VAR_2, sizeof(VAR_2));
 if (FUNC_2(VAR_2)) FUNC_5("basedir", VAR_2);

 FUNC_6("fs_game", VAR_2, sizeof(VAR_2));
 if (FUNC_2(VAR_2)) FUNC_5("gamedir", VAR_2);

 FUNC_6("fs_cdpath", VAR_2, sizeof(VAR_2));
 if (FUNC_2(VAR_2)) FUNC_5("cddir", VAR_2);





 return FUNC_4();
}
