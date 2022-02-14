
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* d; } ;
struct TYPE_5__ {size_t audio_data_frames; } ;
typedef TYPE_2__ FFEBUR128State ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,size_t,double*) ;

__attribute__((used)) static int FUNC_2(FFEBUR128State * VAR_1,
                                      size_t VAR_2, double *VAR_3)
{
    if (VAR_2 > VAR_1->d->audio_data_frames) {
        return FUNC_0(VAR_0);
    }
    FUNC_1(VAR_1, VAR_2, VAR_3);
    return 0;
}
