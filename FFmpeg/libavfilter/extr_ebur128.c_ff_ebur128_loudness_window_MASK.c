
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long samplerate; } ;
typedef TYPE_1__ FFEBUR128State ;


 double VAR_0 ;
 int FUNC_0 (TYPE_1__*,size_t,double*) ;
 double FUNC_1 (double) ;

int FUNC_2(FFEBUR128State * VAR_1,
                               unsigned long VAR_2, double *VAR_3)
{
    double VAR_4;
    size_t VAR_5 = VAR_1->samplerate * VAR_2 / 1000;
    int VAR_6 = FUNC_0(VAR_1, VAR_5, &VAR_4);
    if (VAR_6) {
        return VAR_6;
    } else if (VAR_4 <= 0.0) {
        *VAR_3 = -VAR_0;
        return 0;
    }
    *VAR_3 = FUNC_1(VAR_4);
    return 0;
}
