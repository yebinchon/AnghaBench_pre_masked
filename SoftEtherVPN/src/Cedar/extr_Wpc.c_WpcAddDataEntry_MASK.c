
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int size_str ;
typedef int UINT ;
typedef int BUF ;


 int FUNC_0 (char*,int,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,void*,int) ;

void FUNC_3(BUF *VAR_1, char *VAR_2, void *VAR_3, UINT VAR_4)
{
 char VAR_5[VAR_0];
 char VAR_6[11];

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || (VAR_3 == ((void*)0) && VAR_4 != 0))
 {
  return;
 }

 FUNC_1(VAR_5, VAR_2);
 FUNC_2(VAR_1, VAR_5, VAR_0);

 FUNC_0(VAR_6, sizeof(VAR_6), "%010u", VAR_4);
 FUNC_2(VAR_1, VAR_6, 10);

 FUNC_2(VAR_1, VAR_3, VAR_4);
}
