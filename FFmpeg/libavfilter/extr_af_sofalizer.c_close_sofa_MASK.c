
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MySofa {int fir; int * hrtf; int * lookup; int * neighborhood; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct MySofa *VAR_0)
{
    if (VAR_0->neighborhood)
        FUNC_3(VAR_0->neighborhood);
    VAR_0->neighborhood = ((void*)0);
    if (VAR_0->lookup)
        FUNC_2(VAR_0->lookup);
    VAR_0->lookup = ((void*)0);
    if (VAR_0->hrtf)
        FUNC_1(VAR_0->hrtf);
    VAR_0->hrtf = ((void*)0);
    FUNC_0(&VAR_0->fir);

    return 0;
}
