
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int frame_rate_list; } ;
typedef TYPE_1__ hb_filter_private_t ;
typedef int hb_buffer_t ;
typedef int hb_buffer_list_t ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static hb_buffer_t * FUNC_4(hb_filter_private_t * VAR_0)
{
    hb_buffer_list_t VAR_1;

    FUNC_2(&VAR_1);
    while (FUNC_3(VAR_0->frame_rate_list) > 0)
    {
        FUNC_1(&VAR_1, FUNC_0(VAR_0, ((void*)0)));
    }

    return FUNC_2(&VAR_1);
}
