
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct LumaCoefficients {int cr; } ;
typedef enum AVColorSpace { ____Placeholder_AVColorSpace } AVColorSpace ;


 int VAR_0 ;
 struct LumaCoefficients* VAR_1 ;

const struct LumaCoefficients *FUNC_0(enum AVColorSpace VAR_2)
{
    const struct LumaCoefficients *VAR_3;

    if (VAR_2 >= VAR_0)
        return ((void*)0);
    VAR_3 = &VAR_1[VAR_2];
    if (!VAR_3->cr)
        return ((void*)0);

    return VAR_3;
}
