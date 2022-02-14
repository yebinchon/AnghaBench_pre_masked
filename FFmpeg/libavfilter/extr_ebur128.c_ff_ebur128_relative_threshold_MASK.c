
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mode; } ;
typedef TYPE_1__ FFEBUR128State ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__**,int,double*) ;
 double FUNC_2 (double) ;

int FUNC_3(FFEBUR128State * VAR_2, double *VAR_3)
{
    double VAR_4;

    if ((VAR_2->mode & VAR_1) != VAR_1)
        return FUNC_0(VAR_0);

    if (!FUNC_1(&VAR_2, 1, &VAR_4)) {
        *VAR_3 = -70.0;
        return 0;
    }

    *VAR_3 = FUNC_2(VAR_4);
    return 0;
}
