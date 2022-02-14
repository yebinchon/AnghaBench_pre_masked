
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int UCHAR ;
typedef int PACK ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *,char*,int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 () ;

void FUNC_5(PACK *VAR_1)
{
 UINT VAR_2;
 UCHAR *VAR_3;

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_2 = FUNC_4() % VAR_0;
 VAR_3 = FUNC_1(VAR_2);
 FUNC_3(VAR_3, VAR_2);

 FUNC_2(VAR_1, "pencore", VAR_3, VAR_2);

 FUNC_0(VAR_3);
}
