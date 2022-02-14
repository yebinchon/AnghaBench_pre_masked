
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int splice_list_size; TYPE_1__* splice_list; } ;
typedef TYPE_2__ hb_work_private_t ;
typedef int hb_buffer_list_t ;
struct TYPE_4__ {int id; int list; } ;



__attribute__((used)) static hb_buffer_list_t * FUNC_0(hb_work_private_t * VAR_0, int VAR_1)
{
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_0->splice_list_size; VAR_2++)
    {
        if (VAR_0->splice_list[VAR_2].id == VAR_1)
        {
            return &VAR_0->splice_list[VAR_2].list;
        }
    }
    return ((void*)0);
}
