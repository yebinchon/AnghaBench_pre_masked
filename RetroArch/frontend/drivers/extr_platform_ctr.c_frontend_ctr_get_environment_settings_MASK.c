
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int config; } ;
struct TYPE_4__ {int * dirs; TYPE_1__ path; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (char*,int ) ;
 int VAR_16 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,char*,int) ;
 TYPE_2__ VAR_17 ;

__attribute__((used)) static void FUNC_4(int* VAR_18, char* VAR_19[],
      void* VAR_20, void* VAR_21)
{
   (void)VAR_20;

   FUNC_2(VAR_17.dirs[VAR_9], VAR_16, sizeof(VAR_17.dirs[VAR_9]));
   FUNC_0("port dir: [%s]\n", VAR_17.dirs[VAR_9]);

   FUNC_3(VAR_17.dirs[VAR_2], VAR_17.dirs[VAR_9],
                      "downloads", sizeof(VAR_17.dirs[VAR_2]));
   FUNC_3(VAR_17.dirs[VAR_0], VAR_17.dirs[VAR_9],
                      "media", sizeof(VAR_17.dirs[VAR_0]));
   FUNC_3(VAR_17.dirs[VAR_1], VAR_17.dirs[VAR_9],
                      "cores", sizeof(VAR_17.dirs[VAR_1]));
   FUNC_3(VAR_17.dirs[VAR_3], VAR_17.dirs[VAR_1],
                      "info", sizeof(VAR_17.dirs[VAR_3]));
   FUNC_3(VAR_17.dirs[VAR_11], VAR_17.dirs[VAR_1],
                      "savestates", sizeof(VAR_17.dirs[VAR_11]));
   FUNC_3(VAR_17.dirs[VAR_12], VAR_17.dirs[VAR_1],
                      "savefiles", sizeof(VAR_17.dirs[VAR_12]));
   FUNC_3(VAR_17.dirs[VAR_13], VAR_17.dirs[VAR_1],
                      "system", sizeof(VAR_17.dirs[VAR_13]));
   FUNC_3(VAR_17.dirs[VAR_8], VAR_17.dirs[VAR_1],
                      "playlists", sizeof(VAR_17.dirs[VAR_8]));
   FUNC_3(VAR_17.dirs[VAR_7], VAR_17.dirs[VAR_9],
                      "config", sizeof(VAR_17.dirs[VAR_7]));
   FUNC_3(VAR_17.dirs[VAR_10], VAR_17.dirs[VAR_9],
                      "config/remaps", sizeof(VAR_17.dirs[VAR_10]));
   FUNC_3(VAR_17.dirs[VAR_14], VAR_17.dirs[VAR_9],
                      "filters", sizeof(VAR_17.dirs[VAR_14]));
   FUNC_3(VAR_17.dirs[VAR_5], VAR_17.dirs[VAR_9],
                      "database/rdb", sizeof(VAR_17.dirs[VAR_5]));
   FUNC_3(VAR_17.dirs[VAR_4], VAR_17.dirs[VAR_9],
                      "database/cursors", sizeof(VAR_17.dirs[VAR_4]));
   FUNC_3(VAR_17.dirs[VAR_6], VAR_17.dirs[VAR_9],
                      "logs", sizeof(VAR_17.dirs[VAR_6]));
   FUNC_3(VAR_17.path.config, VAR_17.dirs[VAR_9],
                      FUNC_1(VAR_15), sizeof(VAR_17.path.config));
}
