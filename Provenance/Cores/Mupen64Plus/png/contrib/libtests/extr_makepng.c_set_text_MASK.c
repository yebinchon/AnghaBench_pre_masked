
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* png_textp ;
typedef int png_structp ;
typedef int png_size_t ;
typedef int png_infop ;
typedef int* png_charp ;
typedef int * png_bytep ;
struct TYPE_4__ {int* text; int text_length; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int*,int **) ;
 int FUNC_2 (int*,int **) ;
 int FUNC_3 (int ,int ,TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_4(png_structp VAR_0, png_infop VAR_1, png_textp VAR_2,
   png_charp VAR_3)
{
   switch (VAR_3[0])
   {
      case '<':
         {
            png_bytep VAR_4 = ((void*)0);

            VAR_2->text_length = FUNC_2(VAR_3+1, &VAR_4);
            VAR_2->text = (png_charp)VAR_4;
         }
         break;

      case '0': case '1': case '2': case '3': case '4':
      case '5': case '6': case '7': case '8': case '9':
         {
            png_bytep VAR_5 = ((void*)0);
            png_size_t VAR_6 = FUNC_1(VAR_3, &VAR_5);

            if (VAR_6 > 0)
            {
               VAR_2->text_length = VAR_6;
               VAR_2->text = (png_charp)VAR_5;
               break;
            }
         }

      default:
         VAR_2->text = VAR_3;
         break;
   }

   FUNC_3(VAR_0, VAR_1, VAR_2, 1);

   if (VAR_2->text != VAR_3)
      FUNC_0(VAR_2->text);
}
