
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* Message_Digest; } ;
typedef TYPE_1__ SHA1Context ;
typedef int RFILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,unsigned char*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char const*,int ,int ) ;
 scalar_t__ FUNC_5 (int *,unsigned char*,int) ;
 int FUNC_6 (char*,char*,int,int,int,int,int) ;

int FUNC_7(const char *VAR_2, char *VAR_3)
{
   SHA1Context VAR_4;
   unsigned char VAR_5[4096];
   int VAR_6 = 1;
   RFILE *VAR_7 = FUNC_4(VAR_2,
         VAR_1,
         VAR_0);

   if (!VAR_7)
      goto error;

   VAR_5[0] = '\0';

   FUNC_1(&VAR_4);

   do
   {
      VAR_6 = (int)FUNC_5(VAR_7, VAR_5, 4096);
      if (VAR_6 < 0)
         goto error;

      FUNC_0(&VAR_4, VAR_5, VAR_6);
   }while(VAR_6);

   if (!FUNC_2(&VAR_4))
      goto error;

   FUNC_6(VAR_3, "%08X%08X%08X%08X%08X",
         VAR_4.Message_Digest[0],
         VAR_4.Message_Digest[1],
         VAR_4.Message_Digest[2],
         VAR_4.Message_Digest[3], VAR_4.Message_Digest[4]);

   FUNC_3(VAR_7);
   return 0;

error:
   if (VAR_7)
      FUNC_3(VAR_7);
   return -1;
}
