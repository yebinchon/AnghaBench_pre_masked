
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipsec_pcb {scalar_t__ ipsec_unit; } ;
typedef int * ifnet_t ;


 struct ipsec_pcb* FUNC_0 (int *) ;

int
FUNC_1 (ifnet_t VAR_0)
{
    struct ipsec_pcb *VAR_1 = ((void*)0);

    if (VAR_0 == ((void*)0))
        return 0;

    VAR_1 = FUNC_0(VAR_0);

    if (VAR_1 == ((void*)0))
        return 0;


    if (VAR_1->ipsec_unit == 0)
        return 0;

    return 1;
}
