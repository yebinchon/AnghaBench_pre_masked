
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* data; } ;
typedef TYPE_1__* StringInfo ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*,char*,char*,char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 char* FUNC_7 (int ) ;
 TYPE_1__* FUNC_8 () ;

char *
FUNC_9(Oid VAR_2)
{
 StringInfo VAR_3 = FUNC_8();
 char *VAR_4 = ((void*)0);

 Oid VAR_5 = VAR_1;
 char *VAR_6 = ((void*)0);
 char *VAR_7 = ((void*)0);

 if (!FUNC_1(VAR_2))
 {
  char *VAR_8 = FUNC_7(VAR_2);

  FUNC_3(VAR_0, (FUNC_4("\"%s\" is not a partition", VAR_8)));
 }

 VAR_5 = FUNC_6(VAR_2);
 VAR_6 = FUNC_5(VAR_2);
 VAR_7 = FUNC_5(VAR_5);

 VAR_4 = FUNC_0(VAR_2);

 FUNC_2(VAR_3, "ALTER TABLE %s ATTACH PARTITION %s %s;",
      VAR_7, VAR_6,
      VAR_4);

 return VAR_3->data;
}
