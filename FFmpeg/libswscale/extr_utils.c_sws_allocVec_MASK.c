
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int length; void* coeff; } ;
typedef TYPE_1__ SwsVector ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__**) ;
 void* FUNC_1 (int) ;

SwsVector *FUNC_2(int VAR_1)
{
    SwsVector *VAR_2;

    if(VAR_1 <= 0 || VAR_1 > VAR_0/ sizeof(double))
        return ((void*)0);

    VAR_2 = FUNC_1(sizeof(SwsVector));
    if (!VAR_2)
        return ((void*)0);
    VAR_2->length = VAR_1;
    VAR_2->coeff = FUNC_1(sizeof(double) * VAR_1);
    if (!VAR_2->coeff)
        FUNC_0(&VAR_2);
    return VAR_2;
}
