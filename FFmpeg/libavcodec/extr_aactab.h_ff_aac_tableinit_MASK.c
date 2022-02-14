
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float* VAR_0 ;
 float* VAR_1 ;

__attribute__((used)) static inline void FUNC_0(void)
{
    int VAR_2;


    static const float VAR_3[] = {
        1.00000000000000000000,
        1.04427378242741384032,
        1.09050773266525765921,
        1.13878863475669165370,
        1.18920711500272106672,
        1.24185781207348404859,
        1.29683955465100966593,
        1.35425554693689272830,
        1.41421356237309504880,
        1.47682614593949931139,
        1.54221082540794082361,
        1.61049033194925430818,
        1.68179283050742908606,
        1.75625216037329948311,
        1.83400808640934246349,
        1.91520656139714729387,
    };
    float VAR_4 = 8.8817841970012523233890533447265625e-16;
    float VAR_5 = 3.63797880709171295166015625e-12;
    int VAR_6, VAR_7;
    int VAR_8 = 0;
    int VAR_9 = 8;

    for (VAR_2 = 0; VAR_2 < 428; VAR_2++) {
        VAR_6 = 4 * (VAR_2 % 4);
        VAR_7 = (8 + 3*VAR_2) % 16;
        if (VAR_6 < VAR_8)
            VAR_4 *= 2;
        if (VAR_7 < VAR_9)
            VAR_5 *= 2;



        VAR_0[VAR_2] = VAR_4 * VAR_3[VAR_6];
        VAR_1[VAR_2] = VAR_5 * VAR_3[VAR_7];
        VAR_8 = VAR_6;
        VAR_9 = VAR_7;
    }
}
