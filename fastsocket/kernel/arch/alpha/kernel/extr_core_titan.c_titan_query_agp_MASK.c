
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int apctl_v_agp_present; } ;
union TPAchipPCTL {TYPE_2__ pctl_r_bits; int pctl_q_whole; } ;
struct TYPE_5__ {int csr; } ;
struct TYPE_7__ {TYPE_1__ pctl; } ;
typedef TYPE_3__ titan_pachip_port ;



__attribute__((used)) static int
FUNC_0(titan_pachip_port *VAR_0)
{
 union TPAchipPCTL VAR_1;


 VAR_1.pctl_q_whole = VAR_0->pctl.csr;

 return VAR_1.pctl_r_bits.apctl_v_agp_present;

}
