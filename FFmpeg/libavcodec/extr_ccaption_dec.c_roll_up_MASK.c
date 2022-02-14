
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct Screen {scalar_t__ row_used; int * charsets; int * fonts; int * colors; int * characters; } ;
struct TYPE_4__ {scalar_t__ mode; int cursor_row; int rollup; } ;
typedef TYPE_1__ CCaptionSubContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int const) ;
 int FUNC_1 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__,int const) ;
 int FUNC_3 (scalar_t__,int) ;
 struct Screen* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(CCaptionSubContext *VAR_3)
{
    struct Screen *VAR_4;
    int VAR_5, VAR_6;

    if (VAR_3->mode == VAR_0)
        return;

    VAR_4 = FUNC_4(VAR_3);




    VAR_6 = FUNC_1(VAR_3->cursor_row + 1, VAR_3->rollup);

    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
        if (VAR_5 > VAR_3->cursor_row - VAR_6 && VAR_5 <= VAR_3->cursor_row)
            continue;
        FUNC_3(VAR_4->row_used, VAR_5);
    }

    for (VAR_5 = 0; VAR_5 < VAR_6 && VAR_4->row_used; VAR_5++) {
        const int VAR_7 = VAR_3->cursor_row - VAR_6 + VAR_5 + 1;

        FUNC_5(VAR_4->characters[VAR_7], VAR_4->characters[VAR_7+1], VAR_1);
        FUNC_5(VAR_4->colors[VAR_7], VAR_4->colors[VAR_7+1], VAR_1);
        FUNC_5(VAR_4->fonts[VAR_7], VAR_4->fonts[VAR_7+1], VAR_1);
        FUNC_5(VAR_4->charsets[VAR_7], VAR_4->charsets[VAR_7+1], VAR_1);
        if (FUNC_0(VAR_4->row_used, VAR_7 + 1))
            FUNC_2(VAR_4->row_used, VAR_7);
    }

    FUNC_3(VAR_4->row_used, VAR_3->cursor_row);
}
