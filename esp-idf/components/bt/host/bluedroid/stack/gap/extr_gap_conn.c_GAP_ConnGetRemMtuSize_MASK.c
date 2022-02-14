
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rem_mtu_size; } ;
typedef TYPE_1__ tGAP_CCB ;
typedef int UINT16 ;


 TYPE_1__* FUNC_0 (int ) ;

UINT16 FUNC_1 (UINT16 VAR_0)
{
    tGAP_CCB *VAR_1;

    if ((VAR_1 = FUNC_0 (VAR_0)) == ((void*)0)) {
        return (0);
    }

    return (VAR_1->rem_mtu_size);
}
