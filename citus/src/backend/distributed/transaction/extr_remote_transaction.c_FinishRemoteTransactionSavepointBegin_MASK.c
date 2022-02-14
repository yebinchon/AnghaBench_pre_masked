
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SubTransactionId ;
typedef int PGresult ;
typedef int MultiConnection ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int const) ;
 int FUNC_2 (int *,int *,int const) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(MultiConnection *VAR_0, SubTransactionId VAR_1)
{
 const bool VAR_2 = 1;
 PGresult *VAR_3 = FUNC_1(VAR_0, VAR_2);
 if (!FUNC_3(VAR_3))
 {
  FUNC_2(VAR_0, VAR_3, VAR_2);
 }

 FUNC_4(VAR_3);
 FUNC_0(VAR_0);
}
