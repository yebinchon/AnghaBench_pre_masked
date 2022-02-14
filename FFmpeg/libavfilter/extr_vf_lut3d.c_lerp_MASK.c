
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rgbvec {int member_2; int b; int member_1; int g; int member_0; int r; } ;


 int FUNC_0 (int ,int ,float) ;

__attribute__((used)) static inline struct rgbvec FUNC_1(const struct rgbvec *VAR_0, const struct rgbvec *VAR_1, float VAR_2)
{
    struct rgbvec VAR_3 = {
        FUNC_0(VAR_0->r, VAR_1->r, VAR_2), FUNC_0(VAR_0->g, VAR_1->g, VAR_2), FUNC_0(VAR_0->b, VAR_1->b, VAR_2)
    };
    return VAR_3;
}
