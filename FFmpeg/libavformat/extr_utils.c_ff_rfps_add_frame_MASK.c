
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ int64_t ;
struct TYPE_5__ {TYPE_1__* info; int time_base; } ;
struct TYPE_4__ {scalar_t__ last_dts; int*** duration_error; scalar_t__ rfps_duration_sum; int duration_count; int duration_gcd; } ;
typedef TYPE_2__ AVStream ;
typedef int AVFormatContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,scalar_t__) ;
 int*** FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (double) ;

int FUNC_7(AVFormatContext *VAR_5, AVStream *VAR_6, int64_t VAR_7)
{
    int VAR_8, VAR_9;
    int64_t VAR_10 = VAR_6->info->last_dts;

    if ( VAR_7 != VAR_0 && VAR_10 != VAR_0 && VAR_7 > VAR_10
       && VAR_7 - (uint64_t)VAR_10 < VAR_2) {
        double VAR_11 = (FUNC_5(VAR_7) ? VAR_7 - VAR_4 : VAR_7) * FUNC_3(VAR_6->time_base);
        int64_t VAR_12 = VAR_7 - VAR_10;

        if (!VAR_6->info->duration_error)
            VAR_6->info->duration_error = FUNC_2(sizeof(VAR_6->info->duration_error[0])*2);
        if (!VAR_6->info->duration_error)
            return FUNC_0(VAR_1);



        for (VAR_8 = 0; VAR_8<VAR_3; VAR_8++) {
            if (VAR_6->info->duration_error[0][1][VAR_8] < 1e10) {
                int VAR_13 = FUNC_4(VAR_8);
                double VAR_14 = VAR_11*VAR_13/(1001*12);
                for (VAR_9= 0; VAR_9<2; VAR_9++) {
                    int64_t VAR_15 = FUNC_6(VAR_14+VAR_9*0.5);
                    double VAR_16= VAR_14 - VAR_15 + VAR_9*0.5;
                    VAR_6->info->duration_error[VAR_9][0][VAR_8] += VAR_16;
                    VAR_6->info->duration_error[VAR_9][1][VAR_8] += VAR_16*VAR_16;
                }
            }
        }
        if (VAR_6->info->rfps_duration_sum <= VAR_2 - VAR_12) {
            VAR_6->info->duration_count++;
            VAR_6->info->rfps_duration_sum += VAR_12;
        }

        if (VAR_6->info->duration_count % 10 == 0) {
            int VAR_17 = VAR_6->info->duration_count;
            for (VAR_8 = 0; VAR_8<VAR_3; VAR_8++) {
                if (VAR_6->info->duration_error[0][1][VAR_8] < 1e10) {
                    double VAR_18 = VAR_6->info->duration_error[0][0][VAR_8] / VAR_17;
                    double VAR_19 = VAR_6->info->duration_error[0][1][VAR_8] / VAR_17 - VAR_18*VAR_18;
                    double VAR_20 = VAR_6->info->duration_error[1][0][VAR_8] / VAR_17;
                    double VAR_21 = VAR_6->info->duration_error[1][1][VAR_8] / VAR_17 - VAR_20*VAR_20;
                    if (VAR_19 > 0.04 && VAR_21 > 0.04) {
                        VAR_6->info->duration_error[0][1][VAR_8] = 2e10;
                        VAR_6->info->duration_error[1][1][VAR_8] = 2e10;
                    }
                }
            }
        }


        if (VAR_6->info->duration_count > 3 && FUNC_5(VAR_7) == FUNC_5(VAR_10))
            VAR_6->info->duration_gcd = FUNC_1(VAR_6->info->duration_gcd, VAR_12);
    }
    if (VAR_7 != VAR_0)
        VAR_6->info->last_dts = VAR_7;

    return 0;
}
