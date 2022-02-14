
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int t_self; } ;
typedef int * SysScanDesc ;
typedef int ScanKeyData ;
typedef int * Relation ;
typedef int Oid ;
typedef TYPE_1__* HeapTuple ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int FUNC_5 (int *,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int *,int ) ;
 int * FUNC_9 (int ,int ) ;
 int FUNC_10 (int *,int *) ;
 int * FUNC_11 (int *,int ,int,int *,int,int *) ;
 int FUNC_12 (int *) ;
 TYPE_1__* FUNC_13 (int *) ;

void
FUNC_14(Oid VAR_7)
{
 Relation VAR_8 = ((void*)0);
 HeapTuple VAR_9 = ((void*)0);
 SysScanDesc VAR_10 = ((void*)0);
 ScanKeyData VAR_11[1];
 int VAR_12 = 1;

 VAR_8 = FUNC_9(FUNC_2(), VAR_6);

 FUNC_5(&VAR_11[0], VAR_0,
    VAR_1, VAR_3, FUNC_4(VAR_7));

 VAR_10 = FUNC_11(VAR_8, VAR_4, 0, ((void*)0),
          VAR_12, VAR_11);

 VAR_9 = FUNC_13(VAR_10);
 if (!FUNC_3(VAR_9))
 {
  FUNC_6(VAR_2, (FUNC_7("could not find valid entry for partition %d",
          VAR_7)));
 }

 FUNC_10(VAR_8, &VAR_9->t_self);

 FUNC_12(VAR_10);


 FUNC_0(VAR_7);


 FUNC_1();

 FUNC_8(VAR_8, VAR_5);
}
