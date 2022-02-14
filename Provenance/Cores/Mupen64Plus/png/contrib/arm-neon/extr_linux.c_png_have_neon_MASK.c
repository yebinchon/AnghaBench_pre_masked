
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_structp ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(png_structp VAR_1)
{
   FILE *VAR_2 = FUNC_2("/proc/cpuinfo", "rb");

   if (VAR_2 != ((void*)0))
   {



      static const char VAR_3[] = { 70, 69, 65, 84, 85, 82, 69, 83 };
      static const char VAR_4[] = { 78, 69, 79, 78 };

      enum
      {
         StartLine, Feature, Colon, StartTag, Neon, HaveNeon, SkipTag, SkipLine
      } VAR_5;
      int VAR_6;

      for (VAR_5=StartLine, VAR_6=0;;)
      {
         int VAR_7 = FUNC_1(VAR_2);

         if (VAR_7 == VAR_0)
         {



            FUNC_0(VAR_2);
            return 0;
         }

         switch (VAR_5)
         {
            case StartLine:

               if (VAR_7 <= 32)
                  break;

               VAR_6=0;
               VAR_5 = Feature;


            case Feature:

               if ((VAR_7 & ~0x20) == VAR_3[VAR_6])
               {
                  if (++VAR_6 == (sizeof VAR_3))
                     VAR_5 = Colon;
                  break;
               }


               VAR_5 = SkipLine;


            case SkipLine:
            skipLine:

               if (VAR_7 != 10 && VAR_7 != 13)
                  break;

               VAR_5 = StartLine;
               break;

            case Colon:

               if (VAR_7 == 32 || VAR_7 == 9)
                  break;

               if (VAR_7 == 58)
               {
                  VAR_5 = StartTag;
                  break;
               }




               VAR_5 = SkipLine;
               goto skipLine;

            case StartTag:

               if (VAR_7 == 32 || VAR_7 == 9)
                  break;

               VAR_5 = Neon;
               VAR_6 = 0;


            case Neon:

               if ((VAR_7 & ~0x20) == VAR_4[VAR_6])
               {
                  if (++VAR_6 == (sizeof VAR_4))
                     VAR_5 = HaveNeon;
                  break;
               }

               VAR_5 = SkipTag;


            case SkipTag:

               if (VAR_7 == 10 || VAR_7 == 13)
                  VAR_5 = StartLine;

               else if (VAR_7 == 32 || VAR_7 == 9)
                  VAR_5 = StartTag;
               break;

            case HaveNeon:



               if (VAR_7 == 10 || VAR_7 == 13 || VAR_7 == 32 || VAR_7 == 9)
               {
                  FUNC_0(VAR_2);
                  return 1;
               }

               VAR_5 = SkipTag;
               break;

            default:
               FUNC_3(VAR_1, "png_have_neon: internal error (bug)");
         }
      }
   }






   return 0;
}
