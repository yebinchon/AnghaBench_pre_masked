
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; struct TYPE_3__** param; } ;
typedef TYPE_1__ AVExpr ;
__attribute__((used)) static int FUNC_0(AVExpr *VAR_0)
{
    if (!VAR_0) return 0;
    switch (VAR_0->type) {
        case 128:
        case 148: return 1;
        case 146:
        case 145:
        case 131:
        case 139:
        case 144:
        case 140:
        case 141:
        case 147:
        case 150:
        case 129:
        case 134:
        case 132:
        case 137:
        case 135:
        case 133:
            return FUNC_0(VAR_0->param[0]) && !VAR_0->param[1];
        case 136:
            return FUNC_0(VAR_0->param[0])
                   && (!VAR_0->param[1] || FUNC_0(VAR_0->param[1]));
        case 143:
        case 142:
        case 130:
            return FUNC_0(VAR_0->param[0]) && FUNC_0(VAR_0->param[1])
                   && (!VAR_0->param[2] || FUNC_0(VAR_0->param[2]));
        case 151:
        case 149:
        case 138:
            return FUNC_0(VAR_0->param[0]) &&
                   FUNC_0(VAR_0->param[1]) &&
                   FUNC_0(VAR_0->param[2]);
        default: return FUNC_0(VAR_0->param[0]) && FUNC_0(VAR_0->param[1]) && !VAR_0->param[2];
    }
}
