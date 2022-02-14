
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xenbus_transaction {int id; } ;
struct TYPE_2__ {int transaction_mutex; } ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int *,int ) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (int ,int ,char*,int *) ;
 TYPE_1__ VAR_2 ;

int FUNC_7(struct xenbus_transaction *VAR_3)
{
 char *VAR_4;

 FUNC_2(&VAR_2.transaction_mutex);

 VAR_4 = FUNC_6(VAR_0, VAR_1, "", ((void*)0));
 if (FUNC_0(VAR_4)) {
  FUNC_5(&VAR_2.transaction_mutex);
  return FUNC_1(VAR_4);
 }

 VAR_3->id = FUNC_4(VAR_4, ((void*)0), 0);
 FUNC_3(VAR_4);
 return 0;
}
