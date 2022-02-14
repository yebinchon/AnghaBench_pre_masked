
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int paging; int page_queue; } ;
typedef int BT_HDR ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

void FUNC_3 (void)
{
    BT_HDR *VAR_2;
    FUNC_0 ("btm_acl_reset_paging\n");

    while ((VAR_2 = (BT_HDR *)FUNC_1(VAR_1.page_queue, 0)) != ((void*)0)) {
        FUNC_2 (VAR_2);
    }

    VAR_1.paging = VAR_0;
}
