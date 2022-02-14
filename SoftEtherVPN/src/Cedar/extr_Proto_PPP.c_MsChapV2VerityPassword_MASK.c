
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UCHAR ;
struct TYPE_3__ {int MsChapV2_ClientResponse; int MsChapV2_PPPUsername; int MsChapV2_ServerChallenge; int MsChapV2_ClientChallenge; } ;
typedef TYPE_1__ IPC_MSCHAP_V2_AUTHINFO ;


 scalar_t__ FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,char*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int ,int ,int ) ;

bool FUNC_4(IPC_MSCHAP_V2_AUTHINFO *VAR_1, char *VAR_2)
{
 UCHAR VAR_3[VAR_0];
 UCHAR VAR_4[8];
 UCHAR VAR_5[24];

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 FUNC_1(VAR_3, VAR_2);
 FUNC_3(VAR_4, VAR_1->MsChapV2_ClientChallenge, VAR_1->MsChapV2_ServerChallenge, VAR_1->MsChapV2_PPPUsername);
 FUNC_2(VAR_5, VAR_4, VAR_3);

 if (FUNC_0(VAR_5, VAR_1->MsChapV2_ClientResponse, 24) != 0)
 {
  return 0;
 }

 return 1;
}
