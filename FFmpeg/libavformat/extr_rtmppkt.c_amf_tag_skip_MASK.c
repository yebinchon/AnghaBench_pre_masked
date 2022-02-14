
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetByteContext ;
typedef int AMFDataType ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static int FUNC_6(GetByteContext *VAR_0)
{
    AMFDataType VAR_1;
    unsigned VAR_2 = -1;
    int VAR_3 = 1;

    if (FUNC_4(VAR_0) < 1)
        return -1;

    VAR_1 = FUNC_3(VAR_0);
    switch (VAR_1) {
    case 131:
        FUNC_2(VAR_0);
        return 0;
    case 136:
        FUNC_3(VAR_0);
        return 0;
    case 128:
        FUNC_5(VAR_0, FUNC_0(VAR_0));
        return 0;
    case 134:
        FUNC_5(VAR_0, FUNC_1(VAR_0));
        return 0;
    case 132:
        return 0;
    case 135:
        FUNC_5(VAR_0, 10);
        return 0;
    case 137:
        VAR_3 = 0;
    case 133:
        VAR_2 = FUNC_1(VAR_0);
    case 130:
        while (VAR_2-- > 0 || VAR_1 != 137) {
            int VAR_4;
            if (VAR_3) {
                int VAR_5 = FUNC_0(VAR_0);
                if (!VAR_5) {
                    FUNC_3(VAR_0);
                    break;
                }
                if (VAR_5 < 0 || VAR_5 >= FUNC_4(VAR_0))
                    return -1;
                FUNC_5(VAR_0, VAR_5);
            }
            VAR_4 = FUNC_6(VAR_0);
            if (VAR_4 < 0 || FUNC_4(VAR_0) <= 0)
                return -1;
        }
        return 0;
    case 129: return 0;
    default: return -1;
    }
}
