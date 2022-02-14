
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint64 ;
typedef int int32 ;
struct TYPE_11__ {char* workerName; int workerPort; int groupId; } ;
typedef TYPE_1__ WorkerNode ;
typedef int * TupleDesc ;
struct TYPE_13__ {int t_self; } ;
struct TYPE_12__ {int * pgConn; } ;
typedef int * SysScanDesc ;
typedef int ScanKeyData ;
typedef int * Relation ;
typedef TYPE_2__ MultiConnection ;
typedef int * MemoryContext ;
typedef int List ;
typedef TYPE_3__* HeapTuple ;
typedef int HTAB ;
typedef int HASH_SEQ_STATUS ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 () ;
 int * FUNC_1 (int ,char*,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_8 ;
 TYPE_2__* FUNC_4 (int,char*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,char*) ;
 int * FUNC_8 (int *,int,int) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 int VAR_11 ;
 int * VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_11 (int *) ;
 int * FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*,char*,int) ;
 int * FUNC_14 (int *) ;
 int FUNC_15 (int *,int ,int ,int ,int ) ;
 int VAR_14 ;
 char* FUNC_16 (int ) ;
 int VAR_15 ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (char*,char*,int) ;
 int FUNC_19 (int *,char*,int ,int*) ;
 int FUNC_20 (int *,int *) ;
 char* FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *,int ) ;
 int FUNC_24 (TYPE_3__*,int ,int *,int*) ;
 int * FUNC_25 (int ,int ) ;
 int FUNC_26 (int *,int *) ;
 int * FUNC_27 (int *,int ,int,int *,int,int *) ;
 int FUNC_28 (int *) ;
 TYPE_3__* FUNC_29 (int *) ;

__attribute__((used)) static int
FUNC_30(WorkerNode *VAR_16)
{
 int VAR_17 = 0;

 int32 VAR_18 = VAR_16->groupId;
 char *VAR_19 = VAR_16->workerName;
 int VAR_20 = VAR_16->workerPort;

 List *VAR_21 = VAR_12;
 HTAB *VAR_22 = ((void*)0);

 List *VAR_23 = VAR_12;
 HTAB *VAR_24 = ((void*)0);
 List *VAR_25 = VAR_12;
 HTAB *VAR_26 = ((void*)0);

 Relation VAR_27 = ((void*)0);
 SysScanDesc VAR_28 = ((void*)0);
 ScanKeyData VAR_29[1];
 int VAR_30 = 1;
 bool VAR_31 = 1;
 HeapTuple VAR_32 = ((void*)0);
 TupleDesc VAR_33 = ((void*)0);

 HASH_SEQ_STATUS VAR_34;

 MemoryContext VAR_35 = ((void*)0);
 MemoryContext VAR_36 = ((void*)0);
 bool VAR_37 = 0;

 int VAR_38 = 0;
 MultiConnection *VAR_39 = FUNC_4(VAR_38, VAR_19, VAR_20);
 if (VAR_39->pgConn == ((void*)0) || FUNC_11(VAR_39->pgConn) != VAR_6)
 {
  FUNC_17(VAR_15, (FUNC_18("transaction recovery cannot connect to %s:%d",
         VAR_19, VAR_20)));

  return 0;
 }

 VAR_35 = FUNC_1(VAR_7,
             "RecoverWorkerTransactions",
             VAR_2,
             VAR_0,
             VAR_1);

 VAR_36 = FUNC_10(VAR_35);


 VAR_27 = FUNC_25(FUNC_3(), VAR_14);
 VAR_33 = FUNC_14(VAR_27);
 VAR_23 = FUNC_12(VAR_39);
 VAR_24 = FUNC_8(VAR_23, VAR_11, 1);


 VAR_21 = FUNC_0();
 VAR_22 = FUNC_8(VAR_21,
              sizeof(uint64), 0);


 FUNC_15(&VAR_29[0], VAR_4,
    VAR_5, VAR_8, FUNC_6(VAR_18));


 VAR_28 = FUNC_27(VAR_27,
          FUNC_2(), VAR_31,
          ((void*)0), VAR_30, VAR_29);


 VAR_25 = FUNC_12(VAR_39);
 VAR_26 = FUNC_8(VAR_25, VAR_11, 1);

 while (FUNC_5(VAR_32 = FUNC_29(VAR_28)))
 {
  bool VAR_40 = 0;
  bool VAR_41 = 0;
  bool VAR_42 = 0;
  bool VAR_43 = 0;

  Datum VAR_44 = FUNC_24(VAR_32,
              VAR_3,
              VAR_33, &VAR_40);
  char *VAR_45 = FUNC_16(VAR_44);

  VAR_41 = FUNC_7(VAR_22,
                VAR_45);
  if (VAR_41)
  {





   continue;
  }





  FUNC_19(VAR_24, VAR_45, VAR_10,
     &VAR_42);

  FUNC_19(VAR_26, VAR_45, VAR_9,
     &VAR_43);

  if (VAR_42 && VAR_43)
  {
   bool VAR_46 = 1;
   bool VAR_47 = FUNC_13(VAR_39,
                   VAR_45,
                   VAR_46);
   if (!VAR_47)
   {





    VAR_37 = 1;
    break;
   }

   VAR_17++;





  }
  else if (VAR_43)
  {
   continue;
  }
  else
  {
  }

  FUNC_26(VAR_27, &VAR_32->t_self);
 }

 FUNC_28(VAR_28);
 FUNC_23(VAR_27, VAR_13);

 if (!VAR_37)
 {
  char *VAR_48 = ((void*)0);
  bool VAR_49 = 1;






  FUNC_20(&VAR_34, VAR_24);

  while ((VAR_48 = FUNC_21(&VAR_34)) != ((void*)0))
  {
   bool VAR_50 = 0;
   bool VAR_51 = 0;

   VAR_50 = FUNC_7(VAR_22,
                 VAR_48);
   if (VAR_50)
   {
    continue;
   }

   VAR_51 = 0;
   VAR_49 = FUNC_13(VAR_39,
                VAR_48,
                VAR_51);
   if (!VAR_49)
   {
    FUNC_22(&VAR_34);
    break;
   }

   VAR_17++;
  }
 }

 FUNC_10(VAR_36);
 FUNC_9(VAR_35);

 return VAR_17;
}
