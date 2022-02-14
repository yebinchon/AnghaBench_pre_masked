
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* png_const_textp ;
typedef int png_const_structp ;
typedef char* png_const_charp ;
struct TYPE_3__ {scalar_t__ compression; char* key; char* text; scalar_t__ text_length; scalar_t__ itxt_length; char* lang; char* lang_key; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 size_t FUNC_1 (char*,int,size_t,char*) ;
 int FUNC_2 (char*,char*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(png_const_structp VAR_1, png_const_textp VAR_2,
   png_const_charp VAR_3, png_const_charp VAR_4)
{
   char VAR_5[1024];
   size_t VAR_6 = FUNC_1(VAR_5, sizeof VAR_5, 0, "text: ");
   size_t VAR_7;

   VAR_6 = FUNC_1(VAR_5, sizeof VAR_5, VAR_6, VAR_3);
   VAR_6 = FUNC_1(VAR_5, sizeof VAR_5, VAR_6, ": ");
   VAR_7 = VAR_6;

   if (VAR_2->compression != VAR_0)
   {
      char VAR_8[64];

      FUNC_2(VAR_8, "compression [%d->%d], ", VAR_0,
         VAR_2->compression);
      VAR_6 = FUNC_1(VAR_5, sizeof VAR_5, VAR_6, VAR_8);
   }

   if (VAR_2->key == ((void*)0) || FUNC_3(VAR_2->key, VAR_3) != 0)
   {
      VAR_6 = FUNC_1(VAR_5, sizeof VAR_5, VAR_6, "keyword \"");
      if (VAR_2->key != ((void*)0))
      {
         VAR_6 = FUNC_1(VAR_5, sizeof VAR_5, VAR_6, VAR_2->key);
         VAR_6 = FUNC_1(VAR_5, sizeof VAR_5, VAR_6, "\", ");
      }

      else
         VAR_6 = FUNC_1(VAR_5, sizeof VAR_5, VAR_6, "null, ");
   }

   if (VAR_2->text == ((void*)0))
      VAR_6 = FUNC_1(VAR_5, sizeof VAR_5, VAR_6, "text lost, ");

   else
   {
      if (VAR_2->text_length != FUNC_4(VAR_4))
      {
         char VAR_9[64];
         FUNC_2(VAR_9, "text length changed[%lu->%lu], ",
            (unsigned long)FUNC_4(VAR_4), (unsigned long)VAR_2->text_length);
         VAR_6 = FUNC_1(VAR_5, sizeof VAR_5, VAR_6, VAR_9);
      }

      if (FUNC_3(VAR_2->text, VAR_4) != 0)
      {
         VAR_6 = FUNC_1(VAR_5, sizeof VAR_5, VAR_6, "text becomes \"");
         VAR_6 = FUNC_1(VAR_5, sizeof VAR_5, VAR_6, VAR_2->text);
         VAR_6 = FUNC_1(VAR_5, sizeof VAR_5, VAR_6, "\" (was \"");
         VAR_6 = FUNC_1(VAR_5, sizeof VAR_5, VAR_6, VAR_4);
         VAR_6 = FUNC_1(VAR_5, sizeof VAR_5, VAR_6, "\"), ");
      }
   }

   if (VAR_2->itxt_length != 0)
      VAR_6 = FUNC_1(VAR_5, sizeof VAR_5, VAR_6, "iTXt length set, ");

   if (VAR_2->lang != ((void*)0))
   {
      VAR_6 = FUNC_1(VAR_5, sizeof VAR_5, VAR_6, "iTXt language \"");
      VAR_6 = FUNC_1(VAR_5, sizeof VAR_5, VAR_6, VAR_2->lang);
      VAR_6 = FUNC_1(VAR_5, sizeof VAR_5, VAR_6, "\", ");
   }

   if (VAR_2->lang_key != ((void*)0))
   {
      VAR_6 = FUNC_1(VAR_5, sizeof VAR_5, VAR_6, "iTXt keyword \"");
      VAR_6 = FUNC_1(VAR_5, sizeof VAR_5, VAR_6, VAR_2->lang_key);
      VAR_6 = FUNC_1(VAR_5, sizeof VAR_5, VAR_6, "\", ");
   }

   if (VAR_6 > VAR_7)
   {
      VAR_5[VAR_6-2] = '\0';
      FUNC_0(VAR_1, VAR_5);
   }
}
