
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double const freq; } ;
typedef TYPE_1__ GainEntry ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
    const double *VAR_2 = VAR_0;
    const GainEntry *VAR_3 = VAR_1;

    if (*VAR_2 < VAR_3[0].freq)
        return -1;
    if (*VAR_2 > VAR_3[1].freq)
        return 1;
    return 0;
}
