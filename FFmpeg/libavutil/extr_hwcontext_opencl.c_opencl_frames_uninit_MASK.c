
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int cl_int ;
struct TYPE_11__ {TYPE_1__* internal; } ;
struct TYPE_10__ {int nb_planes; int * planes; } ;
struct TYPE_9__ {int nb_mapped_frames; int * command_queue; TYPE_3__* mapped_frames; } ;
struct TYPE_8__ {TYPE_2__* priv; } ;
typedef TYPE_2__ OpenCLFramesContext ;
typedef TYPE_3__ AVOpenCLFrameDescriptor ;
typedef TYPE_4__ AVHWFramesContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__**) ;
 int FUNC_1 (TYPE_4__*,int ,char*,int,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(AVHWFramesContext *VAR_2)
{
    OpenCLFramesContext *VAR_3 = VAR_2->internal->priv;
    cl_int VAR_4;
    if (VAR_3->command_queue) {
        VAR_4 = FUNC_2(VAR_3->command_queue);
        if (VAR_4 != VAR_1) {
            FUNC_1(VAR_2, VAR_0, "Failed to release frame "
                   "command queue: %d.\n", VAR_4);
        }
        VAR_3->command_queue = ((void*)0);
    }
}
