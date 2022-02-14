
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int game_path ;
typedef int config_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int * FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*,int,int) ;
 int FUNC_7 (int ,int,int,int,int *,int ,int ) ;

__attribute__((used)) static int FUNC_8(const char *VAR_6,
      const char *VAR_7, unsigned VAR_8, size_t VAR_9, size_t VAR_10)
{
   char VAR_11[VAR_4];
   config_file_t *VAR_12 = ((void*)0);

   VAR_11[0] = '\0';

   if (!FUNC_6(VAR_11, sizeof(VAR_11), 1))
   {
      FUNC_7(
            FUNC_4(VAR_3),
            1, 100, 1,
            ((void*)0), VAR_1, VAR_0);
      return 0;
   }

   if (!(VAR_12 = FUNC_2(VAR_11)))
      if (!(VAR_12 = FUNC_1()))
         return 0;

   if (FUNC_3(VAR_12, VAR_11, 1))
   {
      FUNC_7(
            FUNC_4(VAR_2),
            1, 100, 1,
            ((void*)0), VAR_1, VAR_0);
      FUNC_5(VAR_5, VAR_11);
   }
   FUNC_0(VAR_12);

   return 0;
}
