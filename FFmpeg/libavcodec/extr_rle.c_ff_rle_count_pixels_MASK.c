
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (scalar_t__ const*,scalar_t__ const*,int) ;

int FUNC_2(const uint8_t *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    const uint8_t *VAR_4;
    int VAR_5 = 1;

    for (VAR_4 = VAR_0 + VAR_2; VAR_5 < FUNC_0(127, VAR_1); VAR_4 += VAR_2, VAR_5++) {
        if (VAR_3 != !FUNC_1(VAR_4 - VAR_2, VAR_4, VAR_2)) {
            if (!VAR_3) {



                if (VAR_2 == 1 && VAR_5 + 1 < FUNC_0(127, VAR_1) && *VAR_4 != *(VAR_4 + 1))
                    continue;



                VAR_5--;
            }
            break;
        }
    }

    return VAR_5;
}
