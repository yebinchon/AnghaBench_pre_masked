
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int L2TP_DefaultHub; int IPsec_Secret; void* EtherIP_IPsec; void* L2TP_IPsec; void* L2TP_Raw; } ;
typedef int PACK ;
typedef TYPE_1__ IPSEC_SERVICES ;


 void* FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

void FUNC_3(IPSEC_SERVICES *VAR_0, PACK *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_0, sizeof(IPSEC_SERVICES));

 VAR_0->L2TP_Raw = FUNC_0(VAR_1, "L2TP_Raw");
 VAR_0->L2TP_IPsec = FUNC_0(VAR_1, "L2TP_IPsec");
 VAR_0->EtherIP_IPsec = FUNC_0(VAR_1, "EtherIP_IPsec");

 FUNC_1(VAR_1, "IPsec_Secret", VAR_0->IPsec_Secret, sizeof(VAR_0->IPsec_Secret));
 FUNC_1(VAR_1, "L2TP_DefaultHub", VAR_0->L2TP_DefaultHub, sizeof(VAR_0->L2TP_DefaultHub));
}
