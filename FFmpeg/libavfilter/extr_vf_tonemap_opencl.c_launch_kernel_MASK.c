
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int cl_kernel ;
typedef int cl_int ;
struct TYPE_9__ {float util_mem; int command_queue; } ;
typedef TYPE_1__ TonemapOpenCLContext ;
struct TYPE_11__ {TYPE_1__* priv; } ;
struct TYPE_10__ {float* data; } ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (int ,int,int ,float*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int,int *,size_t*,size_t*,int ,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_3__*,size_t*,TYPE_2__*,int,int) ;

__attribute__((used)) static int FUNC_5(AVFilterContext *VAR_4, cl_kernel VAR_5,
                         AVFrame *VAR_6, AVFrame *VAR_7, float VAR_8) {
    TonemapOpenCLContext *VAR_9 = VAR_4->priv;
    int VAR_10 = FUNC_0(VAR_1);
    size_t VAR_11[2];
    size_t VAR_12[2];
    cl_int VAR_13;

    FUNC_2(VAR_5, 0, VAR_3, &VAR_6->data[0]);
    FUNC_2(VAR_5, 1, VAR_3, &VAR_7->data[0]);
    FUNC_2(VAR_5, 2, VAR_3, &VAR_6->data[1]);
    FUNC_2(VAR_5, 3, VAR_3, &VAR_7->data[1]);
    FUNC_2(VAR_5, 4, VAR_3, &VAR_9->util_mem);
    FUNC_2(VAR_5, 5, VAR_2, &VAR_8);

    VAR_12[0] = 16;
    VAR_12[1] = 16;

    VAR_10 = FUNC_4(VAR_4, VAR_11, VAR_6,
                                                1, 16);
    if (VAR_10 < 0)
        return VAR_10;

    VAR_13 = FUNC_3(VAR_9->command_queue, VAR_5, 2, ((void*)0),
                                 VAR_11, VAR_12,
                                 0, ((void*)0), ((void*)0));
    FUNC_1(FUNC_0(VAR_0), "Failed to enqueue kernel: %d.\n", VAR_13);
    return 0;
fail:
    return VAR_10;
}
