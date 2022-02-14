
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mode; scalar_t__ filter_mode; struct TYPE_5__* block_score; int mask_temp; int mask_filtered; int mask; int * ref; int * ref_used; int mask_dilate_taskset; int mask_erode_taskset; int mask_filter_taskset; int decomb_check_taskset; int decomb_filter_taskset; int frames; int comb_none; int comb_light; int comb_heavy; } ;
typedef TYPE_1__ hb_filter_private_t ;
struct TYPE_6__ {TYPE_1__* private_data; } ;
typedef TYPE_2__ hb_filter_object_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int ,int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4( hb_filter_object_t * VAR_2 )
{
    hb_filter_private_t * VAR_3 = VAR_2->private_data;

    if (VAR_3 == ((void*)0))
    {
        return;
    }

    FUNC_2("comb detect: heavy %i | light %i | uncombed %i | total %i",
           VAR_3->comb_heavy, VAR_3->comb_light, VAR_3->comb_none, VAR_3->frames);

    FUNC_3( &VAR_3->decomb_filter_taskset );
    FUNC_3( &VAR_3->decomb_check_taskset );

    if (VAR_3->mode & VAR_1)
    {
        FUNC_3( &VAR_3->mask_filter_taskset );
        if (VAR_3->filter_mode == VAR_0)
        {
            FUNC_3( &VAR_3->mask_erode_taskset );
            FUNC_3( &VAR_3->mask_dilate_taskset );
        }
    }


    int VAR_4;
    for (VAR_4 = 0; VAR_4 < 3; VAR_4++)
    {
        if (!VAR_3->ref_used[VAR_4])
        {
            FUNC_1(&VAR_3->ref[VAR_4]);
        }
    }


    FUNC_1(&VAR_3->mask);
    FUNC_1(&VAR_3->mask_filtered);
    FUNC_1(&VAR_3->mask_temp);

    FUNC_0(VAR_3->block_score);
    FUNC_0( VAR_3 );
    VAR_2->private_data = ((void*)0);
}
