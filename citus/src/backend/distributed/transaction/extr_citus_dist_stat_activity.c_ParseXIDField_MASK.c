
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TransactionId ;
typedef int PGresult ;
typedef int Datum ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int *,int,int) ;
 char* FUNC_4 (int *,int,int) ;
 int VAR_1 ;

__attribute__((used)) static TransactionId
FUNC_5(PGresult *VAR_2, int VAR_3, int VAR_4)
{
 char *VAR_5 = ((void*)0);
 Datum VAR_6 = 0;
 Datum VAR_7 = 0;

 if (FUNC_3(VAR_2, VAR_3, VAR_4))
 {




  return VAR_0;
 }

 VAR_5 = FUNC_4(VAR_2, VAR_3, VAR_4);
 VAR_6 = FUNC_0(VAR_5);
 VAR_7 = FUNC_2(VAR_1, VAR_6);

 return FUNC_1(VAR_7);
}
