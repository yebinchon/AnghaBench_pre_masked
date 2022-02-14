
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int StringInfo ;
typedef int PGresult ;
typedef int MultiConnection ;
typedef scalar_t__ ExecStatusType ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int) ;
 char* FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ,char*,...) ;

__attribute__((used)) static bool
FUNC_8(MultiConnection *VAR_2, PGresult *VAR_3,
     StringInfo VAR_4)
{
 bool VAR_5 = 0;

 ExecStatusType VAR_6 = FUNC_5(VAR_3);
 if (VAR_6 == VAR_0)
 {
  char *VAR_7 = FUNC_0(VAR_3);
  FUNC_7(VAR_4, "%s", VAR_7);
  VAR_5 = 1;
 }
 else if (VAR_6 == VAR_1)
 {
  int VAR_8 = FUNC_4(VAR_3);
  int VAR_9 = FUNC_3(VAR_3);


  if (VAR_9 != 1)
  {
   FUNC_7(VAR_4,
        "expected a single column in query target");
  }
  else if (VAR_8 > 1)
  {
   FUNC_7(VAR_4,
        "expected a single row in query result");
  }
  else
  {
   int VAR_10 = 0;
   int VAR_11 = 0;
   if (!FUNC_1(VAR_3, VAR_10, VAR_11))
   {
    char *VAR_12 = FUNC_2(VAR_3, VAR_10, VAR_11);
    FUNC_7(VAR_4, "%s", VAR_12);
   }
   VAR_5 = 1;
  }
 }
 else
 {
  FUNC_6(VAR_2, VAR_4);
 }

 return VAR_5;
}
