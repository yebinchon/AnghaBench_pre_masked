
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float* s; } ;
typedef TYPE_1__ cl_float2 ;


 int FUNC_0 (float,float,float,float,float,float*) ;
 TYPE_1__ FUNC_1 (float,float,float*) ;

__attribute__((used)) static void FUNC_2(
    float VAR_0,
    float VAR_1,
    float VAR_2,
    float VAR_3,
    float VAR_4,
    float VAR_5,
    float VAR_6,
    float *VAR_7
) {
    cl_float2 VAR_8;
    float VAR_9, VAR_10;

    FUNC_0(
        0,
        0,
        0,
        VAR_3,
        VAR_4,
        VAR_7
    );

    VAR_8 = FUNC_1(VAR_5, VAR_6, VAR_7);
    VAR_9 = VAR_5 - VAR_8.s[0];
    VAR_10 = VAR_6 - VAR_8.s[1];

    FUNC_0(
        VAR_0 + VAR_9,
        VAR_1 + VAR_10,
        VAR_2,
        VAR_3,
        VAR_4,
        VAR_7
    );
}
