
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGresult ;
typedef int MultiConnection ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *,char const*) ;

void
FUNC_7(MultiConnection *VAR_1, const char *VAR_2)
{
 int VAR_3 = 0;
 PGresult *VAR_4 = ((void*)0);
 bool VAR_5 = 1;

 VAR_3 = FUNC_6(VAR_1, VAR_2);
 if (VAR_3 == 0)
 {
  FUNC_4(VAR_1, VAR_0);
 }

 VAR_4 = FUNC_1(VAR_1, VAR_5);
 if (!FUNC_2(VAR_4))
 {
  FUNC_5(VAR_1, VAR_4, VAR_0);
 }

 FUNC_3(VAR_4);
 FUNC_0(VAR_1);
}
