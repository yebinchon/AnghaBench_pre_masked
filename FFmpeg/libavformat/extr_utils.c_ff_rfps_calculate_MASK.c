
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_17__ {int nb_streams; TYPE_4__** streams; } ;
struct TYPE_16__ {long long den; long long num; } ;
struct TYPE_15__ {TYPE_3__* info; TYPE_5__ r_frame_rate; TYPE_5__ avg_frame_rate; TYPE_5__ time_base; TYPE_2__* internal; TYPE_1__* codecpar; } ;
struct TYPE_14__ {int duration_count; int duration_gcd; int codec_info_duration; int rfps_duration_sum; int*** duration_error; int last_dts; } ;
struct TYPE_13__ {int avctx; } ;
struct TYPE_12__ {scalar_t__ codec_type; } ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVRational ;
typedef TYPE_6__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,long long) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int****) ;
 TYPE_5__ FUNC_2 (TYPE_5__) ;
 int FUNC_3 (TYPE_6__*,int ,char*,...) ;
 double FUNC_4 (TYPE_5__) ;
 int FUNC_5 (long long*,long long*,int,int,int ) ;
 double FUNC_6 (double) ;
 double FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ) ;

void FUNC_9(AVFormatContext *VAR_5)
{
    int VAR_6, VAR_7;

    for (VAR_6 = 0; VAR_6 < VAR_5->nb_streams; VAR_6++) {
        AVStream *VAR_8 = VAR_5->streams[VAR_6];

        if (VAR_8->codecpar->codec_type != VAR_0)
            continue;



        if (FUNC_8(VAR_8->internal->avctx) && VAR_8->info->duration_count > 15 && VAR_8->info->duration_gcd > FUNC_0(1, VAR_8->time_base.den/(500LL*VAR_8->time_base.num)) && !VAR_8->r_frame_rate.num)
            FUNC_5(&VAR_8->r_frame_rate.num, &VAR_8->r_frame_rate.den, VAR_8->time_base.den, VAR_8->time_base.num * VAR_8->info->duration_gcd, VAR_3);
        if (VAR_8->info->duration_count>1 && !VAR_8->r_frame_rate.num
            && FUNC_8(VAR_8->internal->avctx)) {
            int VAR_9 = 0;
            double VAR_10= 0.01;
            AVRational VAR_11 = VAR_8->r_frame_rate.num ? VAR_8->r_frame_rate : FUNC_2(VAR_8->time_base);

            for (VAR_7= 0; VAR_7<VAR_4; VAR_7++) {
                int VAR_12;

                if (VAR_8->info->codec_info_duration &&
                    VAR_8->info->codec_info_duration*FUNC_4(VAR_8->time_base) < (1001*11.5)/FUNC_7(VAR_7))
                    continue;
                if (!VAR_8->info->codec_info_duration && FUNC_7(VAR_7) < 1001*12)
                    continue;

                if (FUNC_4(VAR_8->time_base) * VAR_8->info->rfps_duration_sum / VAR_8->info->duration_count < (1001*12.0 * 0.8)/FUNC_7(VAR_7))
                    continue;

                for (VAR_12= 0; VAR_12<2; VAR_12++) {
                    int VAR_13 = VAR_8->info->duration_count;
                    double VAR_14= VAR_8->info->duration_error[VAR_12][0][VAR_7] / VAR_13;
                    double VAR_15= VAR_8->info->duration_error[VAR_12][1][VAR_7]/VAR_13 - VAR_14*VAR_14;

                    if (VAR_15 < VAR_10 && VAR_10> 0.000000001) {
                        VAR_10= VAR_15;
                        VAR_9 = FUNC_7(VAR_7);
                    }
                    if (VAR_15 < 0.02)
                        FUNC_3(VAR_5, VAR_1, "rfps: %f %f\n", FUNC_7(VAR_7) / 12.0/1001, VAR_15);
                }
            }

            if (VAR_9 && (!VAR_11.num || (double)VAR_9/(12*1001) < 1.01 * FUNC_4(VAR_11)))
                FUNC_5(&VAR_8->r_frame_rate.num, &VAR_8->r_frame_rate.den, VAR_9, 12*1001, VAR_3);
        }
        if ( !VAR_8->avg_frame_rate.num
            && VAR_8->r_frame_rate.num && VAR_8->info->rfps_duration_sum
            && VAR_8->info->codec_info_duration <= 0
            && VAR_8->info->duration_count > 2
            && FUNC_6(1.0 / (FUNC_4(VAR_8->r_frame_rate) * FUNC_4(VAR_8->time_base)) - VAR_8->info->rfps_duration_sum / (double)VAR_8->info->duration_count) <= 1.0
            ) {
            FUNC_3(VAR_5, VAR_1, "Setting avg frame rate based on r frame rate\n");
            VAR_8->avg_frame_rate = VAR_8->r_frame_rate;
        }

        FUNC_1(&VAR_8->info->duration_error);
        VAR_8->info->last_dts = VAR_2;
        VAR_8->info->duration_count = 0;
        VAR_8->info->rfps_duration_sum = 0;
    }
}
