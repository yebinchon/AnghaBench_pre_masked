
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int CryptBlockSize; int ClientIP; scalar_t__ IsTunnelMode; } ;
typedef TYPE_1__ ETHERIP_SERVER ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;

UINT FUNC_1(ETHERIP_SERVER *VAR_1)
{
 UINT VAR_2 = VAR_0;

 if (VAR_1 == ((void*)0))
 {
  return 0;
 }


 if (FUNC_0(&VAR_1->ClientIP))
 {
  VAR_2 -= 20;
 }
 else
 {
  VAR_2 -= 40;
 }


 VAR_2 -= 8;


 VAR_2 -= 20;
 VAR_2 -= VAR_1->CryptBlockSize * 2;


 if (VAR_1->IsTunnelMode)
 {
  if (FUNC_0(&VAR_1->ClientIP))
  {
   VAR_2 -= 20;
  }
  else
  {
   VAR_2 -= 40;
  }
 }


 VAR_2 -= 2;


 VAR_2 -= 14;


 VAR_2 -= 20;


 VAR_2 -= 20;

 return VAR_2;
}
