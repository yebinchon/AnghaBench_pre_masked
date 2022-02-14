
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static int64_t FUNC_1(int64_t VAR_1)
{
    if (VAR_1 < 0)
        VAR_1 = VAR_0 - VAR_1;
    VAR_1 %= 2 * VAR_0;

    if (VAR_1 >= VAR_0 * 3 / 2)
        VAR_1 -= 2 * VAR_0;
    if (VAR_1 >= VAR_0 / 2)
        VAR_1 = VAR_0 - VAR_1;

    return VAR_1 - FUNC_0(VAR_1, 3) / 6 + FUNC_0(VAR_1, 5) / 120 - FUNC_0(VAR_1, 7) / 5040;
}
