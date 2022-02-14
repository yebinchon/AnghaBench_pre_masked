
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ int64_t ;
typedef scalar_t__ int32_t ;
struct TYPE_12__ {scalar_t__ pts; scalar_t__ dts; } ;
struct TYPE_11__ {scalar_t__ last_rtcp_ntp_time; scalar_t__ last_rtcp_timestamp; scalar_t__ first_rtcp_ntp_time; scalar_t__ range_start_offset; scalar_t__ rtcp_ts_offset; scalar_t__ base_timestamp; scalar_t__ timestamp; scalar_t__ unwrapped_timestamp; TYPE_3__* st; TYPE_1__* ic; } ;
struct TYPE_9__ {scalar_t__ num; int den; } ;
struct TYPE_10__ {TYPE_2__ time_base; } ;
struct TYPE_8__ {int nb_streams; } ;
typedef TYPE_4__ RTPDemuxContext ;
typedef TYPE_5__ AVPacket ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int) ;

__attribute__((used)) static void FUNC_1(RTPDemuxContext *VAR_2, AVPacket *VAR_3, uint32_t VAR_4)
{
    if (VAR_3->pts != VAR_0 || VAR_3->dts != VAR_0)
        return;
    if (VAR_4 == VAR_1)
        return;

    if (VAR_2->last_rtcp_ntp_time != VAR_0 && VAR_2->ic->nb_streams > 1) {
        int64_t VAR_5;
        int VAR_6;


        VAR_6 = VAR_4 - VAR_2->last_rtcp_timestamp;

        VAR_5 = FUNC_0(VAR_2->last_rtcp_ntp_time - VAR_2->first_rtcp_ntp_time,
                            VAR_2->st->time_base.den,
                            (uint64_t) VAR_2->st->time_base.num << 32);
        VAR_3->pts = VAR_2->range_start_offset + VAR_2->rtcp_ts_offset + VAR_5 +
                   VAR_6;
        return;
    }

    if (!VAR_2->base_timestamp)
        VAR_2->base_timestamp = VAR_4;


    if (!VAR_2->timestamp)
        VAR_2->unwrapped_timestamp += VAR_4;
    else
        VAR_2->unwrapped_timestamp += (int32_t)(VAR_4 - VAR_2->timestamp);
    VAR_2->timestamp = VAR_4;
    VAR_3->pts = VAR_2->unwrapped_timestamp + VAR_2->range_start_offset -
                   VAR_2->base_timestamp;
}
