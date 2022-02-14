
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tGATT_TCB ;
struct TYPE_4__ {int uuid; void* e_handle; void* s_handle; } ;
struct TYPE_5__ {TYPE_1__ browse; } ;
typedef TYPE_2__ tGATT_CL_MSG ;
typedef int tBT_UUID ;
typedef int UINT8 ;
typedef void* UINT16 ;


 int FUNC_0 (int *,void*,int ,TYPE_2__*) ;
 int FUNC_1 (int *,int *,int) ;

UINT8 FUNC_2(tGATT_TCB *VAR_0, UINT16 VAR_1, UINT8 VAR_2, UINT16 VAR_3,
                           UINT16 VAR_4, tBT_UUID VAR_5)
{
    tGATT_CL_MSG VAR_6;

    VAR_6.browse.s_handle = VAR_3;
    VAR_6.browse.e_handle = VAR_4;
    FUNC_1(&VAR_6.browse.uuid, &VAR_5, sizeof(tBT_UUID));


    return FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_6);
}
