
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int GetByteContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,unsigned int) ;
 unsigned int FUNC_1 (int *) ;
 unsigned int FUNC_2 (int *) ;
 unsigned int FUNC_3 (int *) ;
 unsigned int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(GetByteContext *VAR_1, uint8_t *VAR_2, int VAR_3, int VAR_4)
{
    unsigned int VAR_5 = 1;

    switch (VAR_4) {
    case 63:
        VAR_5 += FUNC_4(VAR_1);
        break;
    case 62:
        VAR_5 += FUNC_3(VAR_1);
        break;
    case 61:
        VAR_5 += FUNC_2(VAR_1);
        break;
    case 60:
        VAR_5 += FUNC_1(VAR_1);
        break;
    default:
        VAR_5 += VAR_4;
    }

    if (VAR_3 < VAR_5)
        return VAR_0;

    FUNC_0(VAR_1, VAR_2, VAR_5);

    return VAR_5;
}
