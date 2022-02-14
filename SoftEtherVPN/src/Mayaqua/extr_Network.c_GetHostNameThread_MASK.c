
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hostname ;
typedef int THREAD ;
typedef int IP ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*,int,int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(THREAD *VAR_0, void *VAR_1)
{
 IP *VAR_2;
 char VAR_3[256];

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_2 = (IP *)VAR_1;

 FUNC_1(VAR_0);

 FUNC_5(VAR_0);

 if (FUNC_4(VAR_3, sizeof(VAR_3), VAR_2))
 {
  FUNC_0(VAR_2, VAR_3);
 }

 FUNC_3(VAR_2);

 FUNC_2(VAR_0);
}
