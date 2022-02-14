
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* m; } ;
struct s_smc {TYPE_3__ mib; } ;
struct fddi_addr {int * a; } ;
struct TYPE_4__ {int * a; } ;
struct TYPE_5__ {TYPE_1__ fddiMACSMTAddress; } ;


 size_t VAR_0 ;

__attribute__((used)) static inline int FUNC_0(const struct s_smc *VAR_1,
        const struct fddi_addr *VAR_2)
{
 return(*(short *)(&VAR_2->a[0]) ==
  *(short *)(&VAR_1->mib.m[VAR_0].fddiMACSMTAddress.a[0])
   && *(short *)(&VAR_2->a[2]) ==
  *(short *)(&VAR_1->mib.m[VAR_0].fddiMACSMTAddress.a[2])
   && *(short *)(&VAR_2->a[4]) ==
  *(short *)(&VAR_1->mib.m[VAR_0].fddiMACSMTAddress.a[4])) ;
}
