
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int hostname ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_5__ {int Flag1; int NumQuery; } ;
struct TYPE_4__ {int TypeL7; int DnsQueryHost; } ;
typedef TYPE_1__ PKT ;
typedef TYPE_2__ DNSV4_HEADER ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int,int *,int) ;
 int FUNC_2 (int ,int,char*) ;

void FUNC_3(PKT *VAR_2, UCHAR *VAR_3, UINT VAR_4)
{
 UCHAR *VAR_5;
 UINT VAR_6;
 DNSV4_HEADER *VAR_7;
 char VAR_8[VAR_1];
 if (VAR_2 == ((void*)0)|| VAR_3 == ((void*)0))
 {
  return;
 }

 if (VAR_4 < sizeof(DNSV4_HEADER))
 {
  return;
 }

 VAR_7 = (DNSV4_HEADER *)VAR_3;

 if ((VAR_7->Flag1 & 78) != 0 || (VAR_7->Flag1 & 0x80) != 0)
 {

  return;
 }
 if (FUNC_0(VAR_7->NumQuery) != 1)
 {

  return;
 }

 VAR_5 = ((UCHAR *)VAR_7) + sizeof(DNSV4_HEADER);
 VAR_6 = VAR_4 - sizeof(DNSV4_HEADER);


 if (FUNC_1(VAR_8, sizeof(VAR_8), VAR_5, VAR_6) == 0)
 {

  return;
 }

 FUNC_2(VAR_2->DnsQueryHost, sizeof(VAR_2->DnsQueryHost), VAR_8);
 VAR_2->TypeL7 = VAR_0;
}
