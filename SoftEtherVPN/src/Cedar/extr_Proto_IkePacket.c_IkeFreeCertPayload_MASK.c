
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * CertData; } ;
typedef TYPE_1__ IKE_PACKET_CERT_PAYLOAD ;


 int FUNC_0 (int *) ;

void FUNC_1(IKE_PACKET_CERT_PAYLOAD *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 if (VAR_0->CertData != ((void*)0))
 {
  FUNC_0(VAR_0->CertData);
  VAR_0->CertData = ((void*)0);
 }
}
