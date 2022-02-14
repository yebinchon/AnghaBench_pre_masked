
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct in_multi {scalar_t__ inm_ifp; TYPE_1__* inm_ifma; } ;
struct TYPE_2__ {scalar_t__ ifma_ifp; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static __inline__ int
FUNC_2(const struct in_multi *VAR_0)
{
 FUNC_0(VAR_0->inm_ifma != ((void*)0));
 FUNC_0(VAR_0->inm_ifp == VAR_0->inm_ifma->ifma_ifp);

 return (!FUNC_1(VAR_0->inm_ifp, 0));
}
