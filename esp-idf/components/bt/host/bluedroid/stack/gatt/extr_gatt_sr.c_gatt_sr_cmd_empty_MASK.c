
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ op_code; } ;
struct TYPE_5__ {TYPE_1__ sr_cmd; } ;
typedef TYPE_2__ tGATT_TCB ;
typedef int BOOLEAN ;



BOOLEAN FUNC_0 (tGATT_TCB *VAR_0)
{
    return (VAR_0->sr_cmd.op_code == 0);
}
