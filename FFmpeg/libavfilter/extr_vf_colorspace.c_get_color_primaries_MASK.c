
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int xr; } ;
struct ColorPrimaries {TYPE_1__ coeff; } ;
typedef enum AVColorPrimaries { ____Placeholder_AVColorPrimaries } AVColorPrimaries ;


 int VAR_0 ;
 struct ColorPrimaries* VAR_1 ;

__attribute__((used)) static const struct ColorPrimaries *FUNC_0(enum AVColorPrimaries VAR_2)
{
    const struct ColorPrimaries *VAR_3;

    if (VAR_2 >= VAR_0)
        return ((void*)0);
    VAR_3 = &VAR_1[VAR_2];
    if (!VAR_3->coeff.xr)
        return ((void*)0);

    return VAR_3;
}
