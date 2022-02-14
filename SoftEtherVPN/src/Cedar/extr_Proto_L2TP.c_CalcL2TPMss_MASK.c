
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_6__ {int CryptBlockSize; scalar_t__ IsIPsecIPv6; int * IkeServer; } ;
struct TYPE_5__ {int ClientIp; } ;
typedef TYPE_1__ L2TP_TUNNEL ;
typedef int L2TP_SESSION ;
typedef TYPE_2__ L2TP_SERVER ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;

UINT FUNC_1(L2TP_SERVER *VAR_1, L2TP_TUNNEL *VAR_2, L2TP_SESSION *VAR_3)
{
 UINT VAR_4;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }

 VAR_4 = VAR_0;

 if (VAR_1->IkeServer != ((void*)0))
 {

  if (VAR_1->IsIPsecIPv6)
  {
   VAR_4 -= 40;
  }
  else
  {
   VAR_4 -= 20;
  }


  VAR_4 -= 8;


  VAR_4 -= 20 + VAR_1->CryptBlockSize * 2;
 }
 else
 {

  if (FUNC_0(&VAR_2->ClientIp))
  {
   VAR_4 -= 40;
  }
  else
  {
   VAR_4 -= 20;
  }
 }


 VAR_4 -= 8;


 VAR_4 -= 8;


 VAR_4 -= 4;


 VAR_4 -= 20;


 VAR_4 -= 20;

 return VAR_4;
}
