
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int type ;
typedef scalar_t__ cl_mem_object_type ;
typedef scalar_t__ cl_mem ;
typedef scalar_t__ cl_int ;
struct TYPE_3__ {scalar_t__ format; scalar_t__* data; } ;
typedef TYPE_1__ AVFrame ;
typedef int AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 size_t FUNC_1 (size_t,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int ,char*,int,...) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int,size_t*,int *) ;
 scalar_t__ FUNC_5 (scalar_t__,int ,int,scalar_t__*,int *) ;

int FUNC_6(AVFilterContext *VAR_9,
                                          size_t *VAR_10,
                                          AVFrame *VAR_11, int VAR_12,
                                          int VAR_13)
{
    cl_mem VAR_14;
    cl_mem_object_type VAR_15;
    size_t VAR_16, VAR_17;
    cl_int VAR_18;

    if (VAR_11->format != VAR_2) {
        FUNC_3(VAR_9, VAR_1, "Invalid frame format %s, "
               "opencl required.\n", FUNC_2(VAR_11->format));
        return FUNC_0(VAR_8);
    }

    VAR_14 = (cl_mem)VAR_11->data[VAR_12];
    if (!VAR_14) {
        FUNC_3(VAR_9, VAR_1, "Plane %d required but not set.\n",
               VAR_12);
        return FUNC_0(VAR_8);
    }

    VAR_18 = FUNC_5(VAR_14, VAR_6, sizeof(VAR_15),
                             &VAR_15, ((void*)0));
    if (VAR_18 != VAR_7) {
        FUNC_3(VAR_9, VAR_1, "Failed to query object type of "
               "plane %d: %d.\n", VAR_12, VAR_18);
        return VAR_0;
    }
    if (VAR_15 != VAR_5) {
        FUNC_3(VAR_9, VAR_1, "Plane %d is not a 2D image.\n",
               VAR_12);
        return FUNC_0(VAR_8);
    }

    VAR_18 = FUNC_4(VAR_14, VAR_4, sizeof(size_t),
                         &VAR_16, ((void*)0));
    if (VAR_18 != VAR_7) {
        FUNC_3(VAR_9, VAR_1, "Failed to query plane %d width: %d.\n",
               VAR_12, VAR_18);
        return VAR_0;
    }

    VAR_18 = FUNC_4(VAR_14, VAR_3, sizeof(size_t),
                         &VAR_17, ((void*)0));
    if (VAR_18 != VAR_7) {
        FUNC_3(VAR_9, VAR_1, "Failed to query plane %d height: %d.\n",
               VAR_12, VAR_18);
        return VAR_0;
    }

    if (VAR_13) {
        VAR_16 = FUNC_1(VAR_16, VAR_13);
        VAR_17 = FUNC_1(VAR_17, VAR_13);
    }

    VAR_10[0] = VAR_16;
    VAR_10[1] = VAR_17;

    return 0;
}
