
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int nv3_sim_state ;
struct TYPE_7__ {int graphics_lwm; } ;
typedef TYPE_1__ nv3_fifo_info ;
struct TYPE_8__ {int priority; int gburst_size; int vburst_size; } ;
typedef TYPE_2__ nv3_arb_info ;


 int FUNC_0 (TYPE_1__*,int *,TYPE_2__*) ;

__attribute__((used)) static char FUNC_1(nv3_fifo_info *VAR_0, nv3_sim_state * VAR_1, nv3_arb_info *VAR_2)
{
    int VAR_3, VAR_4,VAR_5, VAR_6;

    VAR_3 = 0;
    for (VAR_6=0; VAR_6 < 2; VAR_6++)
    {
        for (VAR_4=128 ; VAR_4 > 32; VAR_4= VAR_4>> 1)
        {
            for (VAR_5=128; VAR_5 >=32; VAR_5 = VAR_5>> 1)
            {
                VAR_2->priority = VAR_6;
                VAR_2->gburst_size = VAR_4;
                VAR_2->vburst_size = VAR_5;
                VAR_3 = FUNC_0(VAR_0, VAR_1,VAR_2);
                if (VAR_3 && (VAR_4==128))
                    if ((VAR_0->graphics_lwm + VAR_4) > 256)
                        VAR_3 = 0;
                if (VAR_3)
                    goto Done;
            }
        }
    }

 Done:
    return VAR_3;
}
