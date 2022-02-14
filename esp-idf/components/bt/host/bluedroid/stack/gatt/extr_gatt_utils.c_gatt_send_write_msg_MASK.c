
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tGATT_TCB ;
struct TYPE_4__ {int value; void* offset; void* len; void* handle; } ;
struct TYPE_5__ {TYPE_1__ attr_value; } ;
typedef TYPE_2__ tGATT_CL_MSG ;
typedef int UINT8 ;
typedef void* UINT16 ;


 int FUNC_0 (int *,void*,int ,TYPE_2__*) ;
 int FUNC_1 (int ,int *,void*) ;

UINT8 FUNC_2 (tGATT_TCB *VAR_0, UINT16 VAR_1, UINT8 VAR_2,
                           UINT16 VAR_3, UINT16 VAR_4,
                           UINT16 VAR_5, UINT8 *VAR_6)
{
    tGATT_CL_MSG VAR_7;

    VAR_7.attr_value.handle = VAR_3;
    VAR_7.attr_value.len = VAR_4;
    VAR_7.attr_value.offset = VAR_5;

    FUNC_1 (VAR_7.attr_value.value, VAR_6, VAR_4);


    return FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_7);
}
