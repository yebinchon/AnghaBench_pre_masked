
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_5__ {scalar_t__ unicast_addr; scalar_t__ element_num; } ;
typedef TYPE_1__ example_node_info_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_1__* VAR_0 ;

example_node_info_t *FUNC_2(uint16_t VAR_1)
{
    example_node_info_t *VAR_2 = ((void*)0);

    if (!FUNC_1(VAR_1)) {
        return ((void*)0);
    }

    for (int VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
        VAR_2 = &VAR_0[VAR_3];
        if (VAR_1 >= VAR_2->unicast_addr &&
                VAR_1 < VAR_2->unicast_addr + VAR_2->element_num) {
            return VAR_2;
        }
    }

    return ((void*)0);
}
