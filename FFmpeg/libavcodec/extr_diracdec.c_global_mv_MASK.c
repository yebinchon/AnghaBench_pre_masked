
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_8__ {int** mv; } ;
struct TYPE_10__ {TYPE_2__ u; } ;
struct TYPE_9__ {TYPE_1__* globalmc; } ;
struct TYPE_7__ {int zrs_exp; int perspective_exp; int** zrs; int* pan_tilt; int* perspective; } ;
typedef TYPE_3__ DiracContext ;
typedef TYPE_4__ DiracBlock ;



__attribute__((used)) static void FUNC_0(DiracContext *VAR_0, DiracBlock *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5 = VAR_0->globalmc[VAR_4].zrs_exp;
    int VAR_6 = VAR_0->globalmc[VAR_4].perspective_exp;
    int (*VAR_7)[2] = VAR_0->globalmc[VAR_4].zrs;
    int *VAR_8 = VAR_0->globalmc[VAR_4].pan_tilt;
    int *VAR_9 = VAR_0->globalmc[VAR_4].perspective;

    int64_t VAR_10 = (1<<VAR_6) - (VAR_9[0]*(int64_t)VAR_2 + VAR_9[1]*(int64_t)VAR_3);
    int64_t VAR_11 = VAR_10 * (int64_t)((VAR_7[0][0] * (int64_t)VAR_2 + VAR_7[0][1]*(int64_t)VAR_3) + (1LL<<VAR_5) * VAR_8[0]);
    int64_t VAR_12 = VAR_10 * (int64_t)((VAR_7[1][0] * (int64_t)VAR_2 + VAR_7[1][1]*(int64_t)VAR_3) + (1LL<<VAR_5) * VAR_8[1]);

    VAR_1->u.mv[VAR_4][0] = (VAR_11 + (1<<(VAR_5+VAR_6))) >> (VAR_5+VAR_6);
    VAR_1->u.mv[VAR_4][1] = (VAR_12 + (1<<(VAR_5+VAR_6))) >> (VAR_5+VAR_6);
}
