
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef TYPE_1__* png_const_structrp ;
typedef char* png_const_charp ;
typedef char* png_charp ;
struct TYPE_3__ {int chunk_name; } ;


 char VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 char* VAR_3 ;

__attribute__((used)) static void
FUNC_1(png_const_structrp VAR_4, png_charp VAR_5, png_const_charp
    VAR_6)
{
   png_uint_32 VAR_7 = VAR_4->chunk_name;
   int VAR_8 = 0, VAR_9 = 24;

   while (VAR_9 >= 0)
   {
      int VAR_10 = (int)(VAR_7 >> VAR_9) & 0xff;

      VAR_9 -= 8;
      if (FUNC_0(VAR_10) != 0)
      {
         VAR_5[VAR_8++] = VAR_0;
         VAR_5[VAR_8++] = VAR_3[(VAR_10 & 0xf0) >> 4];
         VAR_5[VAR_8++] = VAR_3[VAR_10 & 0x0f];
         VAR_5[VAR_8++] = VAR_1;
      }

      else
      {
         VAR_5[VAR_8++] = (char)VAR_10;
      }
   }

   if (VAR_6 == ((void*)0))
      VAR_5[VAR_8] = '\0';

   else
   {
      int VAR_11 = 0;

      VAR_5[VAR_8++] = ':';
      VAR_5[VAR_8++] = ' ';

      while (VAR_11 < VAR_2-1 && VAR_6[VAR_11] != '\0')
         VAR_5[VAR_8++] = VAR_6[VAR_11++];


      VAR_5[VAR_8] = '\0';
   }
}
