
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ prokind; int proowner; } ;
struct TYPE_9__ {int addCatalog; int schemas; } ;
struct TYPE_8__ {char* data; } ;
typedef TYPE_1__* StringInfo ;
typedef int RegProcedure ;
typedef TYPE_2__ OverrideSearchPath ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_3__* Form_pg_proc ;
typedef int Datum ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int ) ;
 char* FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int const) ;
 int FUNC_7 (int const) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (TYPE_1__*,char*,char*,char*,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (char*,int const) ;
 TYPE_1__* FUNC_15 () ;
 int FUNC_16 (char*) ;
 int VAR_7 ;

__attribute__((used)) static char *
FUNC_17(const RegProcedure VAR_8)
{
 HeapTuple VAR_9 = FUNC_11(VAR_4, FUNC_6(VAR_8));
 StringInfo VAR_10 = FUNC_15();
 char *VAR_11 = "FUNCTION";
 Oid VAR_12 = VAR_2;

 char *VAR_13 = ((void*)0);
 char *VAR_14 = ((void*)0);

 OverrideSearchPath *VAR_15 = ((void*)0);
 Datum VAR_16 = 0;

 if (FUNC_5(VAR_9))
 {
  Form_pg_proc VAR_17;

  VAR_17 = (Form_pg_proc) FUNC_2(VAR_9);

  VAR_12 = VAR_17->proowner;

  if (VAR_17->prokind == VAR_6)
  {
   VAR_11 = "PROCEDURE";
  }
  else if (VAR_17->prokind == VAR_5)
  {
   VAR_11 = "AGGREGATE";
  }

  FUNC_10(VAR_9);
 }
 else if (!FUNC_7(VAR_8) || !FUNC_5(VAR_9))
 {
  FUNC_13(VAR_1, (FUNC_14("cannot find function with oid: %d", VAR_8)));
 }






 VAR_15 = FUNC_3(VAR_0);
 VAR_15->schemas = VAR_3;
 VAR_15->addCatalog = 1;

 FUNC_9(VAR_15);





 VAR_16 =
  FUNC_1(VAR_7, FUNC_6(VAR_8));


 FUNC_8();


 VAR_13 = FUNC_0(VAR_16);

 VAR_14 = FUNC_4(VAR_12, 0);

 FUNC_12(VAR_10, "ALTER %s %s OWNER TO %s;",
      VAR_11,
      VAR_13,
      FUNC_16(VAR_14));

 return VAR_10->data;
}
