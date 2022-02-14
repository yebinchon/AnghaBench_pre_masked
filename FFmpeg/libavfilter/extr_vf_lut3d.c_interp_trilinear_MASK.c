
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef struct rgbvec {int b; int g; int r; int member_2; int member_1; int member_0; } const rgbvec ;
struct TYPE_3__ {int lutsize2; int lutsize; struct rgbvec const* lut; } ;
typedef TYPE_1__ LUT3DContext ;


 int const FUNC_0 (int ) ;
 int const FUNC_1 (int ) ;
 struct rgbvec const FUNC_2 (struct rgbvec const*,struct rgbvec const*,int ) ;

__attribute__((used)) static inline struct rgbvec FUNC_3(const LUT3DContext *VAR_0,
                                             const struct rgbvec *VAR_1)
{
    const int VAR_2 = VAR_0->lutsize2;
    const int VAR_3 = VAR_0->lutsize;
    const int VAR_4[] = {FUNC_1(VAR_1->r), FUNC_1(VAR_1->g), FUNC_1(VAR_1->b)};
    const int VAR_5[] = {FUNC_0(VAR_1->r), FUNC_0(VAR_1->g), FUNC_0(VAR_1->b)};
    const struct rgbvec VAR_6 = {VAR_1->r - VAR_4[0], VAR_1->g - VAR_4[1], VAR_1->b - VAR_4[2]};
    const struct rgbvec VAR_7 = VAR_0->lut[VAR_4[0] * VAR_2 + VAR_4[1] * VAR_3 + VAR_4[2]];
    const struct rgbvec VAR_8 = VAR_0->lut[VAR_4[0] * VAR_2 + VAR_4[1] * VAR_3 + VAR_5[2]];
    const struct rgbvec VAR_9 = VAR_0->lut[VAR_4[0] * VAR_2 + VAR_5[1] * VAR_3 + VAR_4[2]];
    const struct rgbvec VAR_10 = VAR_0->lut[VAR_4[0] * VAR_2 + VAR_5[1] * VAR_3 + VAR_5[2]];
    const struct rgbvec VAR_11 = VAR_0->lut[VAR_5[0] * VAR_2 + VAR_4[1] * VAR_3 + VAR_4[2]];
    const struct rgbvec VAR_12 = VAR_0->lut[VAR_5[0] * VAR_2 + VAR_4[1] * VAR_3 + VAR_5[2]];
    const struct rgbvec VAR_13 = VAR_0->lut[VAR_5[0] * VAR_2 + VAR_5[1] * VAR_3 + VAR_4[2]];
    const struct rgbvec VAR_14 = VAR_0->lut[VAR_5[0] * VAR_2 + VAR_5[1] * VAR_3 + VAR_5[2]];
    const struct rgbvec VAR_15 = FUNC_2(&VAR_7, &VAR_11, VAR_6.r);
    const struct rgbvec VAR_16 = FUNC_2(&VAR_9, &VAR_13, VAR_6.r);
    const struct rgbvec VAR_17 = FUNC_2(&VAR_8, &VAR_12, VAR_6.r);
    const struct rgbvec VAR_18 = FUNC_2(&VAR_10, &VAR_14, VAR_6.r);
    const struct rgbvec VAR_19 = FUNC_2(&VAR_15, &VAR_16, VAR_6.g);
    const struct rgbvec VAR_20 = FUNC_2(&VAR_17, &VAR_18, VAR_6.g);
    const struct rgbvec VAR_21 = FUNC_2(&VAR_19, &VAR_20, VAR_6.b);
    return VAR_21;
}
