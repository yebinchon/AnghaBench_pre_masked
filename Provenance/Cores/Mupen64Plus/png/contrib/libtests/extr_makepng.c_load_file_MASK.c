
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* png_const_charp ;
typedef scalar_t__** png_bytepp ;
typedef scalar_t__* png_bytep ;
typedef scalar_t__ png_byte ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (scalar_t__*) ;
 int FUNC_6 (int *) ;
 scalar_t__* FUNC_7 (size_t) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int,int *) ;
 int FUNC_10 (int *) ;
 int VAR_1 ;
 int * FUNC_11 () ;

__attribute__((used)) static size_t
FUNC_12(png_const_charp VAR_2, png_bytepp VAR_3)
{
   FILE *VAR_4 = FUNC_11();

   if (VAR_4 != ((void*)0))
   {
      FILE *VAR_5 = FUNC_3(VAR_2, "rb");

      if (VAR_5 != ((void*)0))
      {
         size_t VAR_6 = 0;
         int VAR_7;

         for (;;)
         {
            VAR_7 = FUNC_6(VAR_5);
            if (VAR_7 == VAR_0) break;
            FUNC_9(VAR_7, VAR_4);
            ++VAR_6;
         }

         if (FUNC_2(VAR_5))
         {
            FUNC_8(VAR_2);
            FUNC_4(VAR_1, "%s: read error\n", VAR_2);
            (void)FUNC_1(VAR_5);
         }

         else
         {
            (void)FUNC_1(VAR_5);

            if (FUNC_2(VAR_4))
            {
               FUNC_8("temporary file");
               FUNC_4(VAR_1, "temporary file write error\n");
            }

            else
            {
               FUNC_10(VAR_4);

               if (VAR_6 > 0)
               {



                  png_bytep VAR_8 = FUNC_7((VAR_6+3)&~3);

                  if (VAR_8 != ((void*)0))
                  {
                     size_t VAR_9 = 0;

                     for (;;)
                     {
                        VAR_7 = FUNC_6(VAR_4);
                        if (VAR_7 == VAR_0) break;
                        VAR_8[VAR_9++] = (png_byte)VAR_7;
                     }

                     if (FUNC_2(VAR_4) || VAR_9 != VAR_6)
                     {
                        FUNC_8("temporary file");
                        FUNC_4(VAR_1, "temporary file read error\n");
                        FUNC_5(VAR_8);
                     }

                     else
                     {
                        (void)FUNC_1(VAR_4);
                        *VAR_3 = VAR_8;
                        return VAR_6;
                     }
                  }

                  else
                     FUNC_4(VAR_1, "%s: out of memory loading file\n", VAR_2);
               }

               else
                  FUNC_4(VAR_1, "%s: empty file\n", VAR_2);
            }
         }
      }

      else
      {
         FUNC_8(VAR_2);
         FUNC_4(VAR_1, "%s: open failed\n", VAR_2);
      }

      FUNC_1(VAR_4);
   }

   else
      FUNC_4(VAR_1, "makepng: %s: could not open temporary file\n", VAR_2);

   FUNC_0(1);
   return 0;
}
