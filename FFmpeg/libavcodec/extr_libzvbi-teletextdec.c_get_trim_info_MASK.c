
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int columns; } ;
typedef TYPE_1__ vbi_page ;
struct TYPE_7__ {int unicode; } ;
typedef TYPE_2__ vbi_char ;
typedef int uint16_t ;


 scalar_t__ FUNC_0 (TYPE_2__) ;

__attribute__((used)) static void FUNC_1(vbi_page *VAR_0, vbi_char *VAR_1, int *VAR_2, int *VAR_3, int *VAR_4)
{
    int VAR_5, VAR_6 = 0;
    int VAR_7 = 0;

    *VAR_2 = 0;

    for (VAR_5 = 0; VAR_5 < VAR_0->columns; VAR_5++) {
        uint16_t VAR_8 = FUNC_0(VAR_1[VAR_5]) ? 32 : VAR_1[VAR_5].unicode;

        if (VAR_8 == 32 && !VAR_7)
            (*VAR_2)++;
        else if (VAR_8 != 32)
            VAR_7 = 1, VAR_6 = VAR_5 - (*VAR_2) + 1;
    }

    *VAR_4 = VAR_6;
    *VAR_3 = VAR_6 > 0 ? VAR_0->columns - *VAR_2 - VAR_6 : VAR_0->columns;
}
