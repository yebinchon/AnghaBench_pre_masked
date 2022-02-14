
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_7__ {scalar_t__ hasva; } ;
typedef TYPE_2__ Type ;
struct TYPE_9__ {TYPE_1__* ty; } ;
struct TYPE_8__ {scalar_t__ kind; int ty; int fname; TYPE_5__* fptr; int args; TYPE_2__* ftype; } ;
struct TYPE_6__ {TYPE_2__* ptr; } ;
typedef TYPE_3__ Node ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int *,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_5__*) ;
 int * FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int VAR_2 ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(Node *VAR_3) {
    VAR_1;
    int VAR_4 = VAR_2;
    bool VAR_5 = (VAR_3->kind == VAR_0);
    Type *VAR_6 = VAR_5 ? VAR_3->fptr->ty->ptr : VAR_3->ftype;

    Vector *VAR_7 = FUNC_5();
    Vector *VAR_8 = FUNC_5();
    Vector *VAR_9 = FUNC_5();
    FUNC_1(VAR_7, VAR_8, VAR_9, VAR_3->args);
    FUNC_12(FUNC_13(VAR_7), FUNC_13(VAR_8));

    bool VAR_10 = VAR_2 % 16;
    if (VAR_10) {
        FUNC_2("sub $8, #rsp");
        VAR_2 += 8;
    }

    int VAR_11 = FUNC_3(FUNC_14(VAR_9));
    if (VAR_5) {
        FUNC_4(VAR_3->fptr);
        FUNC_10("rax");
    }
    FUNC_3(VAR_7);
    FUNC_3(VAR_8);
    FUNC_8(FUNC_13(VAR_8));
    FUNC_9(FUNC_13(VAR_7));

    if (VAR_5) FUNC_7("r11");
    if (VAR_6->hasva)
        FUNC_2("mov $%u, #eax", FUNC_13(VAR_8));

    if (VAR_5)
        FUNC_2("call *#r11");
    else
        FUNC_2("call %s", VAR_3->fname);
    FUNC_6(VAR_3->ty);
    if (VAR_11 > 0) {
        FUNC_2("add $%d, #rsp", VAR_11);
        VAR_2 -= VAR_11;
    }
    if (VAR_10) {
        FUNC_2("add $8, #rsp");
        VAR_2 -= 8;
    }
    FUNC_11(FUNC_13(VAR_7), FUNC_13(VAR_8));
    FUNC_0(VAR_4 == VAR_2);
}
