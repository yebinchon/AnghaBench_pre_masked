
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xenbus_transaction {int dummy; } ;
struct TYPE_2__ {int transaction_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct xenbus_transaction,int ,char*,int *) ;
 TYPE_1__ VAR_1 ;

int FUNC_4(struct xenbus_transaction VAR_2, int VAR_3)
{
 char VAR_4[2];
 int VAR_5;

 if (VAR_3)
  FUNC_0(VAR_4, "F");
 else
  FUNC_0(VAR_4, "T");

 VAR_5 = FUNC_2(FUNC_3(VAR_2, VAR_0, VAR_4, ((void*)0)));

 FUNC_1(&VAR_1.transaction_mutex);

 return VAR_5;
}
