
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (char const*,int,int *,int *,char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ,int ,char*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(const char *VAR_3, char* VAR_4)
{
   char *VAR_5 = (char*)FUNC_4(VAR_2
         * sizeof(char));
   int VAR_6 = 0;
   uint64_t VAR_7 = 0;
   uint64_t VAR_8 = 0;
   int VAR_9 = 0;

   VAR_5[0] = '\0';

   VAR_9 = FUNC_1(VAR_3, 1, &VAR_7, &VAR_8, VAR_5, VAR_2);

   if (VAR_9 < 0)
   {
      FUNC_0("%s: %s\n",
            FUNC_5(VAR_0),
            FUNC_6(-VAR_9));
      FUNC_2(VAR_5);
      return 0;
   }

   FUNC_0("%s\n", FUNC_5(VAR_1));

   VAR_6 = FUNC_3(VAR_5, VAR_7, VAR_8, VAR_4);
   FUNC_2(VAR_5);

   return VAR_6;
}
