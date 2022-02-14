
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int u_long ;
typedef scalar_t__ boolean_t ;
struct TYPE_3__ {int vmsize; } ;
typedef int KXLDSymtab ;
typedef TYPE_1__ KXLDSeg ;
typedef int KXLDArray ;


 scalar_t__ FUNC_0 (int const*,int const*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int const*,scalar_t__) ;

void
FUNC_3(KXLDSeg *VAR_0, const KXLDSymtab *VAR_1, boolean_t VAR_2





    , uint32_t VAR_3
   )
{
    u_long VAR_4 = 0;

    VAR_4 += FUNC_2(VAR_1, VAR_2);
    VAR_4 += VAR_3;

    VAR_0->vmsize = FUNC_1(VAR_4);
}
