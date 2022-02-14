
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int data; } ;
struct TYPE_8__ {scalar_t__ contype; TYPE_1__ conname; int conparentid; } ;
struct TYPE_7__ {int addCatalog; void* schemas; } ;
typedef int * SysScanDesc ;
typedef int ScanKeyData ;
typedef int * Relation ;
typedef TYPE_2__ OverrideSearchPath ;
typedef int Oid ;
typedef int List ;
typedef int * HeapTuple ;
typedef TYPE_3__* Form_pg_constraint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 void* VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *,int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int *,int ) ;
 int * FUNC_9 (int ,int ) ;
 int * FUNC_10 (int *,char*) ;
 char* FUNC_11 (int ) ;
 int * FUNC_12 (int *,int ,int,int *,int,int *) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int *) ;

List *
FUNC_15(Oid VAR_9)
{
 List *VAR_10 = VAR_8;

 Relation VAR_11 = ((void*)0);
 SysScanDesc VAR_12 = ((void*)0);
 ScanKeyData VAR_13[1];
 int VAR_14 = 1;
 HeapTuple VAR_15 = ((void*)0);






 OverrideSearchPath *VAR_16 = FUNC_1(VAR_6);
 VAR_16->schemas = VAR_8;
 VAR_16->addCatalog = 1;
 FUNC_5(VAR_16);


 VAR_11 = FUNC_9(VAR_4, VAR_0);
 FUNC_6(&VAR_13[0], VAR_1, VAR_2, VAR_7,
    VAR_9);
 VAR_12 = FUNC_12(VAR_11, VAR_5,
          1, ((void*)0),
          VAR_14, VAR_13);

 VAR_15 = FUNC_14(VAR_12);
 while (FUNC_2(VAR_15))
 {
  Form_pg_constraint VAR_17 = (Form_pg_constraint) FUNC_0(VAR_15);

  bool VAR_18 = FUNC_3(VAR_17->conparentid);

  if (!VAR_18 && VAR_17->contype == VAR_3)
  {
   Oid VAR_19 = FUNC_7(VAR_9,
                 VAR_17->conname.data,
                 1);
   char *VAR_20 = FUNC_11(VAR_19);

   VAR_10 = FUNC_10(VAR_10, VAR_20);
  }

  VAR_15 = FUNC_14(VAR_12);
 }


 FUNC_13(VAR_12);
 FUNC_8(VAR_11, VAR_0);


 FUNC_4();

 return VAR_10;
}
