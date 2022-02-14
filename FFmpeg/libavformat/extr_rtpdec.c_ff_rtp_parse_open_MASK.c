
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* codecpar; } ;
struct TYPE_8__ {int payload_type; int queue_size; int hostname; int statistics; int * ic; TYPE_3__* st; void* first_rtcp_ntp_time; void* last_rtcp_ntp_time; } ;
struct TYPE_7__ {int codec_id; int sample_rate; } ;
typedef TYPE_2__ RTPDemuxContext ;
typedef TYPE_3__ AVStream ;
typedef int AVFormatContext ;



 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int *,int ,char*,int) ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *,int ) ;

RTPDemuxContext *FUNC_4(AVFormatContext *VAR_2, AVStream *VAR_3,
                                   int VAR_4, int VAR_5)
{
    RTPDemuxContext *VAR_6;

    VAR_6 = FUNC_1(sizeof(RTPDemuxContext));
    if (!VAR_6)
        return ((void*)0);
    VAR_6->payload_type = VAR_4;
    VAR_6->last_rtcp_ntp_time = VAR_1;
    VAR_6->first_rtcp_ntp_time = VAR_1;
    VAR_6->ic = VAR_2;
    VAR_6->st = VAR_3;
    VAR_6->queue_size = VAR_5;

    FUNC_0(VAR_6->ic, VAR_0, "setting jitter buffer size to %d\n",
           VAR_6->queue_size);

    FUNC_3(&VAR_6->statistics, 0);
    if (VAR_3) {
        switch (VAR_3->codecpar->codec_id) {
        case 128:


            if (VAR_3->codecpar->sample_rate == 8000)
                VAR_3->codecpar->sample_rate = 16000;
            break;
        default:
            break;
        }
    }

    FUNC_2(VAR_6->hostname, sizeof(VAR_6->hostname));
    return VAR_6;
}
