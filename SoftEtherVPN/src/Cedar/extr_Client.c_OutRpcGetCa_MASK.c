
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * x; int Key; } ;
typedef TYPE_1__ RPC_GET_CA ;
typedef int PACK ;
typedef int BUF ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int *) ;
 int FUNC_2 (int *,char*,int ) ;
 int * FUNC_3 (int *,int) ;

void FUNC_4(PACK *VAR_0, RPC_GET_CA *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_0, "Key", VAR_1->Key);

 if (VAR_1->x != ((void*)0))
 {
  BUF *VAR_2 = FUNC_3(VAR_1->x, 0);

  FUNC_1(VAR_0, "x", VAR_2);

  FUNC_0(VAR_2);
 }
}
