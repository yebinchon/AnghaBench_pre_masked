
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int comb_detect_ready; int out_list; TYPE_4__** ref; } ;
typedef TYPE_2__ hb_filter_private_t ;
struct TYPE_18__ {TYPE_2__* private_data; } ;
typedef TYPE_3__ hb_filter_object_t ;
struct TYPE_16__ {int flags; } ;
struct TYPE_19__ {TYPE_1__ s; } ;
typedef TYPE_4__ hb_buffer_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int *,TYPE_4__*) ;
 TYPE_4__* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_4__* FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_7( hb_filter_object_t * VAR_4,
                             hb_buffer_t ** VAR_5,
                             hb_buffer_t ** VAR_6 )
{
    hb_filter_private_t * VAR_7 = VAR_4->private_data;
    hb_buffer_t * VAR_8 = *VAR_5;


    *VAR_5 = ((void*)0);
    if (VAR_8->s.flags & VAR_0)
    {

        FUNC_6(VAR_7, FUNC_0(VAR_7->ref[2]));
        if (VAR_7->ref[0] != ((void*)0))
        {
            FUNC_5(VAR_7);
        }
        FUNC_1(&VAR_7->out_list, VAR_8);
        *VAR_6 = FUNC_2(&VAR_7->out_list);
        return VAR_2;
    }



    if (!VAR_7->comb_detect_ready)
    {

        FUNC_6(VAR_7, FUNC_0(VAR_8));
        FUNC_6(VAR_7, VAR_8);
        VAR_7->comb_detect_ready = 1;

        return VAR_1;
    }

    FUNC_6(VAR_7, VAR_8);
    FUNC_5(VAR_7);





    if (FUNC_3(&VAR_7->out_list) > 3)
    {
        *VAR_6 = FUNC_4(&VAR_7->out_list);
    }
    return VAR_3;
}
