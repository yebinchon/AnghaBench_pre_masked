
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_1__ ;


struct TYPE_31__ {int kind; int ty; int struc; int newlabel; struct TYPE_31__* operand; } ;
typedef TYPE_1__ Node ;
 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (int ,int ,int ) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (TYPE_1__*) ;
 int FUNC_22 (TYPE_1__*) ;
 int FUNC_23 (TYPE_1__*) ;
 int FUNC_24 (TYPE_1__*,char*) ;
 int FUNC_25 (TYPE_1__*,char*) ;
 int FUNC_26 (TYPE_1__*) ;
 int FUNC_27 (TYPE_1__*) ;
 int FUNC_28 (TYPE_1__*) ;
 int FUNC_29 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_30(Node *VAR_1) {
    VAR_0;
    FUNC_29(VAR_1);
    switch (VAR_1->kind) {
    case 140: FUNC_18(VAR_1); return;
    case 139: FUNC_23(VAR_1); return;
    case 143: FUNC_15(VAR_1); return;
    case 146: FUNC_0(VAR_1); return;
    case 147:
        if (FUNC_28(VAR_1))
            return;

    case 145:
        FUNC_13(VAR_1);
        return;
    case 149: FUNC_11(VAR_1); return;
    case 150: FUNC_10(VAR_1); return;
    case 153: FUNC_0(VAR_1->operand); return;
    case 148: FUNC_12(VAR_1); return;
    case 142:
    case 136:
        FUNC_27(VAR_1);
        return;
    case 144: FUNC_14(VAR_1); return;
    case 141:
        if (VAR_1->newlabel)
            FUNC_16(VAR_1->newlabel);
        return;
    case 138: FUNC_26(VAR_1); return;
    case 152: FUNC_8(VAR_1); return;
    case 137:
        FUNC_19(VAR_1->struc, VAR_1->ty, 0);
        return;
    case 128: FUNC_25(VAR_1, "add"); return;
    case 129: FUNC_25(VAR_1, "sub"); return;
    case 130: FUNC_24(VAR_1, "add"); return;
    case 131: FUNC_24(VAR_1, "sub"); return;
    case '!': FUNC_21(VAR_1); return;
    case '&': FUNC_3(VAR_1); return;
    case '|': FUNC_5(VAR_1); return;
    case '~': FUNC_4(VAR_1); return;
    case 133: FUNC_20(VAR_1); return;
    case 132: FUNC_22(VAR_1); return;
    case 135: FUNC_6(VAR_1); return;
    case ',': FUNC_7(VAR_1); return;
    case '=': FUNC_1(VAR_1); return;
    case 134: FUNC_17(VAR_1); return;
    case 151: FUNC_9(VAR_1); return;
    default:
        FUNC_2(VAR_1);
    }
}
