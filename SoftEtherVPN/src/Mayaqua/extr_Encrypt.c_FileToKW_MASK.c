
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int K ;
typedef int BUF ;


 int * FUNC_0 (int *,int,int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;

K *FUNC_4(wchar_t *VAR_0, bool VAR_1, char *VAR_2)
{
 bool VAR_3;
 BUF *VAR_4;
 K *VAR_5;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_4 = FUNC_3(VAR_0);
 if (VAR_4 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_2(VAR_4);
 if (VAR_3 == 0)
 {
  VAR_5 = FUNC_0(VAR_4, VAR_1, 0, ((void*)0));
 }
 else
 {
  VAR_5 = FUNC_0(VAR_4, VAR_1, 1, ((void*)0));
  if (VAR_5 == ((void*)0))
  {
   VAR_5 = FUNC_0(VAR_4, VAR_1, 1, VAR_2);
  }
 }

 FUNC_1(VAR_4);

 return VAR_5;
}
