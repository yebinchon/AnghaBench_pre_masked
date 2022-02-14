
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64_t ;
typedef int buffer ;
typedef int RFILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (char const*,int ,int ) ;
 scalar_t__ FUNC_4 (int *,char*,int) ;
 scalar_t__ FUNC_5 (int *,char*,scalar_t__) ;
 int FUNC_6 (char*,char*,size_t) ;

__attribute__((used)) static bool FUNC_7(const char *VAR_3, const char *VAR_4, char *VAR_5, size_t VAR_6)
{
   RFILE *VAR_7 = ((void*)0);
   bool VAR_8 = 1;
   RFILE *VAR_9 = FUNC_3(VAR_3,
         VAR_1,
         VAR_0);

   if (!VAR_9)
   {
      FUNC_6(VAR_5, "unable to open source file", VAR_6);
      VAR_8 = 0;
   }

   VAR_7 = FUNC_3(VAR_4,
         VAR_2,
         VAR_0);

   if (!VAR_7)
   {
      FUNC_6(VAR_5, "unable to open destination file", VAR_6);
      VAR_8 = 0;
   }

   while (!FUNC_1(VAR_9))
   {
      int64_t VAR_10;
      char VAR_11[100] = {0};
      int64_t VAR_12 = FUNC_4(VAR_9, VAR_11, sizeof(VAR_11));

      if (FUNC_2(VAR_7) != 0)
      {
         FUNC_6(VAR_5, "error reading file\n", VAR_6);
         VAR_8 = 0;
         break;
      }

      VAR_10 = FUNC_5(VAR_7, VAR_11, VAR_12);

      if (VAR_10 != VAR_12)
      {
         FUNC_6(VAR_5, "error writing to file\n", VAR_6);
         VAR_8 = 0;
         break;
      }
   }

   FUNC_0(VAR_9);
   FUNC_0(VAR_7);

   return VAR_8;
}
