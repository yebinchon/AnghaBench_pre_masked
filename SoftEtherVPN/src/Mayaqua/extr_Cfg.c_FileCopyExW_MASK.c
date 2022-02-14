
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int BUF ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,int ) ;

bool FUNC_4(wchar_t *VAR_0, wchar_t *VAR_1, bool VAR_2)
{
 BUF *VAR_3;
 bool VAR_4 = 0;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 VAR_3 = FUNC_2(VAR_0, 0);
 if (VAR_3 == ((void*)0))
 {
  return 0;
 }

 FUNC_3(VAR_3, 0, 0);

 VAR_4 = FUNC_0(VAR_3, VAR_1);

 FUNC_1(VAR_3);

 return VAR_4;
}
