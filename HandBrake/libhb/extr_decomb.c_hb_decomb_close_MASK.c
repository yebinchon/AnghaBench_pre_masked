
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mode; int post_processing; struct TYPE_5__* yadif_arguments; scalar_t__ tmpc; scalar_t__ cxy; scalar_t__ cy2; scalar_t__ cx2; int * eedi_full; int * eedi_half; int * ref; int eedi2_taskset; int yadif_taskset; int frames; int unfiltered; int blended; int deinterlaced; } ;
typedef TYPE_1__ hb_filter_private_t ;
struct TYPE_6__ {TYPE_1__* private_data; } ;
typedef TYPE_2__ hb_filter_object_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,int ,int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5( hb_filter_object_t * VAR_1 )
{
    hb_filter_private_t * VAR_2 = VAR_1->private_data;

    if( !VAR_2 )
    {
        return;
    }

    FUNC_3("decomb: deinterlaced %i | blended %i | unfiltered %i | total %i",
           VAR_2->deinterlaced, VAR_2->blended, VAR_2->unfiltered, VAR_2->frames);

    FUNC_4( &VAR_2->yadif_taskset );

    if( VAR_2->mode & VAR_0 )
    {
        FUNC_4( &VAR_2->eedi2_taskset );
    }


    int VAR_3;
    for (VAR_3 = 0; VAR_3 < 3; VAR_3++)
    {
        FUNC_2(&VAR_2->ref[VAR_3]);
    }

    if( VAR_2->mode & VAR_0 )
    {

        int VAR_4;
        for( VAR_4 = 0; VAR_4 < 4; VAR_4++ )
        {
            FUNC_2(&VAR_2->eedi_half[VAR_4]);
        }


        for( VAR_4 = 0; VAR_4 < 5; VAR_4++ )
        {
            FUNC_2(&VAR_2->eedi_full[VAR_4]);
        }
    }

    if( VAR_2->post_processing > 1 && ( VAR_2->mode & VAR_0 ) )
    {
        if (VAR_2->cx2) FUNC_0(VAR_2->cx2);
        if (VAR_2->cy2) FUNC_0(VAR_2->cy2);
        if (VAR_2->cxy) FUNC_0(VAR_2->cxy);
        if (VAR_2->tmpc) FUNC_0(VAR_2->tmpc);
    }




    FUNC_1( VAR_2->yadif_arguments );

    FUNC_1( VAR_2 );
    VAR_1->private_data = ((void*)0);
}
