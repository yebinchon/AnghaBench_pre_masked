
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static inline int FUNC_1(int VAR_1, int VAR_2, int VAR_3, int32_t *VAR_4)
{
    int VAR_5 = (VAR_3 - 1) / 2;
    int VAR_6, VAR_7;

    for (VAR_6 = 0; VAR_6 < VAR_0 / 2; VAR_6++) {
        VAR_7 = FUNC_0(VAR_1, VAR_3);
        VAR_4[VAR_6] = VAR_1 - VAR_7 * VAR_3 - VAR_5;
        VAR_1 = VAR_7;
    }
    for (; VAR_6 < VAR_0; VAR_6++) {
        VAR_7 = FUNC_0(VAR_2, VAR_3);
        VAR_4[VAR_6] = VAR_2 - VAR_7 * VAR_3 - VAR_5;
        VAR_2 = VAR_7;
    }

    return VAR_1 | VAR_2;
}
