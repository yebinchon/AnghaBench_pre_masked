
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
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,char*,char*,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,char*) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 char* FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 () ;

char *
FUNC_8(Oid VAR_2)
{
 StringInfo VAR_3 = FUNC_7();
 Oid VAR_4 = VAR_1;
 char *VAR_5 = ((void*)0);
 char *VAR_6 = ((void*)0);

 if (!FUNC_0(VAR_2))
 {
  char *VAR_7 = FUNC_6(VAR_2);

  FUNC_2(VAR_0, (FUNC_3("\"%s\" is not a partition", VAR_7)));
 }

 VAR_4 = FUNC_5(VAR_2);
 VAR_5 = FUNC_4(VAR_2);
 VAR_6 = FUNC_4(VAR_4);

 FUNC_1(VAR_3,
      "ALTER TABLE IF EXISTS %s DETACH PARTITION %s;",
      VAR_6, VAR_5);

 return VAR_3->data;
}
