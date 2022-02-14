
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int WinsServer2; int WinsServer1; int DnsServer2; int DnsServer1; int IpAddress; } ;
typedef int PPP_LCP ;
typedef TYPE_1__ PPP_IPOPTION ;


 int FUNC_0 (int *,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,int) ;

bool FUNC_2(PPP_IPOPTION *VAR_5, PPP_LCP *VAR_6)
{
 bool VAR_7;

 if (VAR_6 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return 0;
 }

 FUNC_1(VAR_5, sizeof(PPP_IPOPTION));

 VAR_7 = FUNC_0(VAR_6, VAR_2, &VAR_5->IpAddress);

 FUNC_0(VAR_6, VAR_0, &VAR_5->DnsServer1);
 FUNC_0(VAR_6, VAR_1, &VAR_5->DnsServer2);
 FUNC_0(VAR_6, VAR_3, &VAR_5->WinsServer1);
 FUNC_0(VAR_6, VAR_4, &VAR_5->WinsServer2);

 return VAR_7;
}
