
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int PACK ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,char*,void*,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,char*) ;
 int VAR_0 ;

PACK *FUNC_4(void *VAR_1, UINT VAR_2, UINT VAR_3, char *VAR_4)
{
 PACK *VAR_5;

 if (VAR_1 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_5 = FUNC_0();
 FUNC_3(VAR_5, "hello", VAR_4);
 FUNC_2(VAR_5, "version", VAR_2);
 FUNC_2(VAR_5, "build", VAR_3);
 FUNC_1(VAR_5, "random", VAR_1, VAR_0);

 return VAR_5;
}
