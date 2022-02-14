
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int loff; TYPE_1__* ty; int localvars; int params; int fname; } ;
struct TYPE_5__ {int size; scalar_t__ hasva; int isstatic; } ;
typedef TYPE_2__ Node ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 int VAR_1 ;
 TYPE_2__* FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(Node *VAR_2) {
    VAR_0;
    FUNC_2(".text");
    if (!VAR_2->ty->isstatic)
        FUNC_3(".global %s", VAR_2->fname);
    FUNC_3("%s:", VAR_2->fname);
    FUNC_2("nop");
    FUNC_5("rbp");
    FUNC_2("mov #rsp, #rbp");
    int VAR_3 = 0;
    if (VAR_2->ty->hasva) {
        FUNC_7(VAR_2->params);
        VAR_3 -= FUNC_4();
    }
    FUNC_6(VAR_2->params, VAR_3);
    VAR_3 -= FUNC_9(VAR_2->params) * 8;

    int VAR_4 = 0;
    for (int VAR_5 = 0; VAR_5 < FUNC_9(VAR_2->localvars); VAR_5++) {
        Node *VAR_6 = FUNC_8(VAR_2->localvars, VAR_5);
        int VAR_7 = FUNC_0(VAR_6->ty->size, 8);
        FUNC_1(VAR_7 % 8 == 0);
        VAR_3 -= VAR_7;
        VAR_6->loff = VAR_3;
        VAR_4 += VAR_7;
    }
    if (VAR_4) {
        FUNC_2("sub $%d, #rsp", VAR_4);
        VAR_1 += VAR_4;
    }
}
