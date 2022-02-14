
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ cl_int ;
struct TYPE_8__ {TYPE_1__* internal; } ;
struct TYPE_7__ {int * command_queue; } ;
struct TYPE_6__ {TYPE_2__* priv; } ;
typedef TYPE_2__ OpenCLDeviceContext ;
typedef TYPE_3__ AVHWDeviceContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(AVHWDeviceContext *VAR_2)
{
    OpenCLDeviceContext *VAR_3 = VAR_2->internal->priv;
    cl_int VAR_4;

    if (VAR_3->command_queue) {
        VAR_4 = FUNC_1(VAR_3->command_queue);
        if (VAR_4 != VAR_1) {
            FUNC_0(VAR_2, VAR_0, "Failed to release internal "
                   "command queue reference: %d.\n", VAR_4);
        }
        VAR_3->command_queue = ((void*)0);
    }
}
