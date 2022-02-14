
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TokenKind ;






 int FUNC_0 (int ) ;

unsigned long long FUNC_1(TokenKind VAR_0, unsigned long long VAR_1) {
    switch (VAR_0) {
    case 131:
        return +VAR_1;
    case 128:
        return 0ull - VAR_1;
    case 130:
        return ~VAR_1;
    case 129:
        return !VAR_1;
    default:
        FUNC_0(0);
        break;
    }
    return 0;
}
