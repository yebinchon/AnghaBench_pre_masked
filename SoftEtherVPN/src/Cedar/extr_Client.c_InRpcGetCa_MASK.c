
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int x; int Key; } ;
typedef TYPE_1__ RPC_GET_CA ;
typedef int PACK ;
typedef int BUF ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (TYPE_1__*,int) ;

void FUNC_5(RPC_GET_CA *VAR_0, PACK *VAR_1)
{
 BUF *VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_4(VAR_0, sizeof(RPC_GET_CA));

 VAR_0->Key = FUNC_3(VAR_1, "Key");

 VAR_2 = FUNC_2(VAR_1, "x");
 if (VAR_2 != ((void*)0))
 {
  VAR_0->x = FUNC_0(VAR_2, 0);

  FUNC_1(VAR_2);
 }
}
