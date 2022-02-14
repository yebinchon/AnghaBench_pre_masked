
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int kind; int ty; int glabel; int loff; int struc; } ;
typedef TYPE_1__ Node ;






 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(Node *VAR_1) {
    VAR_0;
    switch (VAR_1->kind) {
    case 131: FUNC_0(VAR_1); break;
    case 128: FUNC_1(VAR_1->struc, VAR_1->ty, 0); break;
    case 129:
        FUNC_4(VAR_1);
        FUNC_3(VAR_1->ty, VAR_1->loff);
        break;
    case 130: FUNC_2(VAR_1->glabel, VAR_1->ty, 0); break;
    default: FUNC_5("internal error");
    }
}
