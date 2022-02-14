
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ contype; int confrelid; } ;
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
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 (int ,int ) ;
 int * FUNC_7 (int *,int ,int,int *,int,int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;

bool
FUNC_10(Oid VAR_10)
{
 Relation VAR_11 = ((void*)0);
 SysScanDesc VAR_12 = ((void*)0);
 ScanKeyData VAR_13[1];
 int VAR_14 = 1;
 HeapTuple VAR_15 = ((void*)0);
 bool VAR_16 = 0;

 VAR_11 = FUNC_6(VAR_4, VAR_0);
 FUNC_4(&VAR_13[0], VAR_1, VAR_2, VAR_7,
    VAR_10);
 VAR_12 = FUNC_7(VAR_11, VAR_5,
          1, ((void*)0),
          VAR_14, VAR_13);

 VAR_15 = FUNC_9(VAR_12);
 while (FUNC_1(VAR_15))
 {
  Oid VAR_17 = VAR_8;
  Form_pg_constraint VAR_18 = (Form_pg_constraint) FUNC_0(VAR_15);

  if (VAR_18->contype != VAR_3)
  {
   VAR_15 = FUNC_9(VAR_12);
   continue;
  }

  VAR_17 = VAR_18->confrelid;

  if (!FUNC_2(VAR_17))
  {
   continue;
  }

  if (FUNC_3(VAR_17) == VAR_6)
  {
   VAR_16 = 1;
   break;
  }

  VAR_15 = FUNC_9(VAR_12);
 }


 FUNC_8(VAR_12);
 FUNC_5(VAR_11, VAR_9);
 return VAR_16;
}
