
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,void const*,size_t) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (char*,int,char*,char*,unsigned int,char*) ;
 int FUNC_7 (char*,int,char*,int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static bool FUNC_9(const void *VAR_1,
      size_t VAR_2, unsigned VAR_3)
{
   time_t VAR_4;
   char *VAR_5;
   char *VAR_6;
   char *VAR_7 = (char*)FUNC_5(VAR_0 * sizeof(char));
   VAR_7[0] = '\0';

   if (!FUNC_2(VAR_7,
            VAR_0 * sizeof(char)))
   {
      FUNC_3(VAR_7);
      return 0;
   }

   FUNC_8(&VAR_4);

   VAR_5 = (char*)FUNC_5(256 * sizeof(char));
   VAR_5[0] = '\0';

   FUNC_7(VAR_5,
         256 * sizeof(char),
         "%Y-%m-%d-%H-%M-%S", FUNC_4(&VAR_4));

   VAR_6 = (char*)FUNC_5(VAR_0 * sizeof(char));
   VAR_6[0] = '\0';
   FUNC_6(VAR_6,
         VAR_0 * sizeof(char),
         "%s/RetroArch-recovery-%u%s",
         VAR_7, VAR_3,
         VAR_5);

   FUNC_3(VAR_7);
   FUNC_3(VAR_5);

   if (!FUNC_1(VAR_6, VAR_1, VAR_2))
   {
      FUNC_3(VAR_6);
      return 0;
   }

   FUNC_0("Succeeded in saving RAM data to \"%s\".\n", VAR_6);
   FUNC_3(VAR_6);
   return 1;
}
