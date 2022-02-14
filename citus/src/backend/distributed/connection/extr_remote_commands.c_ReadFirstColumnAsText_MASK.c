
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64 ;
typedef int StringInfo ;
typedef int PGresult ;
typedef int List ;
typedef scalar_t__ ExecStatusType ;


 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (int *,scalar_t__,int const) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int * FUNC_4 (int *,int ) ;
 int FUNC_5 () ;

List *
FUNC_6(PGresult *VAR_2)
{
 List *VAR_3 = VAR_0;
 const int VAR_4 = 0;
 int64 VAR_5 = 0;
 int64 VAR_6 = 0;

 ExecStatusType VAR_7 = FUNC_2(VAR_2);
 if (VAR_7 == VAR_1)
 {
  VAR_6 = FUNC_1(VAR_2);
 }

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
 {
  char *VAR_8 = FUNC_0(VAR_2, VAR_5, VAR_4);

  StringInfo VAR_9 = FUNC_5();
  FUNC_3(VAR_9, VAR_8);

  VAR_3 = FUNC_4(VAR_3, VAR_9);
 }

 return VAR_3;
}
