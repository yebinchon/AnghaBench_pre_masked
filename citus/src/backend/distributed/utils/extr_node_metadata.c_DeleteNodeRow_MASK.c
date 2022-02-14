
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_4__ {int t_self; } ;
typedef int * SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef TYPE_1__* HeapTuple ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int ) ;
 int VAR_9 ;
 int FUNC_7 (int *,int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*,char*,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int *) ;
 int * FUNC_14 (int ,int ,int,int *,int const,int *) ;
 int FUNC_15 (int *) ;
 TYPE_1__* FUNC_16 (int *) ;

__attribute__((used)) static void
FUNC_17(char *VAR_10, int32 VAR_11)
{
 const int VAR_12 = 2;
 bool VAR_13 = 0;

 HeapTuple VAR_14 = ((void*)0);
 SysScanDesc VAR_15 = ((void*)0);
 ScanKeyData VAR_16[2];
 Relation VAR_17 = FUNC_11(FUNC_3(), VAR_9);





 Relation VAR_18 = FUNC_12(FUNC_6(VAR_17),
            VAR_0);

 FUNC_7(&VAR_16[0], VAR_1,
    VAR_3, VAR_6, FUNC_0(VAR_10));
 FUNC_7(&VAR_16[1], VAR_2,
    VAR_3, VAR_5, FUNC_5(VAR_11));

 VAR_15 = FUNC_14(VAR_17, VAR_7, VAR_13,
          ((void*)0), VAR_12, VAR_16);

 VAR_14 = FUNC_16(VAR_15);

 if (!FUNC_4(VAR_14))
 {
  FUNC_8(VAR_4, (FUNC_9("could not find valid entry for node \"%s:%d\"",
          VAR_10, VAR_11)));
 }

 FUNC_13(VAR_17, &(VAR_14->t_self));

 FUNC_15(VAR_15);


 FUNC_1(FUNC_3());


 FUNC_2();

 FUNC_10(VAR_18, VAR_0);
 FUNC_10(VAR_17, VAR_8);
}
