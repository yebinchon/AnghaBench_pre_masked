
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int category; } ;
typedef TYPE_1__ AVClass ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(const AVClass *VAR_0)
{
    if (!VAR_0)
        return 0;
    return FUNC_0(VAR_0->category) || FUNC_1(VAR_0->category);
}
