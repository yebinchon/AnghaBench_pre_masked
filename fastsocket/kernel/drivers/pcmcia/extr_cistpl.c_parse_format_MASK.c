
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u_char ;
struct TYPE_5__ {int TupleDataLen; void** TupleData; } ;
typedef TYPE_1__ tuple_t ;
struct TYPE_6__ {void* length; void* offset; void* edc; void* type; } ;
typedef TYPE_2__ cistpl_format_t ;


 int VAR_0 ;
 void* FUNC_0 (void**) ;

__attribute__((used)) static int FUNC_1(tuple_t *VAR_1, cistpl_format_t *VAR_2)
{
    u_char *VAR_3;

    if (VAR_1->TupleDataLen < 10)
 return -VAR_0;

    VAR_3 = VAR_1->TupleData;

    VAR_2->type = VAR_3[0];
    VAR_2->edc = VAR_3[1];
    VAR_2->offset = FUNC_0(VAR_3 + 2);
    VAR_2->length = FUNC_0(VAR_3 + 6);

    return 0;
}
