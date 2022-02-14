
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X ;
typedef int PACK ;
typedef int BUF ;


 int * FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,char*) ;

X *FUNC_3(PACK *VAR_0, char *VAR_1)
{
 X *VAR_2;
 BUF *VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_2(VAR_0, VAR_1);
 if (VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_0(VAR_3, 0);

 if (VAR_2 == ((void*)0))
 {
  VAR_2 = FUNC_0(VAR_3, 1);
 }

 FUNC_1(VAR_3);

 return VAR_2;
}
