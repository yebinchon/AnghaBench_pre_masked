
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {int IsTtlSupported; scalar_t__ CurrentTtl; scalar_t__ IPv6; int socket; } ;
typedef TYPE_1__ SOCK ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,scalar_t__,char*,int) ;

bool FUNC_1(SOCK *VAR_4, UINT VAR_5)
{
 DWORD VAR_6;
 int VAR_7;
 UINT VAR_8 = 0;

 if (VAR_4 == ((void*)0))
 {
  return 0;
 }

 if (VAR_4->IsTtlSupported == 0)
 {
  return 0;
 }

 if (VAR_4->CurrentTtl == VAR_5)
 {
  return 1;
 }

 VAR_6 = VAR_5;
 VAR_7 = sizeof(DWORD);

 if (VAR_4->IPv6)
 {



 }
 else
 {



 }

 if (VAR_8 == 0 ||
  FUNC_0(VAR_4->socket, (VAR_4->IPv6 ? VAR_1 : VAR_0), VAR_8, (char *)&VAR_6, VAR_7) == 0)
 {
  return 0;
 }

 VAR_4->CurrentTtl = VAR_5;

 return 1;
}
