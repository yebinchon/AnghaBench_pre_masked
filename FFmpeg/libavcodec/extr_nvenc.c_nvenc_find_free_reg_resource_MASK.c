
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int * regptr; int * ptr; int mapped; } ;
struct TYPE_12__ {TYPE_2__* priv_data; } ;
struct TYPE_11__ {scalar_t__ (* nvEncUnregisterResource ) (int ,int *) ;} ;
struct TYPE_9__ {TYPE_3__ nvenc_funcs; } ;
struct TYPE_10__ {int nb_registered_frames; TYPE_8__* registered_frames; int nvencoder; TYPE_1__ nvenc_dload_funcs; } ;
typedef TYPE_1__ NvencDynLoadFunctions ;
typedef TYPE_2__ NvencContext ;
typedef TYPE_3__ NV_ENCODE_API_FUNCTION_LIST ;
typedef scalar_t__ NVENCSTATUS ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_8__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_4__*,int ,char*) ;
 int FUNC_3 (TYPE_4__*,scalar_t__,char*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_3)
{
    NvencContext *VAR_4 = VAR_3->priv_data;
    NvencDynLoadFunctions *VAR_5 = &VAR_4->nvenc_dload_funcs;
    NV_ENCODE_API_FUNCTION_LIST *VAR_6 = &VAR_5->nvenc_funcs;
    NVENCSTATUS VAR_7;

    int VAR_8, VAR_9;

    if (VAR_4->nb_registered_frames == FUNC_1(VAR_4->registered_frames)) {
        for (VAR_9 = 1; VAR_9 >= 0; VAR_9--) {
            for (VAR_8 = 0; VAR_8 < VAR_4->nb_registered_frames; VAR_8++) {
                if (!VAR_4->registered_frames[VAR_8].mapped) {
                    if (VAR_4->registered_frames[VAR_8].regptr) {
                        if (VAR_9)
                            continue;
                        VAR_7 = VAR_6->nvEncUnregisterResource(VAR_4->nvencoder, VAR_4->registered_frames[VAR_8].regptr);
                        if (VAR_7 != VAR_2)
                            return FUNC_3(VAR_3, VAR_7, "Failed unregistering unused input resource");
                        VAR_4->registered_frames[VAR_8].ptr = ((void*)0);
                        VAR_4->registered_frames[VAR_8].regptr = ((void*)0);
                    }
                    return VAR_8;
                }
            }
        }
    } else {
        return VAR_4->nb_registered_frames++;
    }

    FUNC_2(VAR_3, VAR_0, "Too many registered CUDA frames\n");
    return FUNC_0(VAR_1);
}
