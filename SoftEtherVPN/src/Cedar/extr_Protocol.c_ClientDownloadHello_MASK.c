
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* UINT ;
typedef int UCHAR ;
struct TYPE_3__ {int Random; int * FirstSock; void* Err; int ServerStr; int ServerBuild; int ServerVer; } ;
typedef int SOCK ;
typedef int PACK ;
typedef TYPE_1__ CONNECTION ;


 int FUNC_0 (int ,int *,int) ;
 void* VAR_0 ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *,int *,int ,int) ;
 int * FUNC_4 (int *) ;
 int VAR_1 ;

bool FUNC_5(CONNECTION *VAR_2, SOCK *VAR_3)
{
 PACK *VAR_4;
 UINT VAR_5;
 UCHAR VAR_6[VAR_1];

 if (VAR_2 == ((void*)0))
 {
  return 0;
 }


 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4 == ((void*)0))
 {
  VAR_2->Err = VAR_0;
  return 0;
 }

 if ((VAR_5 = FUNC_2(VAR_4)))
 {

  VAR_2->Err = VAR_5;
  FUNC_1(VAR_4);
  return 0;
 }


 if (FUNC_3(VAR_4, VAR_6, &VAR_2->ServerVer, &VAR_2->ServerBuild, VAR_2->ServerStr, sizeof(VAR_2->ServerStr)) == 0)
 {
  VAR_2->Err = VAR_0;
  FUNC_1(VAR_4);
  return 0;
 }

 if (VAR_2->FirstSock == VAR_3)
 {
  FUNC_0(VAR_2->Random, VAR_6, VAR_1);
 }

 FUNC_1(VAR_4);

 return 1;
}
