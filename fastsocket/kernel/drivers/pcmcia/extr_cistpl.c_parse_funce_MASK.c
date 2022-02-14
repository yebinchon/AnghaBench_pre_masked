
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u_char ;
struct TYPE_5__ {int TupleDataLen; scalar_t__ TupleData; } ;
typedef TYPE_1__ tuple_t ;
struct TYPE_6__ {void** data; void* type; } ;
typedef TYPE_2__ cistpl_funce_t ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(tuple_t *VAR_1, cistpl_funce_t *VAR_2)
{
    u_char *VAR_3;
    int VAR_4;
    if (VAR_1->TupleDataLen < 1)
 return -VAR_0;
    VAR_3 = (u_char *)VAR_1->TupleData;
    VAR_2->type = VAR_3[0];
    for (VAR_4 = 1; VAR_4 < VAR_1->TupleDataLen; VAR_4++)
 VAR_2->data[VAR_4-1] = VAR_3[VAR_4];
    return 0;
}
