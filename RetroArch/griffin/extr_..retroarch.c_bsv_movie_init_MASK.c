
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int rewind_granularity; } ;
struct TYPE_7__ {TYPE_1__ uints; } ;
typedef TYPE_2__ settings_t ;
typedef int msg ;
struct TYPE_8__ {char* movie_start_path; int movie_playback; scalar_t__ movie_start_recording; scalar_t__ movie_start_playback; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,char*,...) ;
 int FUNC_1 (char*,char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*,int ) ;
 TYPE_5__ VAR_8 ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 TYPE_2__* VAR_9 ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (char*,int,int,int,int *,int ,int ) ;
 int FUNC_6 (char*,int,char*,char*,char*) ;

__attribute__((used)) static bool FUNC_7(void)
{
   bool VAR_10 = 0;

   if (VAR_8.movie_start_playback)
   {
      if (!FUNC_2(VAR_8.movie_start_path,
                  VAR_6))
      {
         FUNC_0("%s: \"%s\".\n",
               FUNC_4(VAR_2),
               VAR_8.movie_start_path);
         return 0;
      }

      VAR_8.movie_playback = 1;
      FUNC_5(FUNC_4(VAR_4),
            2, 180, 0,
            ((void*)0), VAR_1, VAR_0);
      FUNC_1("%s.\n", FUNC_4(VAR_4));

      VAR_10 = 1;
   }
   else if (VAR_8.movie_start_recording)
   {
      if (!FUNC_2(VAR_8.movie_start_path,
                  VAR_7))
      {
         FUNC_5(
               FUNC_4(VAR_3),
               1, 180, 1,
               ((void*)0), VAR_1, VAR_0);
         FUNC_0("%s.\n",
               FUNC_4(VAR_3));
         return 0;
      }

      {
         char VAR_11[8192];
         FUNC_6(VAR_11, sizeof(VAR_11),
               "%s \"%s\".",
               FUNC_4(VAR_5),
               VAR_8.movie_start_path);

         FUNC_5(VAR_11, 1, 180, 1, ((void*)0), VAR_1, VAR_0);
         FUNC_1("%s \"%s\".\n",
               FUNC_4(VAR_5),
               VAR_8.movie_start_path);
      }

      VAR_10 = 1;
   }

   if (VAR_10)
   {
      settings_t *VAR_12 = VAR_9;
      FUNC_3(VAR_12,
            VAR_12->uints.rewind_granularity, 1);
   }

   return 1;
}
