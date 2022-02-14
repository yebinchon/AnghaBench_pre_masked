
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RTPDynamicProtocolHandler ;


 int ** VAR_0 ;

const RTPDynamicProtocolHandler *FUNC_0(void **VAR_1)
{
    uintptr_t VAR_2 = (uintptr_t)*VAR_1;
    const RTPDynamicProtocolHandler *VAR_3 = VAR_0[VAR_2];

    if (VAR_3)
        *VAR_1 = (void*)(VAR_2 + 1);

    return VAR_3;
}
