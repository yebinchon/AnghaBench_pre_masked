
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ contype; } ;
typedef int * SysScanDesc ;
typedef int ScanKeyData ;
typedef int * Relation ;
typedef int Oid ;
typedef int * HeapTuple ;
typedef TYPE_1__* Form_pg_constraint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,int ,int ,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (int ,int ) ;
 int * FUNC_5 (int *,int ,int,int *,int,int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;

bool
FUNC_8(Oid VAR_8)
{
 Relation VAR_9 = ((void*)0);
 HeapTuple VAR_10 = ((void*)0);
 SysScanDesc VAR_11 = ((void*)0);
 ScanKeyData VAR_12[1];
 int VAR_13 = 1;
 Oid VAR_14 = VAR_6;
 bool VAR_15 = 0;

 VAR_9 = FUNC_4(VAR_4, VAR_0);

 FUNC_2(&VAR_12[0], VAR_1, VAR_2, VAR_5,
    VAR_8);
 VAR_11 = FUNC_5(VAR_9, VAR_14, VAR_15, ((void*)0),
          VAR_13, VAR_12);

 VAR_10 = FUNC_7(VAR_11);
 while (FUNC_1(VAR_10))
 {
  Form_pg_constraint VAR_16 = (Form_pg_constraint) FUNC_0(VAR_10);

  if (VAR_16->contype == VAR_3)
  {
   FUNC_6(VAR_11);
   FUNC_3(VAR_9, VAR_7);

   return 1;
  }

  VAR_10 = FUNC_7(VAR_11);
 }

 FUNC_6(VAR_11);
 FUNC_3(VAR_9, VAR_7);

 return 0;
}
