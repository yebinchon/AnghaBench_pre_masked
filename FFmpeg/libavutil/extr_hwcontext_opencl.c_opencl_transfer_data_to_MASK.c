
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int cl_mem ;
typedef scalar_t__ cl_int ;
typedef int cl_image_format ;
struct TYPE_13__ {size_t image_width; size_t image_height; } ;
typedef TYPE_2__ cl_image_desc ;
typedef int cl_event ;
struct TYPE_16__ {scalar_t__ format; scalar_t__* data; int * linesize; int height; int width; } ;
struct TYPE_15__ {scalar_t__ sw_format; TYPE_1__* internal; } ;
struct TYPE_14__ {int command_queue; } ;
struct TYPE_12__ {TYPE_3__* priv; } ;
typedef TYPE_3__ OpenCLFramesContext ;
typedef TYPE_4__ AVHWFramesContext ;
typedef TYPE_5__ AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_4__*,int ,char*,int,...) ;
 scalar_t__ FUNC_2 (int ,int ,int ,size_t*,size_t*,int ,int ,scalar_t__,int ,int *,int *) ;
 int FUNC_3 (scalar_t__,int,int ,int ,int *,TYPE_2__*) ;
 int FUNC_4 (TYPE_4__*,int *,int) ;

__attribute__((used)) static int FUNC_5(AVHWFramesContext *VAR_7,
                                   AVFrame *VAR_8, const AVFrame *VAR_9)
{
    OpenCLFramesContext *VAR_10 = VAR_7->internal->priv;
    cl_image_format VAR_11;
    cl_image_desc VAR_12;
    cl_int VAR_13;
    size_t VAR_14[3] = { 0, 0, 0 };
    size_t VAR_15[3];
    cl_event VAR_16[VAR_1];
    int VAR_17, VAR_18;

    if (VAR_9->format != VAR_7->sw_format)
        return FUNC_0(VAR_4);

    for (VAR_18 = 0;; VAR_18++) {
        VAR_17 = FUNC_3(VAR_7->sw_format, VAR_18,
                                      VAR_9->width, VAR_9->height,
                                      &VAR_11, &VAR_12);
        if (VAR_17 < 0) {
            if (VAR_17 == FUNC_0(VAR_6))
                VAR_17 = 0;
            break;
        }

        if (!VAR_9->data[VAR_18]) {
            FUNC_1(VAR_7, VAR_0, "Plane %d missing on "
                   "source frame for transfer.\n", VAR_18);
            VAR_17 = FUNC_0(VAR_4);
            break;
        }

        VAR_15[0] = VAR_12.image_width;
        VAR_15[1] = VAR_12.image_height;
        VAR_15[2] = 1;

        VAR_13 = FUNC_2(VAR_10->command_queue,
                                  (cl_mem)VAR_8->data[VAR_18],
                                  VAR_2, VAR_14, VAR_15,
                                  VAR_9->linesize[VAR_18], 0,
                                  VAR_9->data[VAR_18],
                                  0, ((void*)0), &VAR_16[VAR_18]);
        if (VAR_13 != VAR_3) {
            FUNC_1(VAR_7, VAR_0, "Failed to enqueue write of "
                   "OpenCL image plane %d: %d.\n", VAR_18, VAR_13);
            VAR_17 = FUNC_0(VAR_5);
            break;
        }
    }

    FUNC_4(VAR_7, VAR_16, VAR_18);

    return VAR_17;
}
