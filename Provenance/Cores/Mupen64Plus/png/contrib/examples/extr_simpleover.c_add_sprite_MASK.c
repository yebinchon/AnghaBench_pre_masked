
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sprite {int width; int height; char* name; int file; } ;
typedef TYPE_1__* png_imagep ;
struct TYPE_7__ {char const* message; int format; int version; } ;
typedef TYPE_2__ png_image ;
typedef scalar_t__ png_bytep ;
struct TYPE_6__ {unsigned int width; unsigned int height; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*,...) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int *,scalar_t__,int,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char const*,char*,int*,int*,char*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_5(png_imagep VAR_3, png_bytep VAR_4, struct sprite *VAR_5,
   int *VAR_6, const char ***VAR_7)
{





   while (*VAR_6 > 0)
   {
      char VAR_8;
      int VAR_9, VAR_10;

      if ((*VAR_7)[0][0] == '-' && (*VAR_7)[0][1] == '-')
         return 1;

      if (FUNC_4((*VAR_7)[0], "%d,%d%c", &VAR_9, &VAR_10, &VAR_8) == 2)
      {



         if (VAR_9 < 0 || VAR_10 < 0 ||
             (unsigned) VAR_9 >= VAR_3->width ||
             (unsigned) VAR_10 >= VAR_3->height ||
             VAR_5->width > VAR_3->width-VAR_9 ||
             VAR_5->height > VAR_3->height-VAR_10)
         {
            FUNC_0(VAR_2, "simpleover: sprite %s @ (%d,%d) outside image\n",
               VAR_5->name, VAR_9, VAR_10);

            return 0;
         }

         else
         {



            png_image VAR_11;

            VAR_11.version = VAR_1;
            FUNC_3(VAR_5->file);

            if (FUNC_1(&VAR_11, VAR_5->file))
            {
               VAR_11.format = VAR_0;

               if (FUNC_2(&VAR_11, ((void*)0) ,
                  VAR_4 + (VAR_10*VAR_3->width + VAR_9)*3 ,
                  VAR_3->width*3 ,
                  ((void*)0) ))
               {
                  ++*VAR_7, --*VAR_6;
                  continue;
               }
            }


            FUNC_0(VAR_2, "simpleover: add sprite %s: %s\n", VAR_5->name,
                VAR_11.message);
            return 0;
         }
      }

      else
      {
         FUNC_0(VAR_2, "simpleover: --add='%s': invalid position %s\n",
               VAR_5->name, (*VAR_7)[0]);
         return 0;
      }
   }

   return 1;
}
