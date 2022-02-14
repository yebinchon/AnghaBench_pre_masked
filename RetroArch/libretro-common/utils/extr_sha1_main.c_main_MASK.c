
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SHA1Context {int* Message_Digest; } ;
typedef int FILE ;


 int FUNC_0 (struct SHA1Context*,char*,int) ;
 int FUNC_1 (struct SHA1Context*) ;
 int FUNC_2 (struct SHA1Context*) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 char FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char*,char*) ;
 int FUNC_8 (int ,char*,char*) ;
 int FUNC_9 (char*,int,int,int,int,int,char*) ;
 int FUNC_10 (int ,int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ FUNC_11 (char*,char*) ;
 int FUNC_12 () ;

int FUNC_13(int VAR_3, char *VAR_4[])
{
   struct SHA1Context VAR_5;
   FILE *VAR_6;
   char VAR_7;
   int VAR_8;
   int VAR_9;
   int VAR_10 = 0;





   if (VAR_3 > 1 && (FUNC_11(VAR_4[1],"-?") ||
            FUNC_11(VAR_4[1],"--help")))
   {
      FUNC_12();
      return 1;
   }





   for(VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
   {





      if (VAR_8 == 0)
         VAR_8++;

      if (VAR_3 == 1 || FUNC_11(VAR_4[VAR_8],"-"))
      {



         VAR_6 = VAR_2;
         VAR_9 = 1;
      }
      else
      {
         if (!(VAR_6 = FUNC_7(VAR_4[VAR_8],"rb")))
         {
            FUNC_8(VAR_1,
                  "sha: unable to open file %s\n",
                  VAR_4[VAR_8]);
            return 2;
         }
         VAR_9 = 0;
      }




      if (VAR_9)
      {
         if (VAR_10)
            continue;

         VAR_10 = 1;
      }




      FUNC_1(&VAR_5);

      VAR_7 = FUNC_5(VAR_6);
      while(!FUNC_4(VAR_6))
      {
         FUNC_0(&VAR_5, &VAR_7, 1);
         VAR_7 = FUNC_5(VAR_6);
      }

      if (!VAR_9)
         FUNC_3(VAR_6);

      if (!FUNC_2(&VAR_5))
      {
         FUNC_8(VAR_1,
               "sha: could not compute message digest for %s\n",
               VAR_9?"STDIN":VAR_4[VAR_8]);
      }
      else
      {
         FUNC_9( "%08X %08X %08X %08X %08X - %s\n",
               VAR_5.Message_Digest[0],
               VAR_5.Message_Digest[1],
               VAR_5.Message_Digest[2],
               VAR_5.Message_Digest[3],
               VAR_5.Message_Digest[4],
               VAR_9?"STDIN":VAR_4[VAR_8]);
      }
   }

   return 0;
}
