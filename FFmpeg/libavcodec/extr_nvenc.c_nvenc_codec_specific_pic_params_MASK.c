
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_19__ {int sliceModeData; int sliceMode; } ;
struct TYPE_17__ {int sliceModeData; int sliceMode; } ;
struct TYPE_20__ {TYPE_4__ hevcConfig; TYPE_2__ h264Config; } ;
struct TYPE_21__ {TYPE_5__ encodeCodecConfig; } ;
struct TYPE_24__ {TYPE_6__ encode_config; } ;
struct TYPE_22__ {int seiPayloadArrayCnt; int * seiPayloadArray; int sliceModeData; int sliceMode; } ;
struct TYPE_18__ {int seiPayloadArrayCnt; int * seiPayloadArray; int sliceModeData; int sliceMode; } ;
struct TYPE_23__ {TYPE_7__ hevcPicParams; TYPE_3__ h264PicParams; } ;
struct TYPE_16__ {int id; } ;
struct TYPE_15__ {TYPE_1__* codec; TYPE_9__* priv_data; } ;
struct TYPE_14__ {TYPE_8__ codecPicParams; } ;
typedef TYPE_9__ NvencContext ;
typedef int NV_ENC_SEI_PAYLOAD ;
typedef TYPE_10__ NV_ENC_PIC_PARAMS ;
typedef TYPE_11__ AVCodecContext ;





__attribute__((used)) static void FUNC_0(AVCodecContext *VAR_0,
                                            NV_ENC_PIC_PARAMS *VAR_1,
                                            NV_ENC_SEI_PAYLOAD *VAR_2)
{
    NvencContext *VAR_3 = VAR_0->priv_data;

    switch (VAR_0->codec->id) {
    case 129:
        VAR_1->codecPicParams.h264PicParams.sliceMode =
            VAR_3->encode_config.encodeCodecConfig.h264Config.sliceMode;
        VAR_1->codecPicParams.h264PicParams.sliceModeData =
            VAR_3->encode_config.encodeCodecConfig.h264Config.sliceModeData;
        if (VAR_2) {
            VAR_1->codecPicParams.h264PicParams.seiPayloadArray = VAR_2;
            VAR_1->codecPicParams.h264PicParams.seiPayloadArrayCnt = 1;
        }

      break;
    case 128:
        VAR_1->codecPicParams.hevcPicParams.sliceMode =
            VAR_3->encode_config.encodeCodecConfig.hevcConfig.sliceMode;
        VAR_1->codecPicParams.hevcPicParams.sliceModeData =
            VAR_3->encode_config.encodeCodecConfig.hevcConfig.sliceModeData;
        if (VAR_2) {
            VAR_1->codecPicParams.hevcPicParams.seiPayloadArray = VAR_2;
            VAR_1->codecPicParams.hevcPicParams.seiPayloadArrayCnt = 1;
        }

        break;
    }
}
