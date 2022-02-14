
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double dither; scalar_t__ do_dither; } ;
typedef TYPE_1__ VignetteContext ;



__attribute__((used)) static inline double FUNC_0(VignetteContext *VAR_0)
{
    double VAR_1 = 0;
    if (VAR_0->do_dither) {
        VAR_1 = VAR_0->dither / (double)(1LL<<32);
        VAR_0->dither = VAR_0->dither * 1664525 + 1013904223;
    }
    return VAR_1;
}
