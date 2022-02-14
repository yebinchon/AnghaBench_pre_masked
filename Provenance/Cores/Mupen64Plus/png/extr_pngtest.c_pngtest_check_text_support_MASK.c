
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* png_textp ;
typedef int png_structp ;
struct TYPE_3__ {int compression; } ;






 int FUNC_0 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(png_structp VAR_1, png_textp VAR_2,
    int VAR_3)
{
   while (VAR_3 > 0)
   {
      switch (VAR_2[--VAR_3].compression)
      {
         case 129:
            break;

         case 128:

               ++VAR_0;

               VAR_2[VAR_3].compression = 129;

            break;

         case 131:
         case 130:

               ++VAR_0;
               VAR_2[VAR_3].compression = 129;

            break;

         default:

            FUNC_0(VAR_1, "invalid text chunk compression field");
            break;
      }
   }
}
