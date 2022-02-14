
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int X ;
typedef int UINT ;
struct TYPE_4__ {void* Buf; int Size; } ;
typedef int PACK ;
typedef TYPE_1__ BUF ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,char*,void*,int ) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*,char*) ;
 TYPE_1__* FUNC_5 (int *,int) ;

PACK *FUNC_6(char *VAR_1, char *VAR_2, X *VAR_3, void *VAR_4, UINT VAR_5)
{
 PACK *VAR_6;
 BUF *VAR_7;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_6 = FUNC_1();
 FUNC_4(VAR_6, "method", "login");
 FUNC_4(VAR_6, "hubname", VAR_1);
 FUNC_4(VAR_6, "username", VAR_2);
 FUNC_3(VAR_6, "authtype", VAR_0);


 VAR_7 = FUNC_5(VAR_3, 0);
 FUNC_2(VAR_6, "cert", VAR_7->Buf, VAR_7->Size);
 FUNC_0(VAR_7);


 FUNC_2(VAR_6, "sign", VAR_4, VAR_5);

 return VAR_6;
}
