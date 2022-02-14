
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int Typespec ;
struct TYPE_11__ {size_t num_items; TYPE_3__* items; } ;
struct TYPE_14__ {scalar_t__ kind; int notes; TYPE_1__ enum_decl; int pos; scalar_t__ name; } ;
struct TYPE_13__ {char* name; int pos; int * init; } ;
struct TYPE_12__ {char* name; } ;
typedef TYPE_2__ Sym ;
typedef int Expr ;
typedef TYPE_3__ EnumItem ;
typedef TYPE_4__ Decl ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 TYPE_4__* FUNC_0 (int ,char*,int *,int *) ;
 int * FUNC_1 (int ,int ,int ,int *) ;
 int * FUNC_2 (int ,int,int ,int ) ;
 int FUNC_3 (int ,char const*) ;
 int * FUNC_4 (int ,char const**,int) ;
 char* FUNC_5 (char*) ;
 TYPE_2__* FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (char*,TYPE_2__*) ;

Sym *FUNC_8(Decl *VAR_3) {
    Sym *VAR_4 = ((void*)0);
    if (VAR_3->name) {
        VAR_4 = FUNC_6(VAR_3);
        FUNC_7(VAR_4->name, VAR_4);
    }
    if (VAR_3->kind == VAR_0) {
        const char *VAR_5 = VAR_4 ? VAR_4->name : FUNC_5("int");
        Typespec *VAR_6 = VAR_6 = FUNC_4(VAR_3->pos, &VAR_5, 1);
        const char *VAR_7 = ((void*)0);
        for (size_t VAR_8 = 0; VAR_8 < VAR_3->enum_decl.num_items; VAR_8++) {
            EnumItem VAR_9 = VAR_3->enum_decl.items[VAR_8];
            Expr *VAR_10;
            if (VAR_9.init) {
                VAR_10 = VAR_9.init;
            } else if (VAR_7) {
                VAR_10 = FUNC_1(VAR_9.pos, VAR_1, FUNC_3(VAR_9.pos, VAR_7), FUNC_2(VAR_9.pos, 1, 0, 0));
            } else {
                VAR_10 = FUNC_2(VAR_9.pos, 0, 0, 0);
            }
            Decl *VAR_11 = FUNC_0(VAR_9.pos, VAR_9.name, VAR_6, VAR_10);
            VAR_11->notes = VAR_3->notes;
            FUNC_8(VAR_11);
            VAR_7 = VAR_9.name;
        }
    }
    return VAR_4;
}
