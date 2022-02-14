
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int is_incomplete; } ;
typedef int SrcPos ;
typedef scalar_t__ DeclKind ;
typedef TYPE_1__ Decl ;
typedef int AggregateKind ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *,int ) ;
 TYPE_1__* FUNC_3 (int ,scalar_t__,char const*,int ) ;
 int FUNC_4 (int ) ;
 char* FUNC_5 () ;

Decl *FUNC_6(SrcPos VAR_5, DeclKind VAR_6) {
    FUNC_0(VAR_6 == VAR_2 || VAR_6 == VAR_3);
    const char *VAR_7 = FUNC_5();
    AggregateKind VAR_8 = VAR_6 == VAR_2 ? VAR_0 : VAR_1;
    if (FUNC_1(VAR_4)) {
        Decl *VAR_9 = FUNC_3(VAR_5, VAR_6, VAR_7, FUNC_2(VAR_5, VAR_8, ((void*)0), 0));
        VAR_9->is_incomplete = 1;
        return VAR_9;
    } else {
        return FUNC_3(VAR_5, VAR_6, VAR_7, FUNC_4(VAR_8));
    }
}
