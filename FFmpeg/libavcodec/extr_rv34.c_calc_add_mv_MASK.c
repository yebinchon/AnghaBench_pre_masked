
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mv_weight2; int mv_weight1; } ;
typedef int SUINT ;
typedef TYPE_1__ RV34DecContext ;



__attribute__((used)) static int FUNC_0(RV34DecContext *VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3 = VAR_1 ? -VAR_0->mv_weight2 : VAR_0->mv_weight1;

    return (int)(VAR_2 * (SUINT)VAR_3 + 0x2000) >> 14;
}
