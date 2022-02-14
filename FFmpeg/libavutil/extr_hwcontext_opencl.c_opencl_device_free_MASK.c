
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ cl_int ;
struct TYPE_6__ {TYPE_1__* hwctx; } ;
struct TYPE_5__ {int context; } ;
typedef TYPE_1__ AVOpenCLDeviceContext ;
typedef TYPE_2__ AVHWDeviceContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(AVHWDeviceContext *VAR_2)
{
    AVOpenCLDeviceContext *VAR_3 = VAR_2->hwctx;
    cl_int VAR_4;

    VAR_4 = FUNC_1(VAR_3->context);
    if (VAR_4 != VAR_1) {
        FUNC_0(VAR_2, VAR_0, "Failed to release OpenCL "
               "context: %d.\n", VAR_4);
    }
}
