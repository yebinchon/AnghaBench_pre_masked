
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RawStmt ;
typedef int Query ;
typedef int Oid ;
typedef int List ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,char const*,int *,int,int *) ;

Query *
FUNC_6(const char *VAR_1, Oid *VAR_2, int VAR_3)
{
 Query *VAR_4 = ((void*)0);
 RawStmt *VAR_5 = (RawStmt *) FUNC_0(VAR_1);
 List *VAR_6 =
  FUNC_5(VAR_5, VAR_1, VAR_2, VAR_3, ((void*)0));

 if (FUNC_4(VAR_6) != 1)
 {
  FUNC_1(VAR_0, (FUNC_2("can only execute a single query")));
 }

 VAR_4 = (Query *) FUNC_3(VAR_6);

 return VAR_4;
}
