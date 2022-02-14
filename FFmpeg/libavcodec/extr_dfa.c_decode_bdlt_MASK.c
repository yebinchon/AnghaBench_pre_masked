
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int8_t ;
typedef int GetByteContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,scalar_t__,int) ;

__attribute__((used)) static int FUNC_7(GetByteContext *VAR_1, uint8_t *VAR_2, int VAR_3, int VAR_4)
{
    uint8_t *VAR_5;
    int VAR_6, VAR_7, VAR_8;

    VAR_6 = FUNC_4(VAR_1);
    if (VAR_6 >= VAR_4)
        return VAR_0;
    VAR_2 += VAR_3 * VAR_6;
    VAR_7 = FUNC_4(VAR_1);
    if (VAR_6 + VAR_7 > VAR_4)
        return VAR_0;

    while (VAR_7--) {
        if (FUNC_2(VAR_1) < 1)
            return VAR_0;
        VAR_5 = VAR_2;
        VAR_2 += VAR_3;
        VAR_8 = FUNC_3(VAR_1);
        while (VAR_8--) {
            if (VAR_2 - VAR_5 <= FUNC_5(VAR_1))
                return VAR_0;
            VAR_5 += FUNC_1(VAR_1);
            VAR_6 = (int8_t)FUNC_1(VAR_1);
            if (VAR_6 >= 0) {
                if (VAR_2 - VAR_5 < VAR_6)
                    return VAR_0;
                if (FUNC_0(VAR_1, VAR_5, VAR_6) != VAR_6)
                    return VAR_0;
            } else {
                VAR_6 = -VAR_6;
                if (VAR_2 - VAR_5 < VAR_6)
                    return VAR_0;
                FUNC_6(VAR_5, FUNC_1(VAR_1), VAR_6);
            }
            VAR_5 += VAR_6;
        }
    }

    return 0;
}
