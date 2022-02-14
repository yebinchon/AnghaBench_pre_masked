
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smt_p_mac_fnc {int nc_counter; int nc_index; int nc_mib_index; } ;
struct TYPE_4__ {TYPE_1__* m; } ;
struct s_smc {TYPE_2__ mib; } ;
struct TYPE_3__ {int fddiMACNotCopied_Ct; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct smt_p_mac_fnc*,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct s_smc*,int) ;

__attribute__((used)) static void FUNC_2(struct s_smc *VAR_3, struct smt_p_mac_fnc *VAR_4)
{
 FUNC_0(VAR_4,VAR_2) ;
 VAR_4->nc_mib_index = VAR_0 ;
 VAR_4->nc_index = FUNC_1(VAR_3,1) ;
 VAR_4->nc_counter = VAR_3->mib.m[VAR_1].fddiMACNotCopied_Ct ;
}
