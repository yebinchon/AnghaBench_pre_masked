
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {int npasses; TYPE_1__* passes; } ;
struct TYPE_4__ {int rate; int disto; } ;
typedef TYPE_2__ Jpeg2000Cblk ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(Jpeg2000Cblk *VAR_1, int64_t VAR_2, int VAR_3)
{
    int VAR_4, VAR_5 = 0;
    for (VAR_4 = 0; VAR_4 < VAR_1->npasses; VAR_4++){
        int VAR_6;
        int64_t VAR_7;

        VAR_6 = VAR_1->passes[VAR_4].rate
           - (VAR_5 ? VAR_1->passes[VAR_5-1].rate:0);
        VAR_7 = VAR_1->passes[VAR_4].disto
           - (VAR_5 ? VAR_1->passes[VAR_5-1].disto:0);

        if (((VAR_7 * VAR_3) >> VAR_0) * VAR_3 >= VAR_6 * VAR_2)
            VAR_5 = VAR_4+1;
    }
    return VAR_5;
}
