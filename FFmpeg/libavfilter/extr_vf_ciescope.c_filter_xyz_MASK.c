
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_8__ {TYPE_1__* priv; } ;
struct TYPE_7__ {int* linesize; scalar_t__* data; } ;
struct TYPE_6__ {double* log2lin; } ;
typedef TYPE_1__ CiescopeContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterContext ;



__attribute__((used)) static void FUNC_0(AVFilterContext *VAR_0, AVFrame *VAR_1, double *VAR_2, double *VAR_3, int VAR_4, int VAR_5)
{
    CiescopeContext *VAR_6 = VAR_0->priv;
    const uint16_t* VAR_7 = (uint16_t *)(VAR_1->data[0] + VAR_1->linesize[0] * VAR_5 + VAR_4 * 6);
    double VAR_8 = VAR_6->log2lin[VAR_7[0]];
    double VAR_9 = VAR_6->log2lin[VAR_7[1]];
    double VAR_10 = VAR_6->log2lin[VAR_7[2]];
    double VAR_11 = VAR_8 + VAR_9 + VAR_10;

    if (VAR_11 == 0)
        VAR_11 = 1;
    *VAR_2 = VAR_8 / VAR_11;
    *VAR_3 = VAR_9 / VAR_11;
}
