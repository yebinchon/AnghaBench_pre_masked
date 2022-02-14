
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ extensionOwner; } ;
struct TYPE_3__ {scalar_t__ extowner; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int * Relation ;
typedef scalar_t__ Oid ;
typedef int * HeapTuple ;
typedef TYPE_1__* Form_pg_extension ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ VAR_8 ;
 TYPE_2__ VAR_9 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *,int ) ;
 int * FUNC_10 (int ,int ) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int *,int ,int,int *,int,int *) ;
 int FUNC_13 (int ) ;
 int * FUNC_14 (int ) ;

extern Oid
FUNC_15(void)
{
 Relation VAR_10 = ((void*)0);
 SysScanDesc VAR_11;
 ScanKeyData VAR_12[1];
 HeapTuple VAR_13 = ((void*)0);
 Form_pg_extension VAR_14 = ((void*)0);

 if (VAR_9.extensionOwner != VAR_8)
 {
  return VAR_9.extensionOwner;
 }

 VAR_10 = FUNC_10(VAR_6, VAR_0);

 FUNC_5(&VAR_12[0],
    VAR_1,
    VAR_2, VAR_7,
    FUNC_1("citus"));

 VAR_11 = FUNC_12(VAR_10, VAR_5, 1,
          ((void*)0), 1, VAR_12);

 VAR_13 = FUNC_14(VAR_11);


 if (FUNC_3(VAR_13))
 {
  VAR_14 = (Form_pg_extension) FUNC_2(VAR_13);
  if (!FUNC_11(VAR_14->extowner))
  {
   FUNC_6(VAR_4, (FUNC_7(VAR_3),
       FUNC_8("citus extension needs to be owned by superuser")));
  }
  VAR_9.extensionOwner = VAR_14->extowner;
  FUNC_0(FUNC_4(VAR_9.extensionOwner));
 }
 else
 {
  FUNC_6(VAR_4, (FUNC_7(VAR_3),
      FUNC_8("citus extension not loaded")));
 }

 FUNC_13(VAR_11);

 FUNC_9(VAR_10, VAR_0);

 return VAR_9.extensionOwner;
}
