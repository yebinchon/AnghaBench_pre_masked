
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (float const,float const,float,unsigned int) ;

int FUNC_1(const float *VAR_0, const float *VAR_1, float VAR_2,
                         unsigned VAR_3, unsigned VAR_4)
{
    unsigned VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
        if (!FUNC_0(VAR_0[VAR_5], VAR_1[VAR_5], VAR_2, VAR_3))
            return 0;
    }
    return 1;
}
