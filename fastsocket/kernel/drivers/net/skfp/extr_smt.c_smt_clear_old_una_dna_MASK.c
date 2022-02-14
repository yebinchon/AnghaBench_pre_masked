
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* m; } ;
struct s_smc {TYPE_2__ mib; } ;
struct TYPE_3__ {void* fddiMACOldDownstreamNbr; void* fddiMACOldUpstreamNbr; } ;


 size_t VAR_0 ;
 void* VAR_1 ;

__attribute__((used)) static void FUNC_0(struct s_smc *VAR_2)
{
 VAR_2->mib.m[VAR_0].fddiMACOldUpstreamNbr = VAR_1 ;
 VAR_2->mib.m[VAR_0].fddiMACOldDownstreamNbr = VAR_1 ;
}
