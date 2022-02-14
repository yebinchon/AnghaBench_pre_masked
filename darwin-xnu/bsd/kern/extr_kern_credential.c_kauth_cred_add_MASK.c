
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_long ;
typedef int kauth_cred_t ;


 int FUNC_0 () ;
 size_t VAR_0 ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_1 ;
 int * FUNC_2 (int ) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int * VAR_2 ;

__attribute__((used)) static int
FUNC_5(kauth_cred_t VAR_3)
{
 u_long VAR_4;

 FUNC_0();

 VAR_4 = FUNC_3(VAR_3);
 VAR_4 %= VAR_0;






 if (FUNC_2(VAR_3) != ((void*)0)) {
  return(-1);
 }


 FUNC_4(VAR_3);


 FUNC_1(&VAR_2[VAR_4], VAR_3, VAR_1);

 return(0);
}
