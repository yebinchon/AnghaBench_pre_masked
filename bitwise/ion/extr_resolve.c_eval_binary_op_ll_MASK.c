
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TokenKind ;
 int FUNC_0 (int ) ;

long long FUNC_1(TokenKind VAR_0, long long VAR_1, long long VAR_2) {
    switch (VAR_0) {
    case 133:
        return VAR_1 * VAR_2;
    case 141:
        return VAR_2 != 0 ? VAR_1 / VAR_2 : 0;
    case 134:
        return VAR_2 != 0 ? VAR_1 % VAR_2 : 0;
    case 142:
        return VAR_1 & VAR_2;
    case 137:
        return VAR_1 << VAR_2;
    case 130:
        return VAR_1 >> VAR_2;
    case 143:
        return VAR_1 + VAR_2;
    case 129:
        return VAR_1 - VAR_2;
    case 131:
        return VAR_1 | VAR_2;
    case 128:
        return VAR_1 ^ VAR_2;
    case 140:
        return VAR_1 == VAR_2;
    case 132:
        return VAR_1 != VAR_2;
    case 136:
        return VAR_1 < VAR_2;
    case 135:
        return VAR_1 <= VAR_2;
    case 139:
        return VAR_1 > VAR_2;
    case 138:
        return VAR_1 >= VAR_2;
    default:
        FUNC_0(0);
        break;
    }
    return 0;
}
