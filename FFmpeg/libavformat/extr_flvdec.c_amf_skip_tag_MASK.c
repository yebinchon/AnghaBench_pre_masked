
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int eof_reached; } ;
typedef TYPE_1__ AVIOContext ;
typedef int AMFDataType ;
 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_4(AVIOContext *VAR_1, AMFDataType VAR_2)
{
    int VAR_3 = -1, VAR_4, VAR_5 = 1;

    switch (VAR_2) {
    case 131:
        FUNC_3(VAR_1, 8);
        break;
    case 134:
        FUNC_3(VAR_1, 1);
        break;
    case 128:
        FUNC_3(VAR_1, FUNC_1(VAR_1));
        break;
    case 135:
        VAR_5 = 0;
    case 133:
        VAR_3 = FUNC_2(VAR_1);
    case 130:
        while(!VAR_1->eof_reached && (VAR_3-- > 0 || VAR_2 != 135)) {
            if (VAR_5) {
                int VAR_6 = FUNC_1(VAR_1);
                if (!VAR_6) {
                    FUNC_3(VAR_1, 1);
                    break;
                }
                FUNC_3(VAR_1, VAR_6);
            }
            if ((VAR_4 = FUNC_4(VAR_1, FUNC_0(VAR_1))) < 0)
                return VAR_4;
        }
        break;
    case 132:
    case 129:
        break;
    default:
        return VAR_0;
    }
    return 0;
}
