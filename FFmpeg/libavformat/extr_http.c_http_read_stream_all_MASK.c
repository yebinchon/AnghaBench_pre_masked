
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int URLContext ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static int FUNC_1(URLContext *VAR_0, uint8_t *VAR_1, int VAR_2)
{
    int VAR_3 = 0;
    while (VAR_3 < VAR_2) {
        int VAR_4 = FUNC_0(VAR_0, VAR_1 + VAR_3, VAR_2 - VAR_3);
        if (VAR_4 < 0)
            return VAR_4;
        VAR_3 += VAR_4;
    }
    return VAR_3;
}
