
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_11__ {scalar_t__ max_b_frames; TYPE_1__* priv_data; } ;
struct TYPE_10__ {scalar_t__ dts; int pts; } ;
struct TYPE_9__ {int outputTimeStamp; } ;
struct TYPE_8__ {int first_packet_output; scalar_t__* initial_pts; int timestamp_list; } ;
typedef TYPE_1__ NvencContext ;
typedef TYPE_2__ NV_ENC_LOCK_BITSTREAM ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_4,
                               NV_ENC_LOCK_BITSTREAM *VAR_5,
                               AVPacket *VAR_6)
{
    NvencContext *VAR_7 = VAR_4->priv_data;

    VAR_6->pts = VAR_5->outputTimeStamp;



    if (VAR_4->max_b_frames > 0 && !VAR_7->first_packet_output &&
        VAR_7->initial_pts[1] != VAR_0) {
        int64_t VAR_8 = VAR_7->initial_pts[0], VAR_9 = VAR_7->initial_pts[1];
        int64_t VAR_10;

        if ((VAR_8 < 0 && VAR_9 > VAR_2 + VAR_8) ||
            (VAR_8 > 0 && VAR_9 < VAR_3 + VAR_8))
            return FUNC_0(VAR_1);
        VAR_10 = VAR_9 - VAR_8;

        if ((VAR_10 < 0 && VAR_8 > VAR_2 + VAR_10) ||
            (VAR_10 > 0 && VAR_8 < VAR_3 + VAR_10))
            return FUNC_0(VAR_1);
        VAR_6->dts = VAR_8 - VAR_10;

        VAR_7->first_packet_output = 1;
        return 0;
    }

    VAR_6->dts = FUNC_1(VAR_7->timestamp_list);

    return 0;
}
