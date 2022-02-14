
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* supported_samplerates; } ;
typedef TYPE_1__ AVCodec ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(const AVCodec *VAR_0)
{
    const int *VAR_1;
    int VAR_2 = 0;

    if (!VAR_0->supported_samplerates)
        return 44100;

    VAR_1 = VAR_0->supported_samplerates;
    while (*VAR_1) {
        if (!VAR_2 || FUNC_0(44100 - *VAR_1) < FUNC_0(44100 - VAR_2))
            VAR_2 = *VAR_1;
        VAR_1++;
    }
    return VAR_2;
}
