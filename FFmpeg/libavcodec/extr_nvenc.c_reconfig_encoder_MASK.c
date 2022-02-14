
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_25__ {scalar_t__ (* nvEncReconfigureEncoder ) (int ,TYPE_8__*) ;} ;
struct TYPE_22__ {int darWidth; int darHeight; TYPE_5__* encodeConfig; } ;
struct TYPE_24__ {int resetEncoder; int forceIDR; TYPE_6__ reInitEncodeParams; int version; int member_0; } ;
struct TYPE_18__ {scalar_t__ vbvBufferSize; scalar_t__ maxBitRate; scalar_t__ averageBitRate; } ;
struct TYPE_19__ {TYPE_2__ rcParams; } ;
struct TYPE_17__ {TYPE_9__ nvenc_funcs; } ;
struct TYPE_23__ {scalar_t__ rc; TYPE_3__ encode_config; TYPE_6__ init_encode_params; int nvencoder; scalar_t__ support_dyn_bitrate; TYPE_1__ nvenc_dload_funcs; } ;
struct TYPE_20__ {scalar_t__ vbvBufferSize; scalar_t__ maxBitRate; scalar_t__ averageBitRate; } ;
struct TYPE_21__ {TYPE_4__ rcParams; } ;
struct TYPE_16__ {scalar_t__ rc_buffer_size; scalar_t__ rc_max_rate; scalar_t__ bit_rate; TYPE_7__* priv_data; } ;
typedef TYPE_7__ NvencContext ;
typedef TYPE_8__ NV_ENC_RECONFIGURE_PARAMS ;
typedef TYPE_9__ NV_ENCODE_API_FUNCTION_LIST ;
typedef scalar_t__ NVENCSTATUS ;
typedef int AVFrame ;
typedef TYPE_10__ AVCodecContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_10__*,int ,char*,int,int,...) ;
 int FUNC_1 (TYPE_10__*,int*,int*) ;
 int FUNC_2 (TYPE_10__*,scalar_t__,char*) ;
 scalar_t__ FUNC_3 (int ,TYPE_8__*) ;

__attribute__((used)) static void FUNC_4(AVCodecContext *VAR_4, const AVFrame *VAR_5)
{
    NvencContext *VAR_6 = VAR_4->priv_data;
    NV_ENCODE_API_FUNCTION_LIST *VAR_7 = &VAR_6->nvenc_dload_funcs.nvenc_funcs;
    NVENCSTATUS VAR_8;

    NV_ENC_RECONFIGURE_PARAMS VAR_9 = { 0 };
    int VAR_10 = 0;
    int VAR_11 = 0;
    int VAR_12 = 0, VAR_13 = 0;
    int VAR_14, VAR_15;

    VAR_9.version = VAR_2;
    VAR_9.reInitEncodeParams = VAR_6->init_encode_params;

    FUNC_1(VAR_4, &VAR_14, &VAR_15);
    if (VAR_14 != VAR_6->init_encode_params.darWidth || VAR_15 != VAR_6->init_encode_params.darHeight) {
        FUNC_0(VAR_4, VAR_0,
               "aspect ratio change (DAR): %d:%d -> %d:%d\n",
               VAR_6->init_encode_params.darWidth,
               VAR_6->init_encode_params.darHeight, VAR_14, VAR_15);

        VAR_9.reInitEncodeParams.darHeight = VAR_15;
        VAR_9.reInitEncodeParams.darWidth = VAR_14;

        VAR_10 = 1;
        VAR_13 = 1;
    }

    if (VAR_6->rc != VAR_1 && VAR_6->support_dyn_bitrate) {
        if (VAR_4->bit_rate > 0 && VAR_9.reInitEncodeParams.encodeConfig->rcParams.averageBitRate != VAR_4->bit_rate) {
            FUNC_0(VAR_4, VAR_0,
                   "avg bitrate change: %d -> %d\n",
                   VAR_9.reInitEncodeParams.encodeConfig->rcParams.averageBitRate,
                   (uint32_t)VAR_4->bit_rate);

            VAR_9.reInitEncodeParams.encodeConfig->rcParams.averageBitRate = VAR_4->bit_rate;
            VAR_12 = 1;
        }

        if (VAR_4->rc_max_rate > 0 && VAR_6->encode_config.rcParams.maxBitRate != VAR_4->rc_max_rate) {
            FUNC_0(VAR_4, VAR_0,
                   "max bitrate change: %d -> %d\n",
                   VAR_9.reInitEncodeParams.encodeConfig->rcParams.maxBitRate,
                   (uint32_t)VAR_4->rc_max_rate);

            VAR_9.reInitEncodeParams.encodeConfig->rcParams.maxBitRate = VAR_4->rc_max_rate;
            VAR_12 = 1;
        }

        if (VAR_4->rc_buffer_size > 0 && VAR_6->encode_config.rcParams.vbvBufferSize != VAR_4->rc_buffer_size) {
            FUNC_0(VAR_4, VAR_0,
                   "vbv buffer size change: %d -> %d\n",
                   VAR_9.reInitEncodeParams.encodeConfig->rcParams.vbvBufferSize,
                   VAR_4->rc_buffer_size);

            VAR_9.reInitEncodeParams.encodeConfig->rcParams.vbvBufferSize = VAR_4->rc_buffer_size;
            VAR_12 = 1;
        }

        if (VAR_12) {
            VAR_9.resetEncoder = 1;
            VAR_9.forceIDR = 1;

            VAR_11 = 1;
            VAR_10 = 1;
        }
    }

    if (!VAR_11)
        VAR_9.reInitEncodeParams.encodeConfig = ((void*)0);

    if (VAR_10) {
        VAR_8 = VAR_7->nvEncReconfigureEncoder(VAR_6->nvencoder, &VAR_9);
        if (VAR_8 != VAR_3) {
            FUNC_2(VAR_4, VAR_8, "failed to reconfigure nvenc");
        } else {
            if (VAR_13) {
                VAR_6->init_encode_params.darHeight = VAR_15;
                VAR_6->init_encode_params.darWidth = VAR_14;
            }

            if (VAR_12) {
                VAR_6->encode_config.rcParams.averageBitRate = VAR_9.reInitEncodeParams.encodeConfig->rcParams.averageBitRate;
                VAR_6->encode_config.rcParams.maxBitRate = VAR_9.reInitEncodeParams.encodeConfig->rcParams.maxBitRate;
                VAR_6->encode_config.rcParams.vbvBufferSize = VAR_9.reInitEncodeParams.encodeConfig->rcParams.vbvBufferSize;
            }

        }
    }
}
