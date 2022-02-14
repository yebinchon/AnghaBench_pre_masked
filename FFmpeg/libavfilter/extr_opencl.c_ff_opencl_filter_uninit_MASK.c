
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ cl_int ;
struct TYPE_6__ {TYPE_1__* priv; } ;
struct TYPE_5__ {int device_ref; scalar_t__ program; } ;
typedef TYPE_1__ OpenCLFilterContext ;
typedef TYPE_2__ AVFilterContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int ,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

void FUNC_3(AVFilterContext *VAR_2)
{
    OpenCLFilterContext *VAR_3 = VAR_2->priv;
    cl_int VAR_4;

    if (VAR_3->program) {
        VAR_4 = FUNC_2(VAR_3->program);
        if (VAR_4 != VAR_1)
            FUNC_1(VAR_2, VAR_0, "Failed to release "
                   "program: %d.\n", VAR_4);
    }

    FUNC_0(&VAR_3->device_ref);
}
