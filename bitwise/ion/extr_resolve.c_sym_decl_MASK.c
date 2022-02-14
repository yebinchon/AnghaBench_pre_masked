
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int kind; int name; } ;
typedef int SymKind ;
typedef int Sym ;
typedef TYPE_1__ Decl ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int * FUNC_3 (int ,int ,TYPE_1__*) ;

Sym *FUNC_4(Decl *VAR_5) {
    SymKind VAR_6 = VAR_2;
    switch (VAR_5->kind) {
    case 131:
    case 129:
    case 130:
    case 133:
        VAR_6 = VAR_3;
        break;
    case 128:
        VAR_6 = VAR_4;
        break;
    case 134:
        VAR_6 = VAR_0;
        break;
    case 132:
        VAR_6 = VAR_1;
        break;
    default:
        FUNC_0(0);
        break;
    }
    Sym *VAR_7 = FUNC_3(VAR_6, VAR_5->name, VAR_5);
    FUNC_2(VAR_5, VAR_7);
    FUNC_1(VAR_5, VAR_7);
    return VAR_7;
}
