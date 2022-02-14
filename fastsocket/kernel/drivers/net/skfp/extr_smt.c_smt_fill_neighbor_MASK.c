
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smt_p_neighbor {int nb_dna; int nb_una; int nb_mac_index; int nb_mib_index; } ;
struct TYPE_3__ {TYPE_2__* m; } ;
struct s_smc {TYPE_1__ mib; } ;
struct TYPE_4__ {int fddiMACDownstreamNbr; int fddiMACUpstreamNbr; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct smt_p_neighbor*,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct s_smc*,int) ;

__attribute__((used)) static void FUNC_2(struct s_smc *VAR_3, struct smt_p_neighbor *VAR_4)
{
 FUNC_0(VAR_4,VAR_2) ;

 VAR_4->nb_mib_index = VAR_0 ;
 VAR_4->nb_mac_index = FUNC_1(VAR_3,1) ;
 VAR_4->nb_una = VAR_3->mib.m[VAR_1].fddiMACUpstreamNbr ;
 VAR_4->nb_dna = VAR_3->mib.m[VAR_1].fddiMACDownstreamNbr ;
}
