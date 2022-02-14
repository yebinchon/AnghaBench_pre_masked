
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint64_t ;
typedef int int64_t ;
struct TYPE_18__ {int num; int den; } ;
struct TYPE_17__ {int index; TYPE_1__* codecpar; int time_base; TYPE_2__* priv_data; } ;
struct TYPE_16__ {int fc; } ;
struct TYPE_15__ {scalar_t__* samples_per_frame; } ;
struct TYPE_14__ {int edit_rate; } ;
struct TYPE_13__ {scalar_t__ codec_type; } ;
typedef TYPE_2__ MXFTrack ;
typedef TYPE_3__ MXFSamplesPerFrame ;
typedef TYPE_4__ MXFContext ;
typedef TYPE_5__ AVStream ;
typedef TYPE_6__ AVRational ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_6__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,char*,int ,int,int,int,int) ;
 int FUNC_3 (int,TYPE_6__,int ) ;
 TYPE_3__* FUNC_4 (int ,TYPE_6__) ;

__attribute__((used)) static int64_t FUNC_5(MXFContext *VAR_2, AVStream *VAR_3,
                                        int64_t VAR_4)
{
    int VAR_5, VAR_6 = 0, VAR_7 = 0;
    MXFTrack *VAR_8 = VAR_3->priv_data;
    AVRational VAR_9 = FUNC_1(VAR_8->edit_rate);
    AVRational VAR_10 = FUNC_1(VAR_3->time_base);
    const MXFSamplesPerFrame *VAR_11 = ((void*)0);
    int64_t VAR_12;


    if (VAR_3->codecpar->codec_type != VAR_0)
        return VAR_4;

    if ((VAR_10.num / VAR_10.den) == 48000)
        VAR_11 = FUNC_4(VAR_2->fc, VAR_9);
    if (!VAR_11) {
        int VAR_13 = (VAR_10.num * VAR_9.num) %
                        (VAR_9.den * VAR_10.den);
        if (VAR_13)
            FUNC_2(VAR_2->fc, VAR_1,
                   "seeking detected on stream #%d with time base (%d/%d) and "
                   "sample rate (%d/%d), audio pts won't be accurate.\n",
                   VAR_3->index, VAR_9.num, VAR_9.den,
                   VAR_10.num, VAR_10.den);
        return FUNC_3(VAR_4, VAR_10, VAR_8->edit_rate);
    }

    while (VAR_11->samples_per_frame[VAR_7]) {
        VAR_6 += VAR_11->samples_per_frame[VAR_7];
        VAR_7++;
    }

    FUNC_0(VAR_7);

    VAR_12 = (VAR_4 / VAR_7) * (uint64_t)VAR_6;
    for (VAR_5 = 0; VAR_5 < VAR_4 % VAR_7; VAR_5++) {
        VAR_12 += VAR_11->samples_per_frame[VAR_5];
    }

    return VAR_12;
}
