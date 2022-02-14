
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int AVIOContext ;






 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(AVIOContext *VAR_1, int VAR_2, uint64_t *VAR_3)
{

    switch (VAR_2) {
    case 131:
        *VAR_3 = FUNC_0(VAR_1);
        break;
    case 130:
        *VAR_3 = FUNC_1(VAR_1);
        break;
    case 129:
        *VAR_3 = FUNC_2(VAR_1);
        break;
    case 128:
        *VAR_3 = FUNC_0(VAR_1);
        break;
    default:
        return VAR_0;
    }

    return 0;
}
