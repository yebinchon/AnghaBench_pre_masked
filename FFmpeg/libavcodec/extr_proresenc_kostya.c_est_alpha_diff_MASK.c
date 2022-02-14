
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(int VAR_0, int VAR_1, int VAR_2)
{
    const int VAR_3 = (VAR_2 == 8) ? 4 : 7;
    const int VAR_4 = 1 << (VAR_3 - 1);
    int VAR_5 = VAR_0 - VAR_1;

    VAR_5 = FUNC_0(VAR_5, VAR_2);
    if (VAR_5 >= (1 << VAR_2) - VAR_4)
        VAR_5 -= 1 << VAR_2;
    if (VAR_5 < -VAR_4 || VAR_5 > VAR_4 || !VAR_5)
        return VAR_2 + 1;
    else
        return VAR_3 + 1;
}
