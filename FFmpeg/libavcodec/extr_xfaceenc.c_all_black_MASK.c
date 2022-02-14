
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static int FUNC_0(char *VAR_1, int VAR_2, int VAR_3)
{
    if (VAR_2 > 3) {
        VAR_2 /= 2;
        VAR_3 /= 2;
        return (FUNC_0(VAR_1, VAR_2, VAR_3) && FUNC_0(VAR_1 + VAR_2, VAR_2, VAR_3) &&
                FUNC_0(VAR_1 + VAR_0 * VAR_3, VAR_2, VAR_3) &&
                FUNC_0(VAR_1 + VAR_0 * VAR_3 + VAR_2, VAR_2, VAR_3));
    } else {

        return *VAR_1 || *(VAR_1 + 1) ||
               *(VAR_1 + VAR_0) || *(VAR_1 + VAR_0 + 1);
    }
}
