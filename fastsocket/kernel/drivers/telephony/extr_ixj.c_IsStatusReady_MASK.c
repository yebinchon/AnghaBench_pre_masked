
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ statusrdy; } ;
struct TYPE_7__ {TYPE_1__ bits; } ;
struct TYPE_8__ {TYPE_2__ hsr; } ;
typedef TYPE_3__ IXJ ;


 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static inline int FUNC_1(IXJ *VAR_0)
{
 FUNC_0(VAR_0);
 return VAR_0->hsr.bits.statusrdy ? 1 : 0;
}
