
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {float tv_sec; float tv_usec; } ;
struct TYPE_4__ {float tv_sec; float tv_usec; } ;


 float FUNC_0 (float) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static float FUNC_2(void)
{
    FUNC_1(&VAR_1, ((void*)0));

    float VAR_2 = (VAR_1.tv_sec - VAR_0.tv_sec) * 1e3f +
                (VAR_1.tv_usec - VAR_0.tv_usec) * 1e-3f;
    return FUNC_0(VAR_2);
}
