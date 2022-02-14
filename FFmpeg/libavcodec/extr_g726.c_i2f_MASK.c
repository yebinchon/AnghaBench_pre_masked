
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sign; int exp; int mant; } ;
typedef TYPE_1__ Float11 ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline Float11* FUNC_1(int VAR_0, Float11* VAR_1)
{
    VAR_1->sign = (VAR_0 < 0);
    if (VAR_1->sign)
        VAR_0 = -VAR_0;
    VAR_1->exp = FUNC_0(VAR_0) + !!VAR_0;
    VAR_1->mant = VAR_0? (VAR_0<<6) >> VAR_1->exp : 1<<5;
    return VAR_1;
}
