
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s_write {TYPE_1__* data608; } ;
struct eia608_screen {int dirty; scalar_t__* row_used; scalar_t__** characters; scalar_t__** fonts; scalar_t__** colors; } ;
struct TYPE_2__ {int mode; int rollup_base_row; } ;


 int VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;



 struct eia608_screen* FUNC_0 (struct s_write*) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_2 (scalar_t__*,char,int) ;

__attribute__((used)) static void FUNC_3(struct s_write *VAR_3, int VAR_4)
{
    struct eia608_screen *VAR_5;
    int VAR_6, VAR_7, VAR_8, VAR_9;

    switch (VAR_3->data608->mode)
    {
        case 130:
            VAR_9 = 2;
            break;
        case 129:
            VAR_9 = 3;
            break;
        case 128:
            VAR_9 = 4;
            break;
        default:

            return;
    }

    if (VAR_4 == VAR_3->data608->rollup_base_row)
    {

        return;
    }

    VAR_5 = FUNC_0(VAR_3);
    if (VAR_4 < VAR_3->data608->rollup_base_row)
    {
        VAR_7 = VAR_3->data608->rollup_base_row - VAR_9 + 1;
        VAR_8 = VAR_4 - VAR_9 + 1;
        for (VAR_6 = 0; VAR_6 < VAR_9; VAR_6++)
        {
            FUNC_1(VAR_5->characters[VAR_8], VAR_5->characters[VAR_7], VAR_0+1);
            FUNC_1(VAR_5->colors[VAR_8], VAR_5->colors[VAR_7], VAR_0+1);
            FUNC_1(VAR_5->fonts[VAR_8], VAR_5->fonts[VAR_7], VAR_0+1);
            VAR_5->row_used[VAR_8] = VAR_5->row_used[VAR_7];

            FUNC_2(VAR_5->characters[VAR_7], ' ', VAR_0);
            FUNC_2(VAR_5->colors[VAR_7], VAR_1, VAR_0);
            FUNC_2(VAR_5->fonts[VAR_7], VAR_2, VAR_0);
            VAR_5->characters[VAR_7][VAR_0] = 0;
            VAR_5->row_used[VAR_7] = 0;

            VAR_7++;
            VAR_8++;
        }
    }
    else
    {
        VAR_7 = VAR_3->data608->rollup_base_row;
        VAR_8 = VAR_4;
        for (VAR_6 = 0; VAR_6 < VAR_9; VAR_6++)
        {
            FUNC_1(VAR_5->characters[VAR_8], VAR_5->characters[VAR_7], VAR_0+1);
            FUNC_1(VAR_5->colors[VAR_8], VAR_5->colors[VAR_7], VAR_0+1);
            FUNC_1(VAR_5->fonts[VAR_8], VAR_5->fonts[VAR_7], VAR_0+1);
            VAR_5->row_used[VAR_8] = VAR_5->row_used[VAR_7];

            FUNC_2(VAR_5->characters[VAR_7], ' ', VAR_0);
            FUNC_2(VAR_5->colors[VAR_7], VAR_1, VAR_0);
            FUNC_2(VAR_5->fonts[VAR_7], VAR_2, VAR_0);
            VAR_5->characters[VAR_7][VAR_0] = 0;
            VAR_5->row_used[VAR_7] = 0;

            VAR_7--;
            VAR_8--;
        }
    }
    VAR_5->dirty = 1;
}
