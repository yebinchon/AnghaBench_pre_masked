
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_transaction {int dummy; } ;


 scalar_t__ FUNC_0 (char*) ;
 int VAR_0 ;
 char* FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char*) ;
 void* FUNC_3 (struct xenbus_transaction,int ,char*,unsigned int*) ;

void *FUNC_4(struct xenbus_transaction VAR_1,
    const char *VAR_2, const char *VAR_3, unsigned int *VAR_4)
{
 char *VAR_5;
 void *VAR_6;

 VAR_5 = FUNC_1(VAR_2, VAR_3);
 if (FUNC_0(VAR_5))
  return (void *)VAR_5;

 VAR_6 = FUNC_3(VAR_1, VAR_0, VAR_5, VAR_4);
 FUNC_2(VAR_5);
 return VAR_6;
}
