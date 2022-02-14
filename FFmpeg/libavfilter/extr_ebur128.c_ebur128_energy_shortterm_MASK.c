
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* d; } ;
struct TYPE_5__ {int samples_in_100ms; } ;
typedef TYPE_2__ FFEBUR128State ;


 int FUNC_0 (TYPE_2__*,int,double*) ;

__attribute__((used)) static int FUNC_1(FFEBUR128State * VAR_0, double *VAR_1)
{
    return FUNC_0(VAR_0, VAR_0->d->samples_in_100ms * 30,
                                      VAR_1);
}
