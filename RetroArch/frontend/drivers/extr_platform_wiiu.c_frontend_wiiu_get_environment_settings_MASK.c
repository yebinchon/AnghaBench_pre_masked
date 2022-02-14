
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* config; } ;
struct TYPE_4__ {char** dirs; TYPE_1__ path; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 unsigned int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*,char*,char*,int) ;
 TYPE_2__ VAR_18 ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void FUNC_5(int *VAR_19, char *VAR_20[],
      void *VAR_21, void *VAR_22)
{
   unsigned VAR_23;
   (void)VAR_21;

   FUNC_1(VAR_18.dirs[VAR_10], VAR_17, sizeof(VAR_18.dirs[VAR_10]));

   FUNC_2(VAR_18.dirs[VAR_2], VAR_18.dirs[VAR_10],
         "downloads", sizeof(VAR_18.dirs[VAR_2]));
   FUNC_2(VAR_18.dirs[VAR_0], VAR_18.dirs[VAR_10],
         "media", sizeof(VAR_18.dirs[VAR_0]));
   FUNC_2(VAR_18.dirs[VAR_1], VAR_18.dirs[VAR_10],
         "cores", sizeof(VAR_18.dirs[VAR_1]));
   FUNC_2(VAR_18.dirs[VAR_3], VAR_18.dirs[VAR_1],
         "info", sizeof(VAR_18.dirs[VAR_3]));
   FUNC_2(VAR_18.dirs[VAR_12], VAR_18.dirs[VAR_1],
         "savestates", sizeof(VAR_18.dirs[VAR_12]));
   FUNC_2(VAR_18.dirs[VAR_13], VAR_18.dirs[VAR_1],
         "savefiles", sizeof(VAR_18.dirs[VAR_13]));
   FUNC_2(VAR_18.dirs[VAR_14], VAR_18.dirs[VAR_1],
         "system", sizeof(VAR_18.dirs[VAR_14]));
   FUNC_2(VAR_18.dirs[VAR_9], VAR_18.dirs[VAR_1],
         "playlists", sizeof(VAR_18.dirs[VAR_9]));
   FUNC_2(VAR_18.dirs[VAR_8], VAR_18.dirs[VAR_10],
         "config", sizeof(VAR_18.dirs[VAR_8]));
   FUNC_2(VAR_18.dirs[VAR_11], VAR_18.dirs[VAR_10],
         "config/remaps", sizeof(VAR_18.dirs[VAR_11]));
   FUNC_2(VAR_18.dirs[VAR_15], VAR_18.dirs[VAR_10],
         "filters", sizeof(VAR_18.dirs[VAR_15]));
   FUNC_2(VAR_18.dirs[VAR_5], VAR_18.dirs[VAR_10],
         "database/rdb", sizeof(VAR_18.dirs[VAR_5]));
   FUNC_2(VAR_18.dirs[VAR_4], VAR_18.dirs[VAR_10],
         "database/cursors", sizeof(VAR_18.dirs[VAR_4]));
   FUNC_2(VAR_18.dirs[VAR_7], VAR_18.dirs[VAR_1],
         "logs", sizeof(VAR_18.dirs[VAR_7]));
   FUNC_2(VAR_18.path.config, VAR_18.dirs[VAR_10],
         FUNC_0(VAR_16), sizeof(VAR_18.path.config));

   for (VAR_23 = 0; VAR_23 < VAR_6; VAR_23++)
   {
      const char *VAR_24 = VAR_18.dirs[VAR_23];
      if (!FUNC_4(VAR_24))
         FUNC_3(VAR_24);
   }
}
