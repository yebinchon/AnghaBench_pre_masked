
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int FUNC_0 (int const*,int*,int *,int*) ;

__attribute__((used)) static int FUNC_1(const uint8_t *VAR_1, int VAR_2)
{
    int VAR_3, VAR_4;
    const uint8_t *VAR_5 = VAR_1 + VAR_2;

    VAR_1 += 4;
    do {
        if (VAR_5 - VAR_1 < 4)
            return VAR_0;
        FUNC_0(VAR_1, &VAR_3, ((void*)0), &VAR_4);
        VAR_1 += 4;
        if (VAR_5 - VAR_1 < VAR_4) {

            return VAR_0;
        }
        VAR_1 += VAR_4;
    } while (!VAR_3);

    return VAR_2 - (VAR_5 - VAR_1);
}
