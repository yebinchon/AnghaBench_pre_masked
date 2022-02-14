
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rgbvec {int b; int g; int r; } ;
struct TYPE_3__ {size_t lutsize2; size_t lutsize; struct rgbvec* lut; } ;
typedef TYPE_1__ LUT3DContext ;


 size_t FUNC_0 (int ) ;

__attribute__((used)) static inline struct rgbvec FUNC_1(const LUT3DContext *VAR_0,
                                           const struct rgbvec *VAR_1)
{
    return VAR_0->lut[FUNC_0(VAR_1->r) * VAR_0->lutsize2 + FUNC_0(VAR_1->g) * VAR_0->lutsize + FUNC_0(VAR_1->b)];
}
