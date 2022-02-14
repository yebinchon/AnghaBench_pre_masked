
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * issuer_x; int * x; } ;
typedef TYPE_1__ RPC_GET_ISSUER ;
typedef int PACK ;
typedef int BUF ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int *) ;
 int * FUNC_2 (int *,int) ;

void FUNC_3(PACK *VAR_0, RPC_GET_ISSUER *VAR_1)
{
 BUF *VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 if (VAR_1->x != ((void*)0))
 {
  VAR_2 = FUNC_2(VAR_1->x, 0);

  FUNC_1(VAR_0, "x", VAR_2);
  FUNC_0(VAR_2);
 }

 if (VAR_1->issuer_x != ((void*)0))
 {
  VAR_2 = FUNC_2(VAR_1->issuer_x, 0);

  FUNC_1(VAR_0, "issuer_x", VAR_2);
  FUNC_0(VAR_2);
 }
}
