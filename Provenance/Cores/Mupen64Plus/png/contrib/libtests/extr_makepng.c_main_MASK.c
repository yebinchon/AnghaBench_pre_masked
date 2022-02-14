
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int png_fixed_point ;
typedef char* png_const_charp ;
typedef char* png_charp ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_1__ chunk_insert ;
typedef int FILE ;




 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_1__* FUNC_0 (char*,char*,int *,char**) ;
 TYPE_1__* FUNC_1 (char*,char**) ;
 int FUNC_2 (char*) ;
 int VAR_15 ;
 int FUNC_3 (int) ;
 TYPE_1__* FUNC_4 (char*,char*) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (int ,char*,...) ;
 scalar_t__ FUNC_7 (char) ;
 int FUNC_8 (unsigned int*,int ,int) ;
 int FUNC_9 (char*,unsigned int*) ;
 int FUNC_10 (char const*) ;
 int VAR_16 ;
 int * VAR_17 ;
 scalar_t__ FUNC_11 (char*,char*) ;
 char* FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (char*,char*,int) ;
 int FUNC_14 (char const**,int *,int,int,int ,TYPE_1__*,unsigned int,unsigned int*,int,int) ;

int
FUNC_15(int VAR_18, char **VAR_19)
{
   FILE *VAR_20 = VAR_17;
   const char *VAR_21 = ((void*)0);
   int VAR_22 = 8;
   int VAR_23 = 32;
   int VAR_24 = 0;
   int VAR_25 = 0;
   unsigned int VAR_26[5];
   unsigned int VAR_27 = VAR_0;
   png_fixed_point VAR_28 = 0;
   chunk_insert *VAR_29 = ((void*)0);
   chunk_insert **VAR_30 = &VAR_29;

   FUNC_8(VAR_26, 0, sizeof VAR_26);

   while (--VAR_18 > 0)
   {
      char *VAR_31 = *++VAR_19;

      if (FUNC_11(VAR_31, "--small") == 0)
      {
         VAR_24 = 1;
         continue;
      }

      if (FUNC_11(VAR_31, "--tRNS") == 0)
      {
         VAR_25 = 1;
         continue;
      }

      if (FUNC_11(VAR_31, "--sRGB") == 0)
      {
         VAR_28 = VAR_8;
         continue;
      }

      if (FUNC_11(VAR_31, "--linear") == 0)
      {
         VAR_28 = VAR_13;
         continue;
      }

      if (FUNC_11(VAR_31, "--1.8") == 0)
      {
         VAR_28 = VAR_14;
         continue;
      }

      if (FUNC_11(VAR_31, "--nofilters") == 0)
      {
         VAR_27 = VAR_10;
         continue;
      }

      if (FUNC_13(VAR_31, "--color=", 8) == 0)
      {
          FUNC_9(VAR_31+8, VAR_26);
          continue;
      }

      if (VAR_18 >= 3 && FUNC_11(VAR_31, "--insert") == 0)
      {
         png_const_charp VAR_32 = *++VAR_19;
         png_charp VAR_33 = *++VAR_19;
         chunk_insert *VAR_34;

         VAR_18 -= 2;

         VAR_34 = FUNC_4(VAR_32, VAR_33);

         if (VAR_34 != ((void*)0))
         {
            *VAR_30 = VAR_34;
            VAR_30 = &VAR_34->next;
         }

         continue;
      }

      if (VAR_31[0] == '-')
      {
         FUNC_6(VAR_16, "makepng: %s: invalid option\n", VAR_31);
         FUNC_3(1);
      }

      if (FUNC_11(VAR_31, "palette") == 0)
      {
         VAR_22 = VAR_5;
         continue;
      }

      if (FUNC_13(VAR_31, "gray", 4) == 0)
      {
         if (VAR_31[4] == 0)
         {
            VAR_22 = VAR_3;
            continue;
         }

         else if (FUNC_11(VAR_31+4, "a") == 0 ||
            FUNC_11(VAR_31+4, "alpha") == 0 ||
            FUNC_11(VAR_31+4, "-alpha") == 0)
         {
            VAR_22 = VAR_4;
            continue;
         }
      }

      if (FUNC_13(VAR_31, "rgb", 3) == 0)
      {
         if (VAR_31[3] == 0)
         {
            VAR_22 = VAR_6;
            continue;
         }

         else if (FUNC_11(VAR_31+3, "a") == 0 ||
            FUNC_11(VAR_31+3, "alpha") == 0 ||
            FUNC_11(VAR_31+3, "-alpha") == 0)
         {
            VAR_22 = VAR_7;
            continue;
         }
      }

      if (VAR_22 == 8 && FUNC_7(VAR_31[0]))
      {
         VAR_22 = FUNC_2(VAR_31);
         if (VAR_22 < 0 || VAR_22 > 6 || VAR_22 == 1 ||
            VAR_22 == 5)
         {
            FUNC_6(VAR_16, "makepng: %s: not a valid color type\n", VAR_31);
            FUNC_3(1);
         }

         continue;
      }

      if (VAR_23 == 32 && FUNC_7(VAR_31[0]))
      {
         VAR_23 = FUNC_2(VAR_31);
         if (VAR_23 <= 0 || VAR_23 > 16 ||
            (VAR_23 & -VAR_23) != VAR_23)
         {
            FUNC_6(VAR_16, "makepng: %s: not a valid bit depth\n", VAR_31);
            FUNC_3(1);
         }

         continue;
      }

      if (VAR_18 == 1)
      {
         VAR_20 = FUNC_5(VAR_31, "wb");
         if (VAR_20 == ((void*)0))
         {
            FUNC_6(VAR_16, "%s: %s: could not open\n", VAR_31, FUNC_12(VAR_15));
            FUNC_3(1);
         }

         VAR_21 = VAR_31;
         continue;
      }

      FUNC_6(VAR_16, "makepng: %s: unknown argument\n", VAR_31);
      FUNC_3(1);
   }

   if (VAR_22 == 8 || VAR_23 == 32)
   {
      FUNC_6(VAR_16, "usage: makepng [--small] [--sRGB|--linear|--1.8] "
         "[--color=...] color-type bit-depth [file-name]\n"
         "  Make a test PNG file, by default writes to stdout.\n"
         "  Other options are available, UTSL.\n");
      FUNC_3(1);
   }


   {
      const unsigned int VAR_35 = (VAR_22 == VAR_5 ? 255U :
         (1U<<VAR_23)-1);
      unsigned int VAR_36;

      for (VAR_36=1; VAR_36<=VAR_26[0]; ++VAR_36)
         if (VAR_26[VAR_36] > VAR_35)
         {
            FUNC_6(VAR_16, "makepng: --color=...: %u out of range [0..%u]\n",
               VAR_26[VAR_36], VAR_35);
            FUNC_3(1);
         }
   }




   if (VAR_24 && VAR_26[0] != 0)
   {
      FUNC_6(VAR_16, "makepng: --color --small: only one at a time!\n");
      FUNC_3(1);
   }




   if (VAR_27 == VAR_0 && !VAR_24 )
   {
      if ((VAR_22 & VAR_2) != 0 || VAR_23 < 8)
         VAR_27 = VAR_10;

      else if (VAR_22 & VAR_1)
      {
         if (VAR_23 == 8)
            VAR_27 &= ~(VAR_10 | VAR_9);

         else
            VAR_27 = VAR_12 | VAR_11;
      }

      else
         VAR_27 &= ~VAR_10;
   }


   {
      static png_const_charp VAR_37[] =
      {
         129,
         ((void*)0)
      };
      static png_const_charp VAR_38[] =
      {
         128,
         ((void*)0)
      };

      chunk_insert *VAR_39;

      VAR_39 = FUNC_1("Copyright", VAR_37);
      if (VAR_39 != ((void*)0))
      {
         *VAR_30 = VAR_39;
         VAR_30 = &VAR_39->next;
      }

      VAR_39 = FUNC_0("Licensing", "en", ((void*)0), VAR_38);
      if (VAR_39 != ((void*)0))
      {
         *VAR_30 = VAR_39;
         VAR_30 = &VAR_39->next;
      }
   }

   {
      int VAR_40 = FUNC_14(&VAR_21, VAR_20, VAR_22, VAR_23, VAR_28,
         VAR_29, VAR_27, VAR_26, VAR_24, VAR_25);

      if (VAR_40 != 0 && VAR_21 != ((void*)0))
         FUNC_10(VAR_21);

      return VAR_40;
   }
}
