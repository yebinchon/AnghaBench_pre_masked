
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int L2TP_DefaultHub; int IPsec_Secret; int EtherIP_IPsec; int L2TP_IPsec; int L2TP_Raw; } ;
typedef int PACK ;
typedef TYPE_1__ IPSEC_SERVICES ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;

void FUNC_2(PACK *VAR_0, IPSEC_SERVICES *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0, "L2TP_Raw", VAR_1->L2TP_Raw);
 FUNC_0(VAR_0, "L2TP_IPsec", VAR_1->L2TP_IPsec);
 FUNC_0(VAR_0, "EtherIP_IPsec", VAR_1->EtherIP_IPsec);

 FUNC_1(VAR_0, "IPsec_Secret", VAR_1->IPsec_Secret);
 FUNC_1(VAR_0, "L2TP_DefaultHub", VAR_1->L2TP_DefaultHub);
}
