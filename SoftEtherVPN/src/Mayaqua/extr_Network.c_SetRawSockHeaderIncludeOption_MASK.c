
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int value ;
typedef int UINT ;
struct TYPE_3__ {int IsRawSocket; int RawIP_HeaderIncludeFlag; int socket; } ;
typedef TYPE_1__ SOCK ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,char*,int) ;

void FUNC_2(SOCK *VAR_2, bool VAR_3)
{
 UINT VAR_4 = FUNC_0(VAR_3);
 if (VAR_2 == ((void*)0) || VAR_2->IsRawSocket == 0)
 {
  return;
 }

 (void)FUNC_1(VAR_2->socket, VAR_0, VAR_1, (char *)&VAR_4, sizeof(VAR_4));

 VAR_2->RawIP_HeaderIncludeFlag = VAR_3;
}
