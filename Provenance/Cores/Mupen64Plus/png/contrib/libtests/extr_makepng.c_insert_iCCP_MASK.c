
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_32 ;
typedef int png_structp ;
typedef int png_size_t ;
typedef int png_infop ;
typedef int** png_charpp ;
typedef scalar_t__* png_bytep ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (int*,scalar_t__**) ;
 int FUNC_5 (int*,scalar_t__**) ;
 int FUNC_6 (scalar_t__*) ;
 int FUNC_7 (scalar_t__*,int) ;
 int FUNC_8 (int ,int ,int*,int ,scalar_t__*,int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_9(png_structp VAR_2, png_infop VAR_3, int VAR_4,
   png_charpp VAR_5)
{
   png_bytep VAR_6 = ((void*)0);
   png_uint_32 VAR_7 = 0;
   int VAR_8;

   FUNC_0(VAR_4, 2);

   switch (VAR_5[1][0])
   {
      case '<':
         {
            png_size_t VAR_9 = FUNC_5(VAR_5[1]+1, &VAR_6);
            if (VAR_9 > 0xfffffffc)
            {
               FUNC_2(VAR_1, "%s: file too long (%lu) for an ICC profile\n",
                  VAR_5[1]+1, (unsigned long)VAR_9);
               FUNC_1(1);
            }

            VAR_7 = (png_uint_32)VAR_9;
         }
         break;

      case '0': case '1': case '2': case '3': case '4':
      case '5': case '6': case '7': case '8': case '9':
         {
            png_size_t VAR_10 = FUNC_4(VAR_5[1], &VAR_6);

            if (VAR_10 > 0)
            {
               if (VAR_10 > 0xffffffff)
               {
                  FUNC_2(VAR_1,
                     "%s: fake data too long (%lu) for an ICC profile\n",
                     VAR_5[1], (unsigned long)VAR_10);
                  FUNC_1(1);
               }
               VAR_7 = (png_uint_32)(VAR_10 & ~3U);

               FUNC_7(VAR_6, VAR_7);
               break;
            }
         }

      default:
         FUNC_2(VAR_1, "--insert iCCP \"%s\": unrecognized\n", VAR_5[1]);
         FUNC_2(VAR_1, "  use '<' to read a file: \"<filename\"\n");
         FUNC_1(1);
   }

   VAR_8 = 1;

   if (VAR_7 & 3)
   {
      FUNC_2(VAR_1,
         "makepng: --insert iCCP %s: profile length made a multiple of 4\n",
         VAR_5[1]);




      while (VAR_7 & 3)
         VAR_6[VAR_7++] = 0;
   }

   if (VAR_6 != ((void*)0) && VAR_7 > 3)
   {
      png_uint_32 VAR_11 = FUNC_6(VAR_6);

      if (VAR_11 != VAR_7)
      {
         FUNC_2(VAR_1, "--insert iCCP %s: profile length field wrong:\n",
            VAR_5[1]);
         FUNC_2(VAR_1, "  actual %lu, recorded value %lu (corrected)\n",
            (unsigned long)VAR_7, (unsigned long)VAR_11);
         FUNC_7(VAR_6, VAR_7);
      }
   }

   if (VAR_8 && VAR_6 != ((void*)0) && VAR_7 >=4)
      FUNC_8(VAR_2, VAR_3, VAR_5[0], VAR_0,
         VAR_6, VAR_7);

   if (VAR_6)
      FUNC_3(VAR_6);

   if (!VAR_8)
      FUNC_1(1);
}
