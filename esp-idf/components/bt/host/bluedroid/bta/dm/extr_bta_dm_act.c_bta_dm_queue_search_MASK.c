
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tBTA_DM_MSG ;
typedef int tBTA_DM_API_SEARCH ;
struct TYPE_2__ {int * p_search_queue; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3 (tBTA_DM_MSG *VAR_1)
{
    if (VAR_0.p_search_queue) {
        FUNC_1(VAR_0.p_search_queue);
    }

    VAR_0.p_search_queue = (tBTA_DM_MSG *)FUNC_2(sizeof(tBTA_DM_API_SEARCH));
    FUNC_0(VAR_0.p_search_queue, VAR_1, sizeof(tBTA_DM_API_SEARCH));

}
