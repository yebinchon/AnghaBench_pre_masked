
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef int uint8_t ;
struct TYPE_19__ {int mode; int cpu_count; TYPE_11__** ref; TYPE_5__* yadif_arguments; int yadif_taskset; TYPE_3__** eedi_full; int frames; int unfiltered; int deinterlaced; int blended; } ;
typedef TYPE_6__ hb_filter_private_t ;
struct TYPE_20__ {TYPE_4__* plane; } ;
typedef TYPE_7__ hb_buffer_t ;
struct TYPE_18__ {int parity; int tff; int mode; TYPE_7__* dst; } ;
struct TYPE_17__ {int width; int height; int stride; int * data; } ;
struct TYPE_16__ {TYPE_2__* plane; } ;
struct TYPE_15__ {int stride; int * data; } ;
struct TYPE_14__ {int combed; } ;
struct TYPE_13__ {TYPE_1__ s; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_7__*,TYPE_11__*) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4( hb_filter_private_t * VAR_8,
                          hb_buffer_t * VAR_9,
                          int VAR_10,
                          int VAR_11)
{

    int VAR_12 = VAR_1;
    int VAR_13 = 0;

    if (VAR_8->mode & VAR_6)
    {
        VAR_12 = VAR_8->ref[1]->s.combed;
    }


    if ((VAR_8->mode & VAR_4) && VAR_12 == VAR_2 )
    {
        VAR_13 = VAR_4;
    }
    else if (VAR_12 != VAR_3)
    {
        VAR_13 = VAR_8->mode & ~VAR_6;
    }

    if (VAR_13 == VAR_4)
    {
        VAR_8->blended++;
    }
    else if (VAR_13 != 0)
    {
        VAR_8->deinterlaced++;
    }
    else
    {
        VAR_8->unfiltered++;
    }
    VAR_8->frames++;

    if (VAR_13 & VAR_5)
    {

        FUNC_0( VAR_8 );
    }

    if (VAR_13 != 0)
    {
        if ((VAR_13 & VAR_5 ) && !(VAR_13 & VAR_7))
        {

            int VAR_14;
            for( VAR_14 = 0; VAR_14 < 3; VAR_14++ )
            {
                uint8_t * VAR_15 = VAR_8->eedi_full[VAR_0]->plane[VAR_14].data;
                int VAR_16 = VAR_8->eedi_full[VAR_0]->plane[VAR_14].stride;

                uint8_t * VAR_17 = VAR_9->plane[VAR_14].data;
                int VAR_18 = VAR_9->plane[VAR_14].width;
                int VAR_19 = VAR_9->plane[VAR_14].height;
                int VAR_20 = VAR_9->plane[VAR_14].stride;

                int VAR_21;
                for( VAR_21 = 0; VAR_21 < VAR_19; VAR_21++ )
                {
                    FUNC_2(VAR_17, VAR_15, VAR_18);
                    VAR_17 += VAR_20;
                    VAR_15 += VAR_16;
                }
            }
        }
        else
        {
            int VAR_22;

            for( VAR_22 = 0; VAR_22 < VAR_8->cpu_count; VAR_22++ )
            {



                VAR_8->yadif_arguments[VAR_22].parity = VAR_10;
                VAR_8->yadif_arguments[VAR_22].tff = VAR_11;
                VAR_8->yadif_arguments[VAR_22].dst = VAR_9;
                VAR_8->yadif_arguments[VAR_22].mode = VAR_13;
            }




            FUNC_3( &VAR_8->yadif_taskset );




        }
    }
    else
    {

        VAR_8->yadif_arguments[0].mode = VAR_13;
        FUNC_1(VAR_9, VAR_8->ref[1]);
    }
}
