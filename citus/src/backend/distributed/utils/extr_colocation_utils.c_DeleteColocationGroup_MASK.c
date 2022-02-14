
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_4__ {int t_self; } ;
typedef int * SysScanDesc ;
typedef int ScanKeyData ;
typedef int * Relation ;
typedef TYPE_1__* HeapTuple ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int VAR_5 ;
 int FUNC_5 (int *,int ,int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ) ;
 int * FUNC_8 (int ,int ) ;
 int * FUNC_9 (int ,int ) ;
 int FUNC_10 (int *,int *) ;
 int * FUNC_11 (int *,int ,int,int *,int,int *) ;
 int FUNC_12 (int *) ;
 TYPE_1__* FUNC_13 (int *) ;

__attribute__((used)) static void
FUNC_14(uint32 VAR_6)
{
 Relation VAR_7 = ((void*)0);
 SysScanDesc VAR_8 = ((void*)0);
 int VAR_9 = 1;
 ScanKeyData VAR_10[1];
 bool VAR_11 = 0;
 HeapTuple VAR_12 = ((void*)0);

 VAR_7 = FUNC_8(FUNC_2(), VAR_5);

 FUNC_5(&VAR_10[0], VAR_1,
    VAR_2, VAR_3, FUNC_6(VAR_6));

 VAR_8 = FUNC_11(VAR_7, VAR_4, VAR_11,
          ((void*)0), VAR_9, VAR_10);


 VAR_12 = FUNC_13(VAR_8);
 if (FUNC_3(VAR_12))
 {




  Relation VAR_13 =
   FUNC_9(FUNC_4(VAR_7),
        VAR_0);
  FUNC_10(VAR_7, &(VAR_12->t_self));

  FUNC_0(FUNC_2());
  FUNC_1();
  FUNC_7(VAR_13, VAR_0);
 }

 FUNC_12(VAR_8);
 FUNC_7(VAR_7, VAR_5);
}
