
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* data; } ;
typedef TYPE_1__* StringInfo ;
typedef int Oid ;


 int FUNC_0 (TYPE_1__*,char*,int ) ;
 char* FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (char*) ;

__attribute__((used)) static char *
FUNC_4(Oid VAR_0)
{
 StringInfo VAR_1 = FUNC_2();
 char *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_1,
      "SELECT worker_create_truncate_trigger(%s)",
      FUNC_3(VAR_2));

 return VAR_1->data;
}
