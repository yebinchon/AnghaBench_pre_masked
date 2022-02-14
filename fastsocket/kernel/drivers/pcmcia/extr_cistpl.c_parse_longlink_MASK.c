
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int TupleDataLen; int TupleData; } ;
typedef TYPE_1__ tuple_t ;
struct TYPE_6__ {int addr; } ;
typedef TYPE_2__ cistpl_longlink_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(tuple_t *VAR_1, cistpl_longlink_t *VAR_2)
{
    if (VAR_1->TupleDataLen < 4)
 return -VAR_0;
    VAR_2->addr = FUNC_0(VAR_1->TupleData);
    return 0;
}
