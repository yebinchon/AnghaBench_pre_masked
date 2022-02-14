
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int h ;
struct TYPE_6__ {int CertType; } ;
struct TYPE_5__ {int * CertData; int CertType; } ;
typedef TYPE_1__ IKE_PACKET_CERT_PAYLOAD ;
typedef TYPE_2__ IKE_CERT_HEADER ;
typedef int BUF ;


 int FUNC_0 (int *,TYPE_2__*,int) ;
 int * FUNC_1 (int *) ;

bool FUNC_2(IKE_PACKET_CERT_PAYLOAD *VAR_0, BUF *VAR_1)
{
 IKE_CERT_HEADER VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_0(VAR_1, &VAR_2, sizeof(VAR_2)) != sizeof(VAR_2))
 {
  return 0;
 }

 VAR_0->CertType = VAR_2.CertType;
 VAR_0->CertData = FUNC_1(VAR_1);
 if (VAR_0->CertData == ((void*)0))
 {
  return 0;
 }

 return 1;
}
