
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_15__ ;


struct TYPE_19__ {int color_range; int color_matrix; int color_transfer; int color_prim; } ;
struct TYPE_21__ {int mode; int parity; int tff; int out_list; TYPE_15__** ref; TYPE_3__ output; int unfiltered; int frames; } ;
typedef TYPE_5__ hb_filter_private_t ;
struct TYPE_20__ {scalar_t__ combed; int flags; long long stop; long long start; scalar_t__ new_chap; } ;
struct TYPE_18__ {int color_range; int color_matrix; int color_transfer; int color_prim; } ;
struct TYPE_22__ {TYPE_4__ s; TYPE_2__ f; } ;
typedef TYPE_6__ hb_buffer_t ;
struct TYPE_17__ {int height; int width; int fmt; } ;
struct TYPE_16__ {TYPE_4__ s; TYPE_1__ f; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_6__* FUNC_0 (TYPE_15__*) ;
 int FUNC_1 (int *,TYPE_6__*) ;
 TYPE_6__* FUNC_2 (int *) ;
 TYPE_6__* FUNC_3 (int *) ;
 TYPE_6__* FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_5__*,TYPE_6__*,int,int) ;

__attribute__((used)) static void FUNC_6( hb_filter_private_t * VAR_4 )
{
    if ((VAR_4->mode & VAR_2) &&
        VAR_4->ref[1]->s.combed == VAR_0)
    {

        hb_buffer_t * VAR_5 = FUNC_0(VAR_4->ref[1]);
        FUNC_1(&VAR_4->out_list, VAR_5);
        VAR_4->frames++;
        VAR_4->unfiltered++;
    }
    else
    {

        int VAR_6;
        if (VAR_4->parity < 0)
        {
            VAR_6 = !!(VAR_4->ref[1]->s.flags & VAR_3);
        }
        else
        {
            VAR_6 = (VAR_4->parity & 1) ^ 1;
        }


        int VAR_7, VAR_8 = 1;
        if (VAR_4->mode & VAR_1)
        {
            VAR_8 = 2;
        }




        for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
        {
            hb_buffer_t * VAR_9;
            int VAR_10 = VAR_7 ^ VAR_6 ^ 1;


            VAR_4->tff = !VAR_10;

            VAR_9 = FUNC_4(VAR_4->ref[1]->f.fmt,
                                       VAR_4->ref[1]->f.width,
                                       VAR_4->ref[1]->f.height);
            VAR_9->f.color_prim = VAR_4->output.color_prim;
            VAR_9->f.color_transfer = VAR_4->output.color_transfer;
            VAR_9->f.color_matrix = VAR_4->output.color_matrix;
            VAR_9->f.color_range = VAR_4->output.color_range ;
            FUNC_5(VAR_4, VAR_9, VAR_10, VAR_6);


            VAR_9->s = VAR_4->ref[1]->s;

            FUNC_1(&VAR_4->out_list, VAR_9);
        }



        if (VAR_4->mode & VAR_1)
        {
            hb_buffer_t *VAR_11 = FUNC_2(&VAR_4->out_list);
            hb_buffer_t *VAR_12 = FUNC_3(&VAR_4->out_list);
            VAR_11->s.stop -= (VAR_11->s.stop - VAR_11->s.start) / 2LL;
            VAR_12->s.start = VAR_11->s.stop;
            VAR_12->s.new_chap = 0;
        }
    }
}
