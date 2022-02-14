
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int h ;
struct TYPE_7__ {int CertType; } ;
struct TYPE_6__ {int Data; int CertType; } ;
typedef TYPE_1__ IKE_PACKET_CERT_REQUEST_PAYLOAD ;
typedef TYPE_2__ IKE_CERT_REQUEST_HEADER ;
typedef int BUF ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,TYPE_2__*,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_2__*,int) ;

BUF *FUNC_4(IKE_PACKET_CERT_REQUEST_PAYLOAD *VAR_0)
{
 IKE_CERT_REQUEST_HEADER VAR_1;
 BUF *VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_3(&VAR_1, sizeof(VAR_1));
 VAR_1.CertType = VAR_0->CertType;

 VAR_2 = FUNC_0();
 FUNC_1(VAR_2, &VAR_1, sizeof(VAR_1));
 FUNC_2(VAR_2, VAR_0->Data);

 return VAR_2;
}
