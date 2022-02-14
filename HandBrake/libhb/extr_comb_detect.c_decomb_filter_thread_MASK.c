
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mode; int decomb_filter_taskset; } ;
typedef TYPE_1__ hb_filter_private_t ;
struct TYPE_6__ {int segment; int* segment_start; int* segment_height; TYPE_1__* pv; } ;
typedef TYPE_2__ decomb_thread_arg_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static void FUNC_6( void *VAR_1 )
{
    hb_filter_private_t * VAR_2;
    int VAR_3, VAR_4, VAR_5;
    decomb_thread_arg_t *VAR_6 = VAR_1;

    VAR_2 = VAR_6->pv;
    VAR_3 = VAR_6->segment;

    FUNC_2(3, "decomb filter thread started for segment %d", VAR_3);

    while (1)
    {



        FUNC_5( &VAR_2->decomb_filter_taskset, VAR_3 );

        if (FUNC_4( &VAR_2->decomb_filter_taskset, VAR_3 ))
        {



            break;
        }




        int VAR_7;
        for (VAR_7 = 0; VAR_7 < 1; VAR_7++)
        {
            VAR_4 = VAR_6->segment_start[VAR_7];
            VAR_5 = VAR_4 + VAR_6->segment_height[VAR_7];

            if (VAR_2->mode & VAR_0)
            {
                FUNC_1( VAR_2, VAR_4, VAR_5 );
            }
            else
            {
                FUNC_0( VAR_2, VAR_4, VAR_5 );
            }
        }

        FUNC_3( &VAR_2->decomb_filter_taskset, VAR_3 );
    }




    FUNC_3( &VAR_2->decomb_filter_taskset, VAR_3 );
}
