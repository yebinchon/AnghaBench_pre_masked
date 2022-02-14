
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int pronamespace; int proname; } ;
struct TYPE_9__ {int objargs; int args_unspecified; int objname; } ;
struct TYPE_8__ {int addCatalog; int schemas; } ;
typedef int StringInfo ;
typedef TYPE_1__ OverrideSearchPath ;
typedef int Oid ;
typedef TYPE_2__ ObjectWithArgs ;
typedef int ObjectType ;
typedef int HeapTuple ;
typedef TYPE_3__* Form_pg_proc ;
typedef int Datum ;


 int VAR_0 ;
 int FUNC_0 (int ,char**,char**) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (int ,TYPE_2__*,int) ;
 int VAR_2 ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_3 ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 char* FUNC_13 (int ) ;
 char* FUNC_14 (int ) ;
 int FUNC_15 (int ,char*,char const*) ;
 int FUNC_16 (int ,char*) ;
 char* FUNC_17 (int ) ;
 int VAR_4 ;
 char* FUNC_18 (char*) ;
 char* FUNC_19 (char*,char*) ;

__attribute__((used)) static void
FUNC_20(StringInfo VAR_5, ObjectWithArgs *VAR_6, ObjectType VAR_7)
{
 Oid VAR_8 = VAR_1;
 HeapTuple VAR_9;
 char *VAR_10 = ((void*)0);
 char *VAR_11 = ((void*)0);
 char *VAR_12;

 VAR_8 = FUNC_5(VAR_7, VAR_6, 1);
 VAR_9 = FUNC_12(VAR_3, FUNC_7(VAR_8));

 if (!FUNC_4(VAR_9))
 {






  FUNC_0(VAR_6->objname, &VAR_11, &VAR_10);
 }
 else
 {
  Form_pg_proc VAR_13;

  VAR_13 = (Form_pg_proc) FUNC_2(VAR_9);
  VAR_10 = FUNC_6(VAR_13->proname);
  VAR_10 = FUNC_18(VAR_10);
  VAR_11 = FUNC_17(VAR_13->pronamespace);

  FUNC_11(VAR_9);
 }

 VAR_12 = FUNC_19(VAR_11, VAR_10);
 FUNC_16(VAR_5, VAR_12);

 if (FUNC_8(VAR_8))
 {




  OverrideSearchPath *VAR_14 = ((void*)0);
  Datum VAR_15 = 0;
  const char *VAR_16 = ((void*)0);






  VAR_14 = FUNC_3(VAR_0);
  VAR_14->schemas = VAR_2;
  VAR_14->addCatalog = 1;

  FUNC_10(VAR_14);

  VAR_15 = FUNC_1(VAR_4,
             FUNC_7(VAR_8));


  FUNC_9();

  VAR_16 = FUNC_13(VAR_15);
  FUNC_15(VAR_5, "(%s)", VAR_16);
 }
 else if (!VAR_6->args_unspecified)
 {






  const char *VAR_17 = ((void*)0);

  VAR_17 = FUNC_14(VAR_6->objargs);
  FUNC_15(VAR_5, "(%s)", VAR_17);
 }





}
