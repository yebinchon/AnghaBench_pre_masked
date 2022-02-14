
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(float *VAR_0, float *VAR_1, int VAR_2)
{
    float VAR_3;

    switch (VAR_2) {
    case 131:
        break;
    case 128:
        VAR_3 = -*VAR_0;
        *VAR_0 = *VAR_1;
        *VAR_1 = VAR_3;
        break;
    case 130:
        *VAR_0 = -*VAR_0;
        *VAR_1 = -*VAR_1;
        break;
    case 129:
        VAR_3 = *VAR_0;
        *VAR_0 = -*VAR_1;
        *VAR_1 = VAR_3;
        break;
    default:
        FUNC_0(0);
    }
}
