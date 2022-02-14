
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int depth; int table_size; int freq; double* table; scalar_t__ index; } ;
typedef TYPE_1__ TremoloContext ;
struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {int sample_rate; TYPE_3__* dst; } ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 double* FUNC_1 (int,int) ;
 int FUNC_2 (double const) ;
 int FUNC_3 (double,double) ;
 double FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(AVFilterLink *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_2->dst;
    TremoloContext *VAR_4 = VAR_3->priv;
    const double VAR_5 = 1. - VAR_4->depth / 2.;
    int VAR_6;

    VAR_4->table_size = VAR_2->sample_rate / VAR_4->freq;
    VAR_4->table = FUNC_1(VAR_4->table_size, sizeof(*VAR_4->table));
    if (!VAR_4->table)
        return FUNC_0(VAR_0);

    for (VAR_6 = 0; VAR_6 < VAR_4->table_size; VAR_6++) {
        double VAR_7 = VAR_4->freq * VAR_6 / VAR_2->sample_rate;
        VAR_7 = FUNC_4(2 * VAR_1 * FUNC_3(VAR_7 + 0.25, 1.0));
        VAR_4->table[VAR_6] = VAR_7 * (1 - FUNC_2(VAR_5)) + VAR_5;
    }

    VAR_4->index = 0;

    return 0;
}
