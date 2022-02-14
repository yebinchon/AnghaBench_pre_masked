
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef int error_string ;
typedef int errorConf ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,char const*) ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 char* VAR_4 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (char const*,char const**) ;
 int FUNC_9 (char const*,char const**) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*) ;
 char const* FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*,int,char*,char const*) ;
 scalar_t__ FUNC_15 (char const*,struct stat*) ;
 int FUNC_16 (char*,char const*) ;

__attribute__((used)) static void FUNC_17(const char* VAR_5, bool VAR_6)
{
   char VAR_7[VAR_2];
   const char* VAR_8[3];
   errorConf VAR_9;
   char VAR_10[200 + VAR_2];
   int VAR_11 = 0;
   int VAR_12 = 0;

   FUNC_1(VAR_5);
   FUNC_0(VAR_5);

   VAR_7[0] = '\0';
   VAR_8[0] = ((void*)0);

   VAR_8[VAR_11] = VAR_4;
   VAR_8[VAR_11 + 1] = ((void*)0);
   VAR_11++;

   FUNC_2("Attempt to load core: [%s].\n", VAR_5);

   if (VAR_6 && !FUNC_13(VAR_3))
   {
      FUNC_16(VAR_7, FUNC_12(VAR_3));
      VAR_8[VAR_11] = VAR_7;
      VAR_8[VAR_11 + 1] = ((void*)0);
      VAR_11++;
      FUNC_2("content path: [%s].\n", FUNC_12(VAR_3));
   }


   if (VAR_5 && VAR_5[0])
   {
      if (FUNC_4())
         FUNC_8(VAR_5, VAR_8);
      else
      {
         FUNC_3("\n");
         FUNC_3("\n");
         FUNC_3("Warning:\n");
         FUNC_3("First core launch may take 20\n");
         FUNC_3("seconds! Do not force quit\n");
         FUNC_3("before then or your memory\n");
         FUNC_3("card may be corrupted!\n");
         FUNC_3("\n");
         FUNC_3("\n");
         FUNC_9(VAR_5, VAR_8);
      }

      FUNC_6(&VAR_9, VAR_1, VAR_0);
      FUNC_14(VAR_10, sizeof(VAR_10),
            "Can't launch core:%s", VAR_5);
      FUNC_7(&VAR_9, VAR_10);
      FUNC_5(&VAR_9);
      FUNC_10(0);

   }
}
