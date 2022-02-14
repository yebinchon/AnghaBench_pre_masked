
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int start_code ;
struct TYPE_5__ {int (* get_param_set_func ) (int ,size_t,int const**,size_t*,size_t*,int *) ;} ;
typedef TYPE_1__ VTEncContext ;
struct TYPE_6__ {TYPE_1__* priv_data; } ;
typedef int CMVideoFormatDescriptionRef ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,char*,int) ;
 int FUNC_1 (int ,size_t,int const**,size_t*,size_t*,int *) ;
 int FUNC_2 (int ,size_t,int const**,size_t*,size_t*,int *) ;

__attribute__((used)) static int FUNC_3(
    AVCodecContext *VAR_2,
    CMVideoFormatDescriptionRef VAR_3,
    size_t *VAR_4)
{
    VTEncContext *VAR_5 = VAR_2->priv_data;
    size_t VAR_6 = 0;
    size_t VAR_7;
    int VAR_8 = 0;
    size_t VAR_9;
    int VAR_10;
    VAR_10 = VAR_5->get_param_set_func(VAR_3,
                                       0,
                                       ((void*)0),
                                       ((void*)0),
                                       &VAR_7,
                                       ((void*)0));
    if (VAR_10) {
        VAR_8 = 1;
        VAR_7 = 0;
        VAR_10 = 0;
    }

    for (VAR_9 = 0; VAR_9 < VAR_7 || VAR_8; VAR_9++) {
        const uint8_t *VAR_11;
        size_t VAR_12;
        VAR_10 = VAR_5->get_param_set_func(VAR_3,
                                           VAR_9,
                                           &VAR_11,
                                           &VAR_12,
                                           ((void*)0),
                                           ((void*)0));
        if (VAR_10) {




            if (VAR_9 > 0 && VAR_8) VAR_10 = 0;

            break;
        }

        VAR_6 += VAR_12 + sizeof(start_code);
    }

    if (VAR_10) {
        FUNC_0(VAR_2, VAR_1, "Error getting parameter set sizes: %d\n", VAR_10);
        return VAR_0;
    }

    *VAR_4 = VAR_6;
    return 0;
}
