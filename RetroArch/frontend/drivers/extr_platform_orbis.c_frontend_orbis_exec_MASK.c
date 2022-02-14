
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int argp ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(const char *VAR_1, bool VAR_2)
{
   char VAR_3[512] = {0};
   int VAR_4 = 0;


   if (VAR_2 && !FUNC_2(VAR_0))
   {
      VAR_3[VAR_4] = '\0';
      FUNC_3(VAR_3 + VAR_4, FUNC_1(VAR_0), sizeof(VAR_3) - VAR_4);
      VAR_4 += FUNC_4(VAR_3 + VAR_4) + 1;
   }


   FUNC_0("Attempt to load executable: [%s].\n", VAR_1);
   FUNC_0("Attempt to load executable: %d [%s].\n", VAR_4, VAR_3);



}
