
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* sps; } ;
struct TYPE_8__ {TYPE_2__ ps; } ;
struct TYPE_6__ {int width; int height; } ;
typedef TYPE_3__ HEVCContext ;


 int FUNC_0 (TYPE_3__*,int,int,int) ;

void FUNC_1(HEVCContext *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4 = VAR_1 >= VAR_0->ps.sps->width - VAR_3;
    int VAR_5 = VAR_2 >= VAR_0->ps.sps->height - VAR_3;
    if (VAR_2 && VAR_1)
        FUNC_0(VAR_0, VAR_1 - VAR_3, VAR_2 - VAR_3, VAR_3);
    if (VAR_2 && VAR_4)
        FUNC_0(VAR_0, VAR_1, VAR_2 - VAR_3, VAR_3);
    if (VAR_1 && VAR_5)
        FUNC_0(VAR_0, VAR_1 - VAR_3, VAR_2, VAR_3);
}
