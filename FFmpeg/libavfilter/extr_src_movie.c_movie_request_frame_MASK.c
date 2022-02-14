
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * src; } ;
typedef TYPE_1__ AVFilterLink ;
typedef int AVFilterContext ;


 int FUNC_0 (int,int ) ;
 unsigned int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,unsigned int) ;

__attribute__((used)) static int FUNC_3(AVFilterLink *VAR_0)
{
    AVFilterContext *VAR_1 = VAR_0->src;
    unsigned VAR_2 = FUNC_1(VAR_0);
    int VAR_3;

    while (1) {
        VAR_3 = FUNC_2(VAR_1, VAR_2);
        if (VAR_3)
            return FUNC_0(VAR_3, 0);
    }
}
