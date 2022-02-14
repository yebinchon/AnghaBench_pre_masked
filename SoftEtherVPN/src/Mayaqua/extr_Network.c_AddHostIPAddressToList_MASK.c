
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LIST ;
typedef int IP ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *,int *) ;

void FUNC_3(LIST *VAR_0, IP *VAR_1)
{
 IP *VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2 != ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_0, FUNC_0(VAR_1, sizeof(IP)));
}
