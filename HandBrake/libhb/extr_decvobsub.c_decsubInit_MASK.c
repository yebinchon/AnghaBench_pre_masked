
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int palette_set; scalar_t__ pts; int * job; } ;
typedef TYPE_2__ hb_work_private_t ;
struct TYPE_8__ {TYPE_1__* subtitle; TYPE_2__* private_data; } ;
typedef TYPE_3__ hb_work_object_t ;
typedef int hb_job_t ;
struct TYPE_6__ {int palette_set; scalar_t__* palette; } ;


 TYPE_2__* FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;

int FUNC_2( hb_work_object_t * VAR_0, hb_job_t * VAR_1 )
{
    hb_work_private_t * VAR_2;

    VAR_2 = FUNC_0( 1, sizeof( hb_work_private_t ) );
    VAR_0->private_data = VAR_2;

    VAR_2->job = VAR_1;
    VAR_2->pts = 0;


    VAR_2->palette_set = VAR_0->subtitle->palette_set;
    if ( VAR_2->palette_set )
    {

        VAR_2->palette_set = 0;
        int VAR_3;
        for (VAR_3=0; VAR_3<16; VAR_3++)
        {
            if (VAR_0->subtitle->palette[VAR_3])
            {
                VAR_2->palette_set = 1;
                break;
            }
        }
    }
    if (!VAR_2->palette_set) {
        FUNC_1( "decvobsub: input color palette is empty!" );
    }

    return 0;
}
