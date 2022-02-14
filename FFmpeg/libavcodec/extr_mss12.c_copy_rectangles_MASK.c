
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rgb_stride; int pal_stride; scalar_t__ last_pal_pic; scalar_t__ pal_pic; scalar_t__ last_rgb_pic; scalar_t__ rgb_pic; } ;
typedef TYPE_1__ MSS12Context ;


 int FUNC_0 (scalar_t__,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(MSS12Context const *VAR_0,
                            int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5;

    if (VAR_0->last_rgb_pic)
        for (VAR_5 = VAR_2; VAR_5 < VAR_2 + VAR_4; VAR_5++) {
            FUNC_0(VAR_0->rgb_pic + VAR_5 * VAR_0->rgb_stride + VAR_1 * 3,
                   VAR_0->last_rgb_pic + VAR_5 * VAR_0->rgb_stride + VAR_1 * 3,
                   VAR_3 * 3);
            FUNC_0(VAR_0->pal_pic + VAR_5 * VAR_0->pal_stride + VAR_1,
                   VAR_0->last_pal_pic + VAR_5 * VAR_0->pal_stride + VAR_1,
                   VAR_3);
        }
}
