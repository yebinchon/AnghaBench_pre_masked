
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {TYPE_3__* priv_data; } ;
struct TYPE_13__ {int (* nvEncGetEncodeCaps ) (int ,int ,TYPE_4__*,int*) ;} ;
struct TYPE_12__ {int capsToQuery; int version; int member_0; } ;
struct TYPE_9__ {int encodeGUID; } ;
struct TYPE_10__ {TYPE_5__ nvenc_funcs; } ;
struct TYPE_11__ {TYPE_1__ init_encode_params; int nvencoder; TYPE_2__ nvenc_dload_funcs; } ;
typedef TYPE_3__ NvencContext ;
typedef TYPE_4__ NV_ENC_CAPS_PARAM ;
typedef int NV_ENC_CAPS ;
typedef TYPE_5__ NV_ENCODE_API_FUNCTION_LIST ;
typedef TYPE_6__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,TYPE_4__*,int*) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_2, NV_ENC_CAPS VAR_3)
{
    NvencContext *VAR_4 = VAR_2->priv_data;
    NV_ENCODE_API_FUNCTION_LIST *VAR_5 = &VAR_4->nvenc_dload_funcs.nvenc_funcs;
    NV_ENC_CAPS_PARAM VAR_6 = { 0 };
    int VAR_7, VAR_8 = 0;

    VAR_6.version = VAR_0;
    VAR_6.capsToQuery = VAR_3;

    VAR_7 = VAR_5->nvEncGetEncodeCaps(VAR_4->nvencoder, VAR_4->init_encode_params.encodeGUID, &VAR_6, &VAR_8);

    if (VAR_7 == VAR_1)
        return VAR_8;
    return 0;
}
