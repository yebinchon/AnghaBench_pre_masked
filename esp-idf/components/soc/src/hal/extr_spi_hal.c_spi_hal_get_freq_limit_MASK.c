
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(bool VAR_2, int VAR_3)
{
    const int VAR_4 = VAR_0 / 1000;
    const int VAR_5 = VAR_2 ? VAR_1 : 0;


    int VAR_6 = (1 + VAR_3 + VAR_5) * VAR_4 / 1000 / 1000;
    if (VAR_6 < 0) {
        VAR_6 = 0;
    }

    return VAR_0 / (VAR_6 + 1);
}
