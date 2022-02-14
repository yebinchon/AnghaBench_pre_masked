
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int PACK ;
typedef int BUF ;


 int FUNC_0 (void*) ;
 void* FUNC_1 (int ,int) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,char*,void*,int ) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,void*,int ) ;

BUF *FUNC_7(PACK *VAR_0, char *VAR_1, UINT VAR_2)
{
 UINT VAR_3;
 void *VAR_4;
 BUF *VAR_5;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_4(VAR_0, VAR_1, VAR_2);
 VAR_4 = FUNC_1(VAR_3, 1);
 if (FUNC_3(VAR_0, VAR_1, VAR_4, VAR_2) == 0)
 {
  FUNC_0(VAR_4);
  return ((void*)0);
 }

 VAR_5 = FUNC_2();
 FUNC_6(VAR_5, VAR_4, VAR_3);
 FUNC_5(VAR_5, 0, 0);

 FUNC_0(VAR_4);

 return VAR_5;
}
