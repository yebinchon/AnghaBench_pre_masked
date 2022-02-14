
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int level; unsigned int rows; int* block; int* wrapbuf; int cols; } ;
typedef TYPE_1__ InterplayACMContext ;


 int FUNC_0 (int*,int*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_1(InterplayACMContext *VAR_0)
{
    unsigned VAR_1, VAR_2, VAR_3, VAR_4, VAR_5;
    int *VAR_6, *VAR_7, *VAR_8;


    if (VAR_0->level == 0)
        return;


    if (VAR_0->level > 9)
        VAR_4 = 1;
    else
        VAR_4 = (2048 >> VAR_0->level) - 2;





    VAR_3 = VAR_0->rows;
    VAR_7 = VAR_0->block;
    while (1) {
        VAR_6 = VAR_0->wrapbuf;
        VAR_1 = VAR_4;
        if (VAR_1 > VAR_3)
            VAR_1 = VAR_3;

        VAR_2 = VAR_0->cols / 2;
        VAR_1 *= 2;

        FUNC_0(VAR_6, VAR_7, VAR_2, VAR_1);
        VAR_6 += VAR_2 * 2;

        for (VAR_5 = 0, VAR_8 = VAR_7; VAR_5 < VAR_1; VAR_5++) {
            VAR_8[0]++;
            VAR_8 += VAR_2;
        }

        while (VAR_2 > 1) {
            VAR_2 /= 2;
            VAR_1 *= 2;
            FUNC_0(VAR_6, VAR_7, VAR_2, VAR_1);
            VAR_6 += VAR_2 * 2;
        }

        if (VAR_3 <= VAR_4)
            break;

        VAR_3 -= VAR_4;
        VAR_7 += VAR_4 << VAR_0->level;
    }
}
