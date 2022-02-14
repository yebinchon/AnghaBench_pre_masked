
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_transaction {int dummy; } ;


 scalar_t__ FUNC_0 (char**) ;
 int FUNC_1 (char**) ;
 char** FUNC_2 (struct xenbus_transaction,char const*,char const*,int*) ;

int FUNC_3(struct xenbus_transaction VAR_0,
    const char *VAR_1, const char *VAR_2)
{
 char **VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2, &VAR_4);
 if (FUNC_0(VAR_3))
  return 0;
 FUNC_1(VAR_3);
 return 1;
}
