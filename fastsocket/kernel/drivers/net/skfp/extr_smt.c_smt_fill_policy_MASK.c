
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
typedef int u_char ;
struct smt_p_policy {int pl_connect; int pl_config; } ;
struct TYPE_2__ {int fddiSMTConnectionPolicy; int fddiSMTConfigPolicy; } ;
struct s_smc {TYPE_1__ mib; } ;


 int FUNC_0 (struct smt_p_policy*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct s_smc *VAR_1, struct smt_p_policy *VAR_2)
{
 int VAR_3 ;
 u_char *VAR_4 ;
 u_short VAR_5 ;
 u_short VAR_6 ;





 static u_char VAR_7[16] = {
  0,7,5,3,8,1,6,4,9,10,2,11,12,13,14,15
 } ;
 FUNC_0(VAR_2,VAR_0) ;

 VAR_6 = 0 ;
 VAR_5 = VAR_1->mib.fddiSMTConnectionPolicy ;
 for (VAR_3 = 0, VAR_4 = VAR_7 ; VAR_3 < 16 ; VAR_3++) {
  if (VAR_5 & 1)
   VAR_6 |= (1<<*VAR_4) ;
  VAR_5 >>= 1 ;
  VAR_4++ ;
 }
 VAR_2->pl_config = VAR_1->mib.fddiSMTConfigPolicy ;
 VAR_2->pl_connect = VAR_6 ;
}
