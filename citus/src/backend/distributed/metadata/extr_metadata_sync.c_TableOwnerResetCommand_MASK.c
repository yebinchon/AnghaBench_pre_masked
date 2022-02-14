
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* data; } ;
typedef TYPE_1__* StringInfo ;
typedef int Oid ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,char*,char*,int ) ;
 char* FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (char*) ;

char *
FUNC_5(Oid VAR_0)
{
 StringInfo VAR_1 = FUNC_3();
 char *VAR_2 = FUNC_2(VAR_0);
 char *VAR_3 = FUNC_0(VAR_0);

 FUNC_1(VAR_1,
      "ALTER TABLE %s OWNER TO %s",
      VAR_2,
      FUNC_4(VAR_3));

 return VAR_1->data;
}
