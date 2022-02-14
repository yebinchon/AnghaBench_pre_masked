
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* high; void* low; } ;
struct TYPE_6__ {TYPE_1__ bytes; } ;
struct TYPE_7__ {scalar_t__ DSPbase; TYPE_2__ hsr; } ;
typedef TYPE_3__ IXJ ;


 void* FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(IXJ *VAR_0)
{
 VAR_0->hsr.bytes.low = FUNC_0(VAR_0->DSPbase + 8);
 VAR_0->hsr.bytes.high = FUNC_0(VAR_0->DSPbase + 9);
}
