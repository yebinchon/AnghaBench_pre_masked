
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tGATT_TCB ;
typedef int tGATT_STATUS ;
struct TYPE_4__ {int offset; } ;
typedef TYPE_1__ BT_HDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*) ;

tGATT_STATUS FUNC_1 (tGATT_TCB *VAR_2, BT_HDR *VAR_3)
{
    tGATT_STATUS VAR_4 = VAR_0;

    if (VAR_2 != ((void*)0)) {
        if (VAR_3 != ((void*)0)) {
            VAR_3->offset = VAR_1;
            VAR_4 = FUNC_0 (VAR_2, VAR_3);
        }
    }
    return VAR_4;
}
