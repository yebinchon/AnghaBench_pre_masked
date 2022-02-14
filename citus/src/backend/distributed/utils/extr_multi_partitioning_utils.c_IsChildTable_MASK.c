
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ inhrelid; } ;
typedef int * SysScanDesc ;
typedef int ScanKeyData ;
typedef int * Relation ;
typedef scalar_t__ Oid ;
typedef int * HeapTuple ;
typedef TYPE_1__* Form_pg_inherits ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int * FUNC_5 (int ,int ) ;
 int * FUNC_6 (int *,int ,int,int *,int,int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;

bool
FUNC_9(Oid VAR_6)
{
 Relation VAR_7 = ((void*)0);
 SysScanDesc VAR_8 = ((void*)0);
 ScanKeyData VAR_9[1];
 HeapTuple VAR_10 = ((void*)0);
 bool VAR_11 = 0;

 VAR_7 = FUNC_5(VAR_4, VAR_0);

 FUNC_3(&VAR_9[0], VAR_1,
    VAR_2, VAR_3,
    FUNC_1(VAR_6));

 VAR_8 = FUNC_6(VAR_7, VAR_5, 0,
         ((void*)0), 1, VAR_9);

 while ((VAR_10 = FUNC_8(VAR_8)) != ((void*)0))
 {
  Oid VAR_12 =
   ((Form_pg_inherits) FUNC_0(VAR_10))->inhrelid;

  if (VAR_6 == VAR_12)
  {
   VAR_11 = 1;
   break;
  }
 }

 FUNC_7(VAR_8);
 FUNC_4(VAR_7, VAR_0);

 if (VAR_11 && FUNC_2(VAR_6))
 {
  VAR_11 = 0;
 }

 return VAR_11;
}
