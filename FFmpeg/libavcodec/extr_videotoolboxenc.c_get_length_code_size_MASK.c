
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* get_param_set_func ) (int ,int ,int *,int *,int *,int*) ;} ;
typedef TYPE_1__ VTEncContext ;
struct TYPE_6__ {TYPE_1__* priv_data; } ;
typedef int CMVideoFormatDescriptionRef ;
typedef int CMSampleBufferRef ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ,char*,...) ;
 int FUNC_2 (int ,int ,int *,int *,int *,int*) ;

__attribute__((used)) static int FUNC_3(
    AVCodecContext *VAR_2,
    CMSampleBufferRef VAR_3,
    size_t *VAR_4)
{
    VTEncContext *VAR_5 = VAR_2->priv_data;
    CMVideoFormatDescriptionRef VAR_6;
    int VAR_7;
    int VAR_8;

    VAR_6 = FUNC_0(VAR_3);
    if (!VAR_6) {
        FUNC_1(VAR_2, VAR_1, "Error getting buffer format description.\n");
        return VAR_0;
    }

    VAR_8 = VAR_5->get_param_set_func(VAR_6,
                                       0,
                                       ((void*)0),
                                       ((void*)0),
                                       ((void*)0),
                                       &VAR_7);
    if (VAR_8) {
        FUNC_1(VAR_2, VAR_1, "Error getting length code size: %d\n", VAR_8);
        return VAR_0;
    }

    *VAR_4 = VAR_7;
    return 0;
}
