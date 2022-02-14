
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int GetByteContext ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_2, uint8_t *VAR_3, int VAR_4)
{
    GetByteContext VAR_5;
    int VAR_6;

    FUNC_2(&VAR_5, VAR_3, VAR_4);

    while (FUNC_1(&VAR_5) > 0) {
        VAR_6 = FUNC_0(&VAR_5);
        if (VAR_6 != VAR_0)
            return 0;

        VAR_6 = FUNC_0(&VAR_5);
        while (VAR_6 != VAR_1 && FUNC_1(&VAR_5) > 0) {
            int VAR_7 = FUNC_0(&VAR_5);
            if (!VAR_7)
                break;
            FUNC_3(&VAR_5, VAR_7);
        }

        if (VAR_6 == VAR_1)
            return FUNC_4(&VAR_5) + 2;
    }

    return 0;
}
