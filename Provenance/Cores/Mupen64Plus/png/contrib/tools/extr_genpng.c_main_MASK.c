
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct arg {int dummy; } ;
typedef scalar_t__ png_uint_32 ;
typedef int * png_uint_16p ;
struct TYPE_5__ {scalar_t__ width; scalar_t__ height; char* message; scalar_t__ colormap_entries; scalar_t__ flags; int format; int * opaque; int version; } ;
typedef TYPE_1__ png_image ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (struct arg*,char const**) ;
 int FUNC_6 (int *,struct arg*,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int ,int,int *,int ,int *) ;
 void* FUNC_8 (char*,char const*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_9 (char const*,char*) ;

int
FUNC_10(int VAR_5, const char **VAR_6)
{
   int VAR_7 = 0;


   if (VAR_5 > 1 && FUNC_9(VAR_6[1], "--8bit") == 0)
      --VAR_5, ++VAR_6, VAR_7 = 1;

   if (VAR_5 >= 3)
   {
      png_uint_16p VAR_8;
      int VAR_9;
      png_image VAR_10;

      struct arg VAR_11[256];




      FUNC_4(&VAR_10, 0, sizeof VAR_10);
      VAR_10.version = VAR_1;
      VAR_10.opaque = ((void*)0);
      VAR_10.width = FUNC_8("width", VAR_6[1]);
      VAR_10.height = FUNC_8("height", VAR_6[2]);
      VAR_10.format = VAR_0;
      VAR_10.flags = 0;
      VAR_10.colormap_entries = 0;


      for (VAR_9=0; 3+7*(VAR_9+1) <= VAR_5 && VAR_9 < 256;
           ++VAR_9)
         FUNC_5(VAR_11+VAR_9, VAR_6+3+7*VAR_9);

      if (3+7*VAR_9 != VAR_5)
      {
         FUNC_1(VAR_3, "genpng: %s: too many arguments\n", VAR_6[3+7*VAR_9]);
         return 1;
      }


      VAR_8 = FUNC_3(FUNC_0(VAR_10));

      if (VAR_8 != ((void*)0))
      {
         png_uint_32 VAR_12;


         for (VAR_12=0; VAR_12<VAR_10.height; ++VAR_12)
         {
            png_uint_32 VAR_13;


            for (VAR_13=0; VAR_13<VAR_10.width; ++VAR_13)
               FUNC_6(VAR_8 + 4*(VAR_13 + VAR_12*VAR_10.width), VAR_11, VAR_9, VAR_13, VAR_12);
         }


         if (FUNC_7(&VAR_10, VAR_4, VAR_7,
             VAR_8, 0 , ((void*)0) ))
         {
            FUNC_2(VAR_8);
            return 0;
         }

         else
            FUNC_1(VAR_3, "genpng: write stdout: %s\n", VAR_10.message);

         FUNC_2(VAR_8);
      }

      else
         FUNC_1(VAR_3, "genpng: out of memory: %lu bytes\n",
               (unsigned long)FUNC_0(VAR_10));
   }

   else
   {

      FUNC_1(VAR_3, "genpng: usage: genpng [--8bit] width height {shape}\n"
         " Generate a transparent PNG in RGBA (truecolor+alpha) format\n"
         " containing the given shape or shapes.  Shapes are defined:\n"
         "\n"
         "  shape ::= color width shape x1 y1 x2 y2\n"
         "  color ::= black|white|red|green|yellow|blue\n"
         "  color ::= brown|purple|pink|orange|gray|cyan\n"
         "  width ::= filled|<number>\n"
         "  shape ::= circle|square|line\n"
         "  x1,x2 ::= <number>\n"
         "  y1,y2 ::= <number>\n"
         "\n"
         " Numbers are floating point numbers describing points relative to\n"
         " the top left of the output PNG as pixel coordinates.  The 'width'\n"
         " parameter is either the width of the line (in output pixels) used\n"
         " to draw the shape or 'filled' to indicate that the shape should\n"
         " be filled with the color.\n"
         "\n"
         " Colors are interpreted loosely to give access to the eight full\n"
         " intensity RGB values:\n"
         "\n"
         "  black, red, green, blue, yellow, cyan, purple, white,\n"
         "\n"
         " Cyan is full intensity blue+green; RGB(0,1,1), plus the following\n"
         " lower intensity values:\n"
         "\n"
         "  brown:  red+orange:  RGB(0.5, 0.125, 0) (dark red+orange)\n"
         "  pink:   red+white:   RGB(1.0, 0.5,   0.5)\n"
         "  orange: red+yellow:  RGB(1.0, 0.5,   0)\n"
         "  gray:   black+white: RGB(0.5, 0.5,   0.5)\n"
         "\n"
         " The RGB values are selected to make detection of aliasing errors\n"
         " easy. The names are selected to make the description of errors\n"
         " easy.\n"
         "\n"
         " The PNG is written to stdout, if --8bit is given a 32bpp RGBA sRGB\n"
         " file is produced, otherwise a 64bpp RGBA linear encoded file is\n"
         " written.\n");
   }

   return 1;
}
