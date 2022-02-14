
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Err; int FirstSock; int ServerStr; int ServerBuild; int ServerVer; int Random; } ;
typedef int PACK ;
typedef TYPE_1__ CONNECTION ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_1 ;

bool FUNC_4(CONNECTION *VAR_2)
{
 PACK *VAR_3;

 if (VAR_2 == ((void*)0))
 {
  return 0;
 }


 FUNC_3(VAR_2->Random, VAR_1);

 VAR_3 = FUNC_2(VAR_2->Random, VAR_2->ServerVer, VAR_2->ServerBuild, VAR_2->ServerStr);
 if (FUNC_1(VAR_2->FirstSock, VAR_3) == 0)
 {
  FUNC_0(VAR_3);
  VAR_2->Err = VAR_0;
  return 0;
 }

 FUNC_0(VAR_3);

 return 1;
}
