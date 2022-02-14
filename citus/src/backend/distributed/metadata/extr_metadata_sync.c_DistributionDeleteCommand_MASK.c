
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* data; } ;
typedef TYPE_1__* StringInfo ;


 int FUNC_0 (TYPE_1__*,char*,int ) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char*) ;

char *
FUNC_4(char *VAR_0, char *VAR_1)
{
 char *VAR_2 = ((void*)0);
 StringInfo VAR_3 = FUNC_1();

 VAR_2 = FUNC_3(VAR_0, VAR_1);

 FUNC_0(VAR_3,
      "SELECT worker_drop_distributed_table(%s)",
      FUNC_2(VAR_2));

 return VAR_3->data;
}
