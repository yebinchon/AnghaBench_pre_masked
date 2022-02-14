
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int mode; int* ref_used; TYPE_3__** ref; int out_list; int frames; int comb_none; int comb_light; int comb_heavy; } ;
typedef TYPE_2__ hb_filter_private_t ;
struct TYPE_11__ {int combed; } ;
struct TYPE_13__ {TYPE_1__ s; } ;
typedef TYPE_3__ hb_buffer_t ;





 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_3__* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,TYPE_3__*) ;

__attribute__((used)) static void FUNC_4( hb_filter_private_t * VAR_1 )
{
    int VAR_2;

    VAR_2 = FUNC_1(VAR_1);
    switch (VAR_2)
    {
        case 130:
            VAR_1->comb_heavy++;
            break;

        case 129:
            VAR_1->comb_light++;
            break;

        case 128:
        default:
            VAR_1->comb_none++;
            break;
    }
    VAR_1->frames++;
    if ((VAR_1->mode & VAR_0) && VAR_2)
    {
        hb_buffer_t * VAR_3;
        VAR_3 = FUNC_2(VAR_1->ref[1]);
        FUNC_0(VAR_1, VAR_3);
        VAR_3->s.combed = VAR_2;
        FUNC_3(&VAR_1->out_list, VAR_3);
    }
    else
    {
        VAR_1->ref_used[1] = 1;
        VAR_1->ref[1]->s.combed = VAR_2;
        FUNC_3(&VAR_1->out_list, VAR_1->ref[1]);
    }
}
