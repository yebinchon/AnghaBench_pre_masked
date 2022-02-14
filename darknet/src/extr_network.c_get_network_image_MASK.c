
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int n; } ;
typedef TYPE_1__ network ;
struct TYPE_8__ {scalar_t__ h; int member_0; } ;
typedef TYPE_2__ image ;


 TYPE_2__ FUNC_0 (TYPE_1__*,int) ;

image FUNC_1(network *VAR_0)
{
    int VAR_1;
    for(VAR_1 = VAR_0->n-1; VAR_1 >= 0; --VAR_1){
        image VAR_2 = FUNC_0(VAR_0, VAR_1);
        if(VAR_2.h != 0) return VAR_2;
    }
    image VAR_3 = {0};
    return VAR_3;
}
