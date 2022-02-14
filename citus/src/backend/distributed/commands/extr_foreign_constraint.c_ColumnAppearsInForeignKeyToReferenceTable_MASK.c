
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int conrelid; int confrelid; } ;
typedef int * SysScanDesc ;
typedef int ScanKeyData ;
typedef int * Relation ;
typedef int Oid ;
typedef int * HeapTuple ;
typedef TYPE_1__* Form_pg_constraint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ,int,char*) ;
 int VAR_9 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,int ,int ,int ) ;
 int FUNC_8 (int *,int ) ;
 int * FUNC_9 (int ,int ) ;
 int * FUNC_10 (int *,int ,int,int *,int,int *) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;

bool
FUNC_13(char *VAR_10, Oid VAR_11)
{
 Relation VAR_12 = ((void*)0);
 SysScanDesc VAR_13 = ((void*)0);
 ScanKeyData VAR_14[1];
 int VAR_15 = 1;
 HeapTuple VAR_16 = ((void*)0);
 bool VAR_17 = 0;

 VAR_12 = FUNC_9(VAR_6, VAR_0);

 FUNC_7(&VAR_14[0], VAR_3, VAR_4, VAR_8,
    FUNC_1(VAR_5));

 VAR_13 = FUNC_10(VAR_12, VAR_9, 0,
          ((void*)0), VAR_15, VAR_14);

 VAR_16 = FUNC_12(VAR_13);
 while (FUNC_3(VAR_16))
 {
  Oid VAR_18 = VAR_9;
  Oid VAR_19 = VAR_9;
  int VAR_20 = 0;
  Form_pg_constraint VAR_21 = (Form_pg_constraint) FUNC_2(VAR_16);

  VAR_18 = VAR_21->confrelid;
  VAR_19 = VAR_21->conrelid;

  if (VAR_18 == VAR_11)
  {
   VAR_20 = VAR_1;
  }
  else if (VAR_19 == VAR_11)
  {
   VAR_20 = VAR_2;
  }
  else
  {




   VAR_16 = FUNC_12(VAR_13);
   continue;
  }





  FUNC_0(FUNC_5(VAR_18));
  if (FUNC_6(VAR_18) != VAR_7)
  {
   VAR_16 = FUNC_12(VAR_13);
   continue;
  }

  if (FUNC_4(VAR_16, VAR_11,
                VAR_20, VAR_10))
  {
   VAR_17 = 1;
   break;
  }

  VAR_16 = FUNC_12(VAR_13);
 }


 FUNC_11(VAR_13);
 FUNC_8(VAR_12, VAR_0);
 return VAR_17;
}
