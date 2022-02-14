
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {TYPE_3__* priv_data; } ;
struct TYPE_10__ {int (* nvEncGetEncodeGUIDCount ) (int ,int*) ;int (* nvEncGetEncodeGUIDs ) (int ,int *,int,int*) ;} ;
struct TYPE_8__ {int encodeGUID; } ;
struct TYPE_7__ {TYPE_4__ nvenc_funcs; } ;
struct TYPE_9__ {TYPE_2__ init_encode_params; int nvencoder; TYPE_1__ nvenc_dload_funcs; } ;
typedef TYPE_3__ NvencContext ;
typedef TYPE_4__ NV_ENCODE_API_FUNCTION_LIST ;
typedef int GUID ;
typedef TYPE_5__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int ,int*) ;
 int FUNC_5 (int ,int *,int,int*) ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_3)
{
    NvencContext *VAR_4 = VAR_3->priv_data;
    NV_ENCODE_API_FUNCTION_LIST *VAR_5 = &VAR_4->nvenc_dload_funcs.nvenc_funcs;
    int VAR_6, VAR_7, VAR_8 = 0;
    GUID *VAR_9 = ((void*)0);

    VAR_7 = VAR_5->nvEncGetEncodeGUIDCount(VAR_4->nvencoder, &VAR_8);

    if (VAR_7 != VAR_2 || !VAR_8)
        return FUNC_0(VAR_1);

    VAR_9 = FUNC_2(VAR_8 * sizeof(GUID));
    if (!VAR_9)
        return FUNC_0(VAR_0);

    VAR_7 = VAR_5->nvEncGetEncodeGUIDs(VAR_4->nvencoder, VAR_9, VAR_8, &VAR_8);
    if (VAR_7 != VAR_2) {
        VAR_7 = FUNC_0(VAR_1);
        goto fail;
    }

    VAR_7 = FUNC_0(VAR_1);
    for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
        if (!FUNC_3(&VAR_9[VAR_6], &VAR_4->init_encode_params.encodeGUID, sizeof(*VAR_9))) {
            VAR_7 = 0;
            break;
        }
    }

fail:
    FUNC_1(VAR_9);

    return VAR_7;
}
