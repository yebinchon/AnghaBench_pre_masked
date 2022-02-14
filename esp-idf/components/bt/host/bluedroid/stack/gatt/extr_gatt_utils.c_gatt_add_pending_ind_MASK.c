
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tGATT_VALUE ;
struct TYPE_3__ {int pending_ind_q; } ;
typedef TYPE_1__ tGATT_TCB ;
typedef int UINT16 ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int *,int *,int) ;
 scalar_t__ FUNC_3 (int ) ;

tGATT_VALUE *FUNC_4(tGATT_TCB *VAR_1, tGATT_VALUE *VAR_2)
{
    tGATT_VALUE *VAR_3;
    FUNC_0 ("gatt_add_pending_ind");
    if ((VAR_3 = (tGATT_VALUE *)FUNC_3((UINT16)sizeof(tGATT_VALUE))) != ((void*)0)) {
        FUNC_0 ("enqueue a pending indication");
        FUNC_2(VAR_3, VAR_2, sizeof(tGATT_VALUE));
    FUNC_1(VAR_1->pending_ind_q, VAR_3, VAR_0);
    }
    return VAR_3;
}
