
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int ntracks; scalar_t__ interleave; int pts; TYPE_1__** track; int m; } ;
typedef TYPE_3__ hb_mux_t ;
struct TYPE_7__ {scalar_t__ out; scalar_t__ in; } ;
struct TYPE_6__ {TYPE_2__ mf; } ;


 int FUNC_0 (TYPE_3__*,int,int ) ;

__attribute__((used)) static void FUNC_1(hb_mux_t * VAR_0)
{
    int VAR_1, VAR_2 = 0;

    while (!VAR_2)
    {
        VAR_2 = 1;
        for (VAR_1 = 0; VAR_1 < VAR_0->ntracks; VAR_1++)
        {
            FUNC_0(VAR_0, VAR_1, VAR_0->m);
            if (VAR_0->track[VAR_1]->mf.out != VAR_0->track[VAR_1]->mf.in)
            {

                VAR_2 = 0;
            }
        }
        VAR_0->pts += VAR_0->interleave;
    }
}
