
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s_write {TYPE_1__* data608; } ;
struct eia608_screen {int dirty; scalar_t__* row_used; scalar_t__** characters; scalar_t__** fonts; scalar_t__** colors; } ;
struct TYPE_2__ {int mode; int cursor_row; } ;


 int VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;



 scalar_t__ VAR_3 ;
 struct eia608_screen* FUNC_0 (struct s_write*) ;
 int FUNC_1 (char*,int,int,...) ;
 int FUNC_2 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_3 (scalar_t__*,char,int) ;

__attribute__((used)) static void FUNC_4(struct s_write *VAR_4)
{
    struct eia608_screen *VAR_5;
    int VAR_6, VAR_7;

    VAR_5 = FUNC_0(VAR_4);
    int VAR_8;
    switch (VAR_4->data608->mode)
    {
        case 130:
            VAR_8 = 2;
            break;
        case 129:
            VAR_8 = 3;
            break;
        case 128:
            VAR_8 = 4;
            break;
        default:
            VAR_8 = 0;
            break;
    }
    int VAR_9 = -1, VAR_10 = -1;

    int VAR_11 = 0;
    for (VAR_6 = 0; VAR_6 < 15; VAR_6++)
    {
        if (VAR_5->row_used[VAR_6])
        {
            VAR_11++;
            if (VAR_9 == -1)
                VAR_9 = VAR_6;
            VAR_10 = VAR_6;
        }
    }

    if (VAR_3)
        FUNC_1 ("\rIn roll-up: %d lines used, first: %d, last: %d\n", VAR_11, VAR_9, VAR_10);

    if (VAR_10==-1)
        return;

    for (VAR_7 = VAR_10 - VAR_8 + 1; VAR_7 < VAR_10; VAR_7++)
    {
        if (VAR_7 >= 0)
        {
            FUNC_2(VAR_5->characters[VAR_7], VAR_5->characters[VAR_7+1], VAR_0+1);
            FUNC_2(VAR_5->colors[VAR_7], VAR_5->colors[VAR_7+1], VAR_0+1);
            FUNC_2(VAR_5->fonts[VAR_7], VAR_5->fonts[VAR_7+1], VAR_0+1);
            VAR_5->row_used[VAR_7] = VAR_5->row_used[VAR_7+1];
        }
    }
    for (VAR_7 = 0; VAR_7 < (1 + VAR_4->data608->cursor_row - VAR_8); VAR_7++)
    {
        FUNC_3(VAR_5->characters[VAR_7], ' ', VAR_0);
        FUNC_3(VAR_5->colors[VAR_7], VAR_1, VAR_0);
        FUNC_3(VAR_5->fonts[VAR_7], VAR_2, VAR_0);
        VAR_5->characters[VAR_7][VAR_0] = 0;
        VAR_5->row_used[VAR_7] = 0;
    }
    FUNC_3(VAR_5->characters[VAR_10], ' ', VAR_0);
    FUNC_3(VAR_5->colors[VAR_10], VAR_1, VAR_0);
    FUNC_3(VAR_5->fonts[VAR_10], VAR_2, VAR_0);

    VAR_5->characters[VAR_10][VAR_0] = 0;
    VAR_5->row_used[VAR_10] = 0;


    VAR_11 = 0;
    for (VAR_6 = 0; VAR_6 < 15; VAR_6++)
        if (VAR_5->row_used[VAR_6])
            VAR_11++;
    if (VAR_11 > VAR_8)
        FUNC_1 ("Bug in roll_up, should have %d lines but I have %d.\n",
            VAR_8, VAR_11);
    VAR_5->dirty = 1;
}
