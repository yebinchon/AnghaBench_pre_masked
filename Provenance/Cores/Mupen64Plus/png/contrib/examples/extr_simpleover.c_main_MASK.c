
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {char* message; int format; int * opaque; int version; } ;
typedef TYPE_1__ png_image ;
struct TYPE_12__ {int member_1; int member_2; int member_0; } ;
typedef TYPE_2__ png_color ;
typedef int * png_bytep ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_1__*,char const*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,TYPE_2__*,int *,int ,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,char const*,int ,int *,int ,int *) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int ,int ,int *,int ,int *) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int *,int,char const**) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_10(int VAR_4, const char **VAR_5)
{
   int VAR_6 = 1;

   if (VAR_4 >= 2)
   {
      int VAR_7 = 2;
      const char *VAR_8 = ((void*)0);
      png_image VAR_9;

      if (VAR_4 > 2 && VAR_5[2][0] != '-' )
      {
         VAR_8 = VAR_5[2];
         VAR_7 = 3;
      }

      VAR_9.version = VAR_1;
      VAR_9.opaque = ((void*)0);

      if (FUNC_4(&VAR_9, VAR_5[1]))
      {
         png_bytep VAR_10;

         VAR_9.format = VAR_0;

         VAR_10 = FUNC_3(FUNC_0(VAR_9));

         if (VAR_10 != ((void*)0))
         {
            png_color VAR_11 = {0, 0xff, 0};

            if (FUNC_5(&VAR_9, &VAR_11, VAR_10,
               0 , ((void*)0) ))
            {






               if (FUNC_9(&VAR_9, VAR_10, VAR_4-VAR_7, VAR_5+VAR_7))
               {

                  if ((VAR_8 != ((void*)0) &&
                       FUNC_7(&VAR_9, VAR_8,
                        0 , VAR_10, 0 ,
                        ((void*)0) )) ||
                      (VAR_8 == ((void*)0) &&
                       FUNC_8(&VAR_9, VAR_3,
                        0 , VAR_10, 0 ,
                        ((void*)0) )))
                     VAR_6 = 0;

                  else
                     FUNC_1(VAR_2, "simpleover: write %s: %s\n",
                        VAR_8 == ((void*)0) ? "stdout" : VAR_8, VAR_9.message);
               }


            }

            else
               FUNC_1(VAR_2, "simpleover: read %s: %s\n", VAR_5[1],
                   VAR_9.message);

            FUNC_2(VAR_10);
         }

         else
         {
            FUNC_1(VAR_2, "simpleover: out of memory: %lu bytes\n",
               (unsigned long)FUNC_0(VAR_9));





            FUNC_6(&VAR_9);
         }
      }

      else
      {

         FUNC_1(VAR_2, "simpleover: %s: %s\n", VAR_5[1], VAR_9.message);
      }
   }

   else
   {

      FUNC_1(VAR_2,
         "simpleover: usage: simpleover background.png [output.png]\n"
         "  Output 'background.png' as a 24-bit RGB PNG file in 'output.png'\n"
         "   or, if not given, stdout.  'background.png' will be composited\n"
         "   on fully saturated green.\n"
         "\n"
         "  Optionally, before output, process additional PNG files:\n"
         "\n"
         "   --sprite=width,height,name {[--at=x,y] {sprite.png}}\n"
         "    Produce a transparent sprite of size (width,height) and with\n"
         "     name 'name'.\n"
         "    For each sprite.png composite it using a Porter-Duff 'Over'\n"
         "     operation at offset (x,y) in the sprite (defaulting to (0,0)).\n"
         "     Input PNGs will be truncated to the area of the sprite.\n"
         "\n"
         "   --add='name' {x,y}\n"
         "    Optionally, before output, composite a sprite, 'name', which\n"
         "     must have been previously produced using --sprite, at each\n"
         "     offset (x,y) in the output image.  Each sprite must fit\n"
         "     completely within the output image.\n"
         "\n"
         "  PNG files are processed in the order they occur on the command\n"
         "  line and thus the first PNG processed appears as the bottommost\n"
         "  in the output image.\n");
   }

   return VAR_6;
}
