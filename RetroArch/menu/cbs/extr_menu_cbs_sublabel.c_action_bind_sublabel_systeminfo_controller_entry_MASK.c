
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
typedef int file_list_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 char* FUNC_1 (unsigned int) ;
 char* FUNC_2 (unsigned int) ;
 char* FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 scalar_t__ FUNC_6 (unsigned int) ;
 int FUNC_7 (char*,int,char*,...) ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 int FUNC_9 (char*,char*,size_t) ;

__attribute__((used)) static int FUNC_10(
      file_list_t *VAR_1,
      unsigned VAR_2, unsigned VAR_3,
      const char *VAR_4, const char *VAR_5,
      char *VAR_6, size_t VAR_7)
{
   char VAR_8[4096];
   unsigned VAR_9;

   for(VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
   {
      if (FUNC_6(VAR_9))
      {
            FUNC_7(VAR_8, sizeof(VAR_8), "Port #%d device name: %s (#%d)",
               VAR_9,
               FUNC_3(VAR_9),
               FUNC_0(VAR_9));

            if (FUNC_8(VAR_5, VAR_8))
               break;
      }
   }
   FUNC_7(VAR_8, sizeof(VAR_8), "Device display name: %s\nDevice config name: %s\nDevice identifiers: %d/%d",
      FUNC_2(VAR_9) ? FUNC_2(VAR_9) : "N/A",
      FUNC_2(VAR_9) ? FUNC_1(VAR_9) : "N/A",
      FUNC_5(VAR_9), FUNC_4(VAR_9));
   FUNC_9(VAR_6, VAR_8, VAR_7);

   return 0;
}
