
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ rndx; scalar_t__ wndx; } ;
typedef TYPE_1__ AVFifoBuffer ;



int FUNC_0(const AVFifoBuffer *VAR_0)
{
    return (uint32_t)(VAR_0->wndx - VAR_0->rndx);
}
