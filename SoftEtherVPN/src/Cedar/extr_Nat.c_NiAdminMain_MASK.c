
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SOCK ;
typedef int RPC ;
typedef int PACK ;
typedef int NAT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int ,int *) ;

void FUNC_6(NAT *VAR_1, SOCK *VAR_2)
{
 RPC *VAR_3;
 PACK *VAR_4;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_4 = FUNC_2();
 FUNC_1(VAR_2, VAR_4);
 FUNC_0(VAR_4);

 VAR_3 = FUNC_5(VAR_2, VAR_0, VAR_1);

 FUNC_4(VAR_3);

 FUNC_3(VAR_3);
}
