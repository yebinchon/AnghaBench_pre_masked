
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int cl_mem ;
typedef scalar_t__ cl_int ;
typedef int cl_event ;
struct TYPE_17__ {TYPE_1__* internal; } ;
struct TYPE_16__ {TYPE_2__* source; TYPE_3__* priv; } ;
struct TYPE_15__ {int command_queue; } ;
struct TYPE_14__ {int * address; } ;
struct TYPE_13__ {scalar_t__* data; } ;
struct TYPE_12__ {TYPE_4__* priv; } ;
typedef TYPE_3__ OpenCLMapping ;
typedef TYPE_4__ OpenCLFramesContext ;
typedef TYPE_5__ HWMapDescriptor ;
typedef TYPE_6__ AVHWFramesContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_6__*,int ,char*,int,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int *,int *) ;
 int FUNC_4 (TYPE_6__*,int *,int) ;

__attribute__((used)) static void FUNC_5(AVHWFramesContext *VAR_3,
                               HWMapDescriptor *VAR_4)
{
    OpenCLFramesContext *VAR_5 = VAR_3->internal->priv;
    OpenCLMapping *VAR_6 = VAR_4->priv;
    cl_event VAR_7[VAR_1];
    int VAR_8, VAR_9;
    cl_int VAR_10;

    for (VAR_8 = VAR_9 = 0; VAR_8 < FUNC_0(VAR_6->address); VAR_8++) {
        if (!VAR_6->address[VAR_8])
            break;

        VAR_10 = FUNC_3(VAR_5->command_queue,
                                      (cl_mem)VAR_4->source->data[VAR_8],
                                      VAR_6->address[VAR_8],
                                      0, ((void*)0), &VAR_7[VAR_9]);
        if (VAR_10 != VAR_2) {
            FUNC_2(VAR_3, VAR_0, "Failed to unmap OpenCL "
                   "image plane %d: %d.\n", VAR_8, VAR_10);
        }
        ++VAR_9;
    }

    FUNC_4(VAR_3, VAR_7, VAR_9);

    FUNC_1(VAR_6);
}
