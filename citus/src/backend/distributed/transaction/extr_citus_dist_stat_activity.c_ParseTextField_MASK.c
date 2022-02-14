
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int text ;
typedef int PGresult ;
typedef int Datum ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int *,int,int) ;
 char* FUNC_4 (int *,int,int) ;
 int VAR_0 ;

__attribute__((used)) static text *
FUNC_5(PGresult *VAR_1, int VAR_2, int VAR_3)
{
 char *VAR_4 = ((void*)0);
 Datum VAR_5 = 0;
 Datum VAR_6 = 0;

 if (FUNC_3(VAR_1, VAR_2, VAR_3))
 {
  return ((void*)0);
 }

 VAR_4 = FUNC_4(VAR_1, VAR_2, VAR_3);
 VAR_5 = FUNC_0(VAR_4);
 VAR_6 = FUNC_2(VAR_0, VAR_5);

 return (text *) FUNC_1(VAR_6);
}
