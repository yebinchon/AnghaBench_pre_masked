
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef int png_int_32 ;
struct TYPE_4__ {char* file; char* test; int error_count; } ;
typedef TYPE_1__ display ;
struct TYPE_5__ {int keep; char* name; scalar_t__ unknown; } ;






 int FUNC_0 (char*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char*,char*,char*,char const*,char*,char const*,char const*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(display *VAR_2, int VAR_3, png_uint_32 VAR_4, png_uint_32 VAR_5,
   png_uint_32 VAR_6, const char *VAR_7, int VAR_8)
{
   while (VAR_4)
   {
      png_uint_32 VAR_9 = VAR_4 & -(png_int_32)VAR_4;
      int VAR_10 = FUNC_1(VAR_9);
      int VAR_11 = VAR_0[VAR_10].keep;
      const char *VAR_12;
      const char *VAR_13 = ((void*)0);

      if (VAR_0[VAR_10].unknown)
      {
         if (VAR_11 == 130)
         {
            VAR_12 = "UNKNOWN (default)";
            VAR_11 = VAR_3;
         }

         else
            VAR_12 = "UNKNOWN (specified)";

         if (VAR_9 & VAR_5)
            VAR_13 = "chunk processed";

         else switch (VAR_11)
         {
            case 130:
               if (VAR_9 & VAR_6)
                  VAR_13 = "DEFAULT: unknown chunk saved";
               break;

            case 128:
               if (VAR_9 & VAR_6)
                  VAR_13 = "DISCARD: unknown chunk saved";
               break;

            case 129:
               if (FUNC_0(VAR_0[VAR_10].name))
               {
                  if (!(VAR_9 & VAR_6))
                     VAR_13 = "IF-SAFE: unknown ancillary chunk lost";
               }

               else if (VAR_9 & VAR_6)
                  VAR_13 = "IF-SAFE: unknown critical chunk saved";
               break;

            case 131:
               if (!(VAR_9 & VAR_6))
                  VAR_13 = "SAVE: unknown chunk lost";
               break;

            default:
               VAR_13 = "internal error: bad keep";
               break;
         }
      }

      else
      {
         VAR_12 = "KNOWN";

         if (VAR_9 & VAR_5)
         {



            if (VAR_11 != 130)
               VAR_13 = "!DEFAULT: known chunk processed";
         }

         else switch (VAR_11)
         {
            case 130:
               VAR_13 = "DEFAULT: known chunk not processed";
               break;

            case 128:
               if (VAR_9 & VAR_6)
                  VAR_13 = "DISCARD: known chunk saved";
               break;

            case 129:
               if (FUNC_0(VAR_0[VAR_10].name))
               {
                  if (!(VAR_9 & VAR_6))
                     VAR_13 = "IF-SAFE: known ancillary chunk lost";
               }

               else if (VAR_9 & VAR_6)
                  VAR_13 = "IF-SAFE: known critical chunk saved";
               break;

            case 131:
               if (!(VAR_9 & VAR_6))
                  VAR_13 = "SAVE: known chunk lost";
               break;

            default:
               VAR_13 = "internal error: bad keep (2)";
               break;
         }
      }

      if (VAR_13 != ((void*)0))
      {
         ++(VAR_2->error_count);
         FUNC_2(VAR_1, "%s(%s%s): %s %s %s: %s\n", VAR_2->file, VAR_2->test,
            VAR_8 ? ",callback" : "",
            VAR_12, VAR_0[VAR_10].name, VAR_7, VAR_13);
      }

      VAR_4 &= ~VAR_9;
   }
}
