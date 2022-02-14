
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int GetByteContext ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,unsigned int) ;

__attribute__((used)) static unsigned FUNC_5(uint8_t *VAR_1, int VAR_2)
{
    GetByteContext VAR_3;

    FUNC_3(&VAR_3, VAR_1, VAR_2);
    FUNC_4(&VAR_3, 4);
    while (FUNC_1(&VAR_3) > 8) {
        unsigned VAR_4 = FUNC_2(&VAR_3);
        unsigned VAR_5 = FUNC_0(&VAR_3);

        if (VAR_4 == VAR_0) {
            if (VAR_5 < 40)
                break;
            FUNC_4(&VAR_3, 14);
            return FUNC_0(&VAR_3);
        } else {
            FUNC_4(&VAR_3, VAR_5 + VAR_5 & 1);
        }
    }
    return 10;
}
