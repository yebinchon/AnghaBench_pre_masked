
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s_write {TYPE_1__* data608; } ;
struct eia608_screen {unsigned char** characters; int* row_used; int dirty; scalar_t__ empty; int ** fonts; int ** colors; } ;
struct TYPE_2__ {scalar_t__ mode; size_t cursor_row; size_t cursor_column; int font; int color; } ;


 scalar_t__ VAR_0 ;
 struct eia608_screen* FUNC_0 (struct s_write*) ;

__attribute__((used)) static void FUNC_1(const unsigned char VAR_1, struct s_write *VAR_2)
{
    if (VAR_2->data608->mode != VAR_0)
    {
        struct eia608_screen * VAR_3 = FUNC_0(VAR_2);
        if (VAR_3 != ((void*)0))
        {



            VAR_3->characters[VAR_2->data608->cursor_row][VAR_2->data608->cursor_column] = VAR_1;
            VAR_3->colors[VAR_2->data608->cursor_row][VAR_2->data608->cursor_column] = VAR_2->data608->color;
            VAR_3->fonts[VAR_2->data608->cursor_row][VAR_2->data608->cursor_column] = VAR_2->data608->font;
            VAR_3->row_used[VAR_2->data608->cursor_row] = 1;
            VAR_3->empty = 0;
            if (VAR_2->data608->cursor_column < 31)
                VAR_2->data608->cursor_column++;
            VAR_3->dirty = 1;
        }
    }

}
