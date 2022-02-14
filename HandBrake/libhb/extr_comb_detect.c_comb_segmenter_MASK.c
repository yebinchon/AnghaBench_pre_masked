
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mode; scalar_t__ filter_mode; int decomb_check_taskset; int mask_erode_taskset; int mask_dilate_taskset; int mask_filter_taskset; int decomb_filter_taskset; } ;
typedef TYPE_1__ hb_filter_private_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3( hb_filter_private_t * VAR_2 )
{




    FUNC_2( &VAR_2->decomb_filter_taskset );

    if (VAR_2->mode & VAR_1)
    {
        FUNC_2( &VAR_2->mask_filter_taskset );
        if (VAR_2->filter_mode == VAR_0)
        {
            FUNC_2( &VAR_2->mask_erode_taskset );
            FUNC_2( &VAR_2->mask_dilate_taskset );
            FUNC_2( &VAR_2->mask_erode_taskset );
        }
    }
    FUNC_1(VAR_2);
    FUNC_2(&VAR_2->decomb_check_taskset);
    return FUNC_0(VAR_2);
}
