
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ndeclevels; int type; int** linelen; int** mod; void* i_linebuf; void* f_linebuf; } ;
typedef TYPE_1__ DWTContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;



 void* FUNC_2 (int,int) ;

int FUNC_3(DWTContext *VAR_1, int VAR_2[2][2],
                         int VAR_3, int VAR_4)
{
    int VAR_5, VAR_6, VAR_7 = VAR_3, VAR_8,
        VAR_9[2][2];

    VAR_1->ndeclevels = VAR_3;
    VAR_1->type = VAR_4;

    for (VAR_5 = 0; VAR_5 < 2; VAR_5++)
        for (VAR_6 = 0; VAR_6 < 2; VAR_6++)
            VAR_9[VAR_5][VAR_6] = VAR_2[VAR_5][VAR_6];

    VAR_8 = FUNC_1(VAR_9[0][1] - VAR_9[0][0],
                   VAR_9[1][1] - VAR_9[1][0]);
    while (--VAR_7 >= 0)
        for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {
            VAR_1->linelen[VAR_7][VAR_5] = VAR_9[VAR_5][1] - VAR_9[VAR_5][0];
            VAR_1->mod[VAR_7][VAR_5] = VAR_9[VAR_5][0] & 1;
            for (VAR_6 = 0; VAR_6 < 2; VAR_6++)
                VAR_9[VAR_5][VAR_6] = (VAR_9[VAR_5][VAR_6] + 1) >> 1;
        }
    switch (VAR_4) {
    case 129:
        VAR_1->f_linebuf = FUNC_2((VAR_8 + 12), sizeof(*VAR_1->f_linebuf));
        if (!VAR_1->f_linebuf)
            return FUNC_0(VAR_0);
        break;
     case 128:
        VAR_1->i_linebuf = FUNC_2((VAR_8 + 12), sizeof(*VAR_1->i_linebuf));
        if (!VAR_1->i_linebuf)
            return FUNC_0(VAR_0);
        break;
    case 130:
        VAR_1->i_linebuf = FUNC_2((VAR_8 + 6), sizeof(*VAR_1->i_linebuf));
        if (!VAR_1->i_linebuf)
            return FUNC_0(VAR_0);
        break;
    default:
        return -1;
    }
    return 0;
}
