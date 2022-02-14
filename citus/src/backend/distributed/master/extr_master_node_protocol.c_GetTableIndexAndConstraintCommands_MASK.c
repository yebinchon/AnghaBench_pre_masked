
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ indexrelid; scalar_t__ indisclustered; scalar_t__ indisexclusion; scalar_t__ indisunique; scalar_t__ indisprimary; } ;
struct TYPE_5__ {int addCatalog; void* schemas; } ;
typedef int * SysScanDesc ;
typedef int ScanKeyData ;
typedef int * Relation ;
typedef TYPE_1__ OverrideSearchPath ;
typedef scalar_t__ Oid ;
typedef int List ;
typedef int * HeapTuple ;
typedef TYPE_2__* Form_pg_index ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,int ,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *,int ) ;
 int * FUNC_10 (int ,int ) ;
 int * FUNC_11 (int *,char*) ;
 char* FUNC_12 (scalar_t__) ;
 char* FUNC_13 (scalar_t__) ;
 char* FUNC_14 (scalar_t__) ;
 int * FUNC_15 (int *,int ,int,int *,int,int *) ;
 int FUNC_16 (int *) ;
 int * FUNC_17 (int *) ;

List *
FUNC_18(Oid VAR_9)
{
 List *VAR_10 = VAR_8;
 Relation VAR_11 = ((void*)0);
 SysScanDesc VAR_12 = ((void*)0);
 ScanKeyData VAR_13[1];
 int VAR_14 = 1;
 HeapTuple VAR_15 = ((void*)0);






 OverrideSearchPath *VAR_16 = FUNC_2(VAR_3);
 VAR_16->schemas = VAR_8;
 VAR_16->addCatalog = 1;
 FUNC_6(VAR_16);


 VAR_11 = FUNC_10(VAR_6, VAR_0);

 FUNC_7(&VAR_13[0], VAR_1,
    VAR_2, VAR_4, VAR_9);

 VAR_12 = FUNC_15(VAR_11,
          VAR_5, 1,
          ((void*)0), VAR_14, VAR_13);

 VAR_15 = FUNC_17(VAR_12);
 while (FUNC_3(VAR_15))
 {
  Form_pg_index VAR_17 = (Form_pg_index) FUNC_1(VAR_15);
  Oid VAR_18 = VAR_17->indexrelid;
  bool VAR_19 = 0;
  char *VAR_20 = ((void*)0);







  if (VAR_17->indisprimary)
  {
   VAR_19 = 1;
  }
  else if (VAR_17->indisunique || VAR_17->indisexclusion)
  {
   Oid VAR_21 = FUNC_8(VAR_18);
   VAR_19 = FUNC_4(VAR_21);
  }
  else
  {
   VAR_19 = 0;
  }


  if (VAR_19)
  {
   Oid VAR_22 = FUNC_8(VAR_18);
   FUNC_0(VAR_22 != VAR_7);

   VAR_20 = FUNC_12(VAR_22);
  }
  else
  {
   VAR_20 = FUNC_14(VAR_18);
  }


  VAR_10 = FUNC_11(VAR_10, VAR_20);


  if (VAR_17->indisclustered)
  {
   char *VAR_23 = FUNC_13(VAR_18);
   FUNC_0(VAR_23 != ((void*)0));

   VAR_10 = FUNC_11(VAR_10, VAR_23);
  }

  VAR_15 = FUNC_17(VAR_12);
 }


 FUNC_16(VAR_12);
 FUNC_9(VAR_11, VAR_0);


 FUNC_5();

 return VAR_10;
}
