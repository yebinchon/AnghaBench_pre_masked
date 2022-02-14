
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int p ;
typedef int n ;
typedef int VH ;
typedef scalar_t__ UINT ;
struct TYPE_6__ {int DnsGetIpFromHost; int DnsOk; scalar_t__ SrcPort; scalar_t__ DestPort; scalar_t__ SrcIp; scalar_t__ DestIp; int TransactionId; int DnsTransactionId; int DnsResponseHostName; int Hostname; int DnsTargetHostName; } ;
typedef TYPE_1__ NAT_ENTRY ;
typedef TYPE_1__ DNS_PARSED_PACKET ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,scalar_t__,scalar_t__,scalar_t__,scalar_t__,void*,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,scalar_t__,scalar_t__,scalar_t__,scalar_t__,void*,scalar_t__,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 int FUNC_5 (int *,scalar_t__,scalar_t__,scalar_t__,scalar_t__,void*,scalar_t__,int) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int VAR_1 ;

void FUNC_7(VH *VAR_2, UINT VAR_3, UINT VAR_4, UINT VAR_5, UINT VAR_6, void *VAR_7, UINT VAR_8)
{

 if (VAR_2 == ((void*)0) || VAR_7 == ((void*)0) || VAR_8 == 0)
 {
  return;
 }

 if (VAR_6 == VAR_0)
 {

  FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 }
 else
 {

  if (FUNC_0(VAR_1) == 0)
  {

   DNS_PARSED_PACKET VAR_9;

   FUNC_6(&VAR_9, sizeof(VAR_9));
   if (FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, &VAR_9))
   {
    if (FUNC_4(VAR_9.Hostname, "254.254.211.10.in-addr.arpa") == 0)
    {
     NAT_ENTRY VAR_10;

     FUNC_6(&VAR_10, sizeof(VAR_10));
     VAR_10.DnsTargetHostName = VAR_9.Hostname;
     VAR_10.DnsGetIpFromHost = 1;
     VAR_10.DnsResponseHostName = VAR_1;
     VAR_10.DnsTransactionId = VAR_9.TransactionId;
     VAR_10.DnsOk = 1;
     VAR_10.DestIp = VAR_5;
     VAR_10.SrcIp = VAR_3;
     VAR_10.DestPort = VAR_6;
     VAR_10.SrcPort = VAR_4;

     FUNC_3(VAR_2, &VAR_10);
     return;
    }
   }
  }

  FUNC_5(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, 1);
 }
}
