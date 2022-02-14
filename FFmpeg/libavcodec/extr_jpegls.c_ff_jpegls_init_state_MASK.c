
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int twonear; int near; int range; int maxval; int qbpp; int bpp; int limit; int* A; int* N; } ;
typedef TYPE_1__ JLSState ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;

void FUNC_2(JLSState *VAR_0)
{
    int VAR_1;

    VAR_0->twonear = VAR_0->near * 2 + 1;
    VAR_0->range = (VAR_0->maxval + VAR_0->twonear - 1) / VAR_0->twonear + 1;


    for (VAR_0->qbpp = 0; (1 << VAR_0->qbpp) < VAR_0->range; VAR_0->qbpp++)
        ;

    VAR_0->bpp = FUNC_0(FUNC_1(VAR_0->maxval) + 1, 2);
    VAR_0->limit = 2*(VAR_0->bpp + FUNC_0(VAR_0->bpp, 8)) - VAR_0->qbpp;

    for (VAR_1 = 0; VAR_1 < 367; VAR_1++) {
        VAR_0->A[VAR_1] = FUNC_0((VAR_0->range + 32) >> 6, 2);
        VAR_0->N[VAR_1] = 1;
    }
}
