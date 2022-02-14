
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int mode; unsigned int channels; TYPE_1__* d; } ;
struct TYPE_4__ {double* sample_peak; } ;
typedef TYPE_2__ FFEBUR128State ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_1(FFEBUR128State * VAR_2,
                           unsigned int VAR_3, double *VAR_4)
{
    if ((VAR_2->mode & VAR_1) !=
        VAR_1) {
        return FUNC_0(VAR_0);
    } else if (VAR_3 >= VAR_2->channels) {
        return FUNC_0(VAR_0);
    }
    *VAR_4 = VAR_2->d->sample_peak[VAR_3];
    return 0;
}
