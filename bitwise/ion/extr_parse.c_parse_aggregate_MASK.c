
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pos; } ;
typedef int SrcPos ;
typedef int AggregateKind ;
typedef int AggregateItem ;
typedef int Aggregate ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int * FUNC_5 (int ,int ,int *,int ) ;
 int FUNC_6 () ;
 TYPE_1__ VAR_2 ;

Aggregate *FUNC_7(AggregateKind VAR_3) {
    SrcPos VAR_4 = VAR_2.pos;
    FUNC_2(VAR_0);
    AggregateItem *VAR_5 = ((void*)0);
    while (!FUNC_4() && !FUNC_3(VAR_1)) {
        FUNC_1(VAR_5, FUNC_6());
    }
    FUNC_2(VAR_1);
    return FUNC_5(VAR_4, VAR_3, VAR_5, FUNC_0(VAR_5));
}
