
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct smt_p_state {int st_topology; int st_dupl_addr; scalar_t__ st_pad; } ;
struct TYPE_6__ {TYPE_2__* m; TYPE_1__* a; scalar_t__ fddiSMTPeerWrapFlag; } ;
struct s_smc {TYPE_3__ mib; } ;
struct TYPE_5__ {scalar_t__ fddiMACUNDA_Flag; scalar_t__ fddiMACDA_Flag; } ;
struct TYPE_4__ {scalar_t__ fddiPATHSbaPayload; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct smt_p_state*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (struct s_smc*) ;
 scalar_t__ FUNC_2 (struct s_smc*) ;
 int FUNC_3 (struct s_smc*) ;

__attribute__((used)) static void FUNC_4(struct s_smc *VAR_11, struct smt_p_state *VAR_12)
{
 int VAR_13 ;
 int VAR_14 ;

 FUNC_0(VAR_12,VAR_1) ;
 VAR_12->st_pad = 0 ;


 VAR_13 = 0 ;
 if (VAR_11->mib.fddiSMTPeerWrapFlag) {
  VAR_13 |= VAR_10 ;
 }





 if ((VAR_14 = FUNC_3(VAR_11)) & 1) {
  VAR_13 |= VAR_6 ;
 }
 if (VAR_14 & 2) {
  VAR_13 |= VAR_7 ;
 }



 if (FUNC_2(VAR_11))
  VAR_13 |= VAR_3 ;
 if (VAR_11->mib.a[0].fddiPATHSbaPayload != 0)
  VAR_13 |= VAR_5 ;
 VAR_12->st_topology = VAR_13 ;
 VAR_12->st_dupl_addr =
  ((VAR_11->mib.m[VAR_0].fddiMACDA_Flag ? VAR_2 : 0 ) |
   (VAR_11->mib.m[VAR_0].fddiMACUNDA_Flag ? VAR_9 : 0)) ;
}
