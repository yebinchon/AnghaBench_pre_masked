
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int const,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(int *VAR_2, int *VAR_3, int VAR_4,
                                 const int VAR_5, const int VAR_6)
{
    if (VAR_6 == 0 || VAR_6 == 2) {
        if (VAR_4 < 463) {
            *VAR_2 = (VAR_4 + 107) * 10923 >> 16;
            *VAR_3 = VAR_4 - *VAR_2 * 6 + 105;
        } else {
            *VAR_2 = VAR_4 - 368;
            *VAR_3 = 0;
        }
    } else {
        *VAR_2 = ((VAR_4 + 5) * 10923 >> 16) - 1;
        *VAR_3 = VAR_4 - *VAR_2 * 6 - 3;
        *VAR_2 += FUNC_0(VAR_5 - 5, VAR_1,
                            VAR_0 - 9);
    }
}
