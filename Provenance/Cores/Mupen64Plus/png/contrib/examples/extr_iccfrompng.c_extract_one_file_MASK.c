
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_32 ;
typedef char* png_bytep ;
typedef int FILE ;


 char* FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (int ,char*,char const*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int ,int,int *) ;
 char* FUNC_7 (size_t) ;
 int FUNC_8 (char*,char const*,size_t) ;
 char* VAR_0 ;
 int FUNC_9 (char*,char const*,...) ;
 scalar_t__ FUNC_10 (char*) ;
 int VAR_1 ;
 int FUNC_11 (char*,char*) ;
 size_t FUNC_12 (char const*) ;
 char* FUNC_13 (char const*,char) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_14(const char *VAR_3)
{
   int VAR_4 = 0;
   FILE *VAR_5 = FUNC_3(VAR_3, "rb");

   if (VAR_5 != ((void*)0))
   {
      png_uint_32 VAR_6 = 0;
      png_bytep VAR_7 = FUNC_0(VAR_5, &VAR_6);

      if (VAR_7 != ((void*)0) && VAR_7 != VAR_0)
      {
         size_t VAR_8;
         char *VAR_9;

         {
            const char *VAR_10 = FUNC_13(VAR_3, '.');

            if (VAR_10 != ((void*)0))
               VAR_8 = VAR_10-VAR_3;

            else
               VAR_8 = FUNC_12(VAR_3);
         }

         VAR_9 = FUNC_7(VAR_8 + 5);
         if (VAR_9 != ((void*)0))
         {
            FILE *VAR_11;

            FUNC_8(VAR_9, VAR_3, VAR_8);
            FUNC_11(VAR_9+VAR_8, ".icc");

            VAR_11 = FUNC_3(VAR_9, "wb");
            if (VAR_11 != ((void*)0))
            {
               if (FUNC_6(VAR_7, VAR_6, 1, VAR_11) == 1 &&
                  FUNC_2(VAR_11) == 0 &&
                  FUNC_1(VAR_11) == 0)
               {
                  if (VAR_2)
                     FUNC_9("%s -> %s\n", VAR_3, VAR_9);

                  VAR_4 = 1;
               }

               else
               {
                  FUNC_4(VAR_1, "%s: error writing profile\n", VAR_9);
                  if (FUNC_10(VAR_9))
                     FUNC_4(VAR_1, "%s: could not remove file\n", VAR_9);
               }
            }

            else
               FUNC_4(VAR_1, "%s: failed to open output file\n", VAR_9);

            FUNC_5(VAR_9);
         }

         else
            FUNC_4(VAR_1, "%s: OOM allocating string!\n", VAR_3);

         FUNC_5(VAR_7);
      }

      else if (VAR_2 && VAR_7 == VAR_0)
 FUNC_9("%s has no profile\n", VAR_3);
   }

   else
      FUNC_4(VAR_1, "%s: could not open file\n", VAR_3);

   return VAR_4;
}
