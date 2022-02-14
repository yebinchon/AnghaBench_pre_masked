
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int compression; int * lang_key; int * lang; scalar_t__ itxt_length; scalar_t__ text_length; int * text; int key; } ;
typedef TYPE_1__ png_text ;
typedef int png_charp ;



__attribute__((used)) static void
FUNC_0(png_text *VAR_0, png_charp VAR_1)
{
   VAR_0->compression = -1;
   VAR_0->key = VAR_1;
   VAR_0->text = ((void*)0);
   VAR_0->text_length = 0;
   VAR_0->itxt_length = 0;
   VAR_0->lang = ((void*)0);
   VAR_0->lang_key = ((void*)0);
}
