
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int extclk; int audclk; int vidclk; } ;
typedef TYPE_1__ VideoState ;




 double FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static double FUNC_2(VideoState *VAR_0)
{
    double VAR_1;

    switch (FUNC_1(VAR_0)) {
        case 128:
            VAR_1 = FUNC_0(&VAR_0->vidclk);
            break;
        case 129:
            VAR_1 = FUNC_0(&VAR_0->audclk);
            break;
        default:
            VAR_1 = FUNC_0(&VAR_0->extclk);
            break;
    }
    return VAR_1;
}
