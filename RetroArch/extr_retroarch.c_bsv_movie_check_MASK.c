
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int movie_playback; int movie_end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 () ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int,int,int,int *,int ,int ) ;

__attribute__((used)) static bool FUNC_5(void)
{
   if (!VAR_5)
      return FUNC_3();

   if (VAR_4.movie_playback)
   {

      if (!VAR_4.movie_end)
         return 0;
      FUNC_4(
            FUNC_2(VAR_2), 2, 180, 0,
            ((void*)0), VAR_1, VAR_0);
      FUNC_0("%s\n", FUNC_2(VAR_2));

      FUNC_1();

      VAR_4.movie_end = 0;
      VAR_4.movie_playback = 0;

      return 1;
   }


   if (!VAR_5)
      return 0;

   FUNC_4(
         FUNC_2(VAR_3), 2, 180, 1,
         ((void*)0), VAR_1, VAR_0);
   FUNC_0("%s\n", FUNC_2(VAR_3));

   FUNC_1();

   return 1;
}
