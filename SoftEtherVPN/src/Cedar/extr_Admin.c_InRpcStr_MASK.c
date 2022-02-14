
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {void* String; } ;
typedef TYPE_1__ RPC_STR ;
typedef int PACK ;


 void* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int *,char*,char*,int) ;
 int FUNC_4 (TYPE_1__*,int) ;

void FUNC_5(RPC_STR *VAR_0, PACK *VAR_1)
{
 UINT VAR_2 = 65536;
 char *VAR_3 = FUNC_2(VAR_2);

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_4(VAR_0, sizeof(RPC_STR));
 if (FUNC_3(VAR_1, "String", VAR_3, VAR_2) == 0)
 {
  VAR_0->String = FUNC_0("");
 }
 else
 {
  VAR_0->String = FUNC_0(VAR_3);
 }
 FUNC_1(VAR_3);
}
