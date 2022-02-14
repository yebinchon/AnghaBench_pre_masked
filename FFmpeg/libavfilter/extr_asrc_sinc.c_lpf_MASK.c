
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (float,float,float,float*,int*) ;
 float* FUNC_2 (int,float,float,float,float,int ) ;

__attribute__((used)) static float *FUNC_3(float VAR_0, float VAR_1, float VAR_2, int *VAR_3, float VAR_4, float *VAR_5, int VAR_6)
{
    int VAR_7 = *VAR_3;

    if ((VAR_1 /= VAR_0) <= 0.f || VAR_1 >= 1.f) {
        *VAR_3 = 0;
        return ((void*)0);
    }

    VAR_4 = VAR_4 ? VAR_4 : 120.f;

    FUNC_1(VAR_4, VAR_1, (VAR_2 ? VAR_2 / VAR_0 : .05f) * .5f, VAR_5, VAR_3);

    if (!VAR_7) {
        VAR_7 = *VAR_3;
        *VAR_3 = FUNC_0(VAR_7, 11, 32767);
        if (VAR_6)
            *VAR_3 = 1 + 2 * (int)((int)((*VAR_3 / 2) * VAR_1 + .5f) / VAR_1 + .5f);
    }

    return FUNC_2(*VAR_3 |= 1, VAR_1, *VAR_5, 0.f, 1.f, 0);
}
