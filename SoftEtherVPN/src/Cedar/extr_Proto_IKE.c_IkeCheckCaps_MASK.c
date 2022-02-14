
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int NatTraversalDraftIetf; void* MS_Vid_InitialContact; void* MS_NT5_ISAKMP_OAKLEY; void* MS_L2TPIPSecVPNClient; void* DpdRfc3706; void* NatTraversalRfc3947; } ;
typedef int IKE_PACKET ;
typedef TYPE_1__ IKE_CAPS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;

void FUNC_2(IKE_CAPS *VAR_9, IKE_PACKET *VAR_10)
{

 if (VAR_9 == ((void*)0) || VAR_10 == ((void*)0))
 {
  FUNC_1(VAR_9, sizeof(IKE_CAPS));
  return;
 }

 FUNC_1(VAR_9, sizeof(IKE_CAPS));

 VAR_9->NatTraversalRfc3947 = FUNC_0(VAR_10, VAR_8);

 VAR_9->NatTraversalDraftIetf = FUNC_0(VAR_10, VAR_3) ||
  FUNC_0(VAR_10, VAR_1) ||
  FUNC_0(VAR_10, VAR_2) ||
  FUNC_0(VAR_10, VAR_0);

 VAR_9->DpdRfc3706 = FUNC_0(VAR_10, VAR_7);

 VAR_9->MS_L2TPIPSecVPNClient = FUNC_0(VAR_10, VAR_4);
 VAR_9->MS_NT5_ISAKMP_OAKLEY = FUNC_0(VAR_10, VAR_5);
 VAR_9->MS_Vid_InitialContact = FUNC_0(VAR_10, VAR_6);
}
