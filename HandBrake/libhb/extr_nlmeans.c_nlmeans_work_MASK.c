
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int hb_filter_private_t ;
struct TYPE_14__ {int * private_data; } ;
typedef TYPE_2__ hb_filter_object_t ;
struct TYPE_13__ {int flags; } ;
struct TYPE_15__ {TYPE_1__ s; } ;
typedef TYPE_3__ hb_buffer_t ;
typedef int hb_buffer_list_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_3__*) ;
 TYPE_3__* FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 TYPE_3__* FUNC_4 (int *) ;
 TYPE_3__* FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(hb_filter_object_t *VAR_3,
                           hb_buffer_t **VAR_4,
                           hb_buffer_t **VAR_5 )
{
    hb_filter_private_t *VAR_6 = VAR_3->private_data;
    hb_buffer_t *VAR_7 = *VAR_4;

    if (VAR_7->s.flags & VAR_0)
    {
        hb_buffer_list_t VAR_8;
        hb_buffer_t *VAR_9;


        VAR_9 = FUNC_5(VAR_6);
        FUNC_2(&VAR_8, VAR_9);


        FUNC_0(&VAR_8, VAR_7);
        *VAR_5 = FUNC_1(&VAR_8);

        *VAR_4 = ((void*)0);
        return VAR_1;
    }

    FUNC_3(VAR_6, VAR_7);
    *VAR_5 = FUNC_4(VAR_6);

    return VAR_2;
}
