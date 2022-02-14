
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ crr; } ;
struct TYPE_6__ {TYPE_1__ bits; int byte; } ;
struct TYPE_7__ {TYPE_2__ pccr1; scalar_t__ XILINXbase; } ;
typedef TYPE_3__ IXJ ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline int FUNC_1(IXJ *VAR_0)
{
 VAR_0->pccr1.byte = FUNC_0(VAR_0->XILINXbase + 3);
 return VAR_0->pccr1.bits.crr ? 1 : 0;
}
