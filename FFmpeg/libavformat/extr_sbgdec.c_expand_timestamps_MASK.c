
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int time_t ;
struct tm {int tm_hour; int tm_min; int tm_sec; } ;
struct sbg_script {int nb_tseq; int start_ts; int end_ts; int opt_duration; TYPE_2__* tseq; scalar_t__ opt_start_at_first; } ;
typedef int int64_t ;
struct TYPE_3__ {char type; int t; } ;
struct TYPE_4__ {TYPE_1__ ts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (void*,int ,char*,...) ;
 struct tm* FUNC_1 (int*,struct tm*) ;
 int FUNC_2 (int*) ;

__attribute__((used)) static void FUNC_3(void *VAR_6, struct sbg_script *VAR_7)
{
    int VAR_8, VAR_9 = 0;
    int64_t VAR_10, VAR_11, VAR_12 = 0;

    for (VAR_8 = 0; VAR_8 < VAR_7->nb_tseq; VAR_8++)
        VAR_9 += VAR_7->tseq[VAR_8].ts.type == 'N';
    if (VAR_9 == VAR_7->nb_tseq) {

        VAR_10 = 0;
        if (VAR_7->start_ts != VAR_2)
            FUNC_0(VAR_6, VAR_1,
                   "Start time ignored in a purely relative script.\n");
    } else if (VAR_9 == 0 && VAR_7->start_ts != VAR_2 ||
               VAR_7->opt_start_at_first) {

        if (VAR_7->start_ts == VAR_2)
            VAR_7->start_ts = VAR_7->tseq[0].ts.t;
        VAR_10 = VAR_7->start_ts;
    } else {

        time_t VAR_13;
        struct tm *VAR_14, VAR_15;

        FUNC_0(VAR_6, VAR_1,
               "Scripts with mixed absolute and relative timestamps can give "
               "unexpected results (pause, seeking, time zone change).\n");

        FUNC_2(&VAR_13);
        VAR_14 = FUNC_1(&VAR_13, &VAR_15);
        VAR_10 = VAR_14 ? VAR_14->tm_hour * 3600 + VAR_14->tm_min * 60 + VAR_14->tm_sec :
                   VAR_13 % VAR_4;
        FUNC_0(VAR_6, VAR_0, "Using %02d:%02d:%02d as NOW.\n",
               (int)(VAR_10 / 3600), (int)(VAR_10 / 60) % 60, (int)VAR_10 % 60);
        VAR_10 *= VAR_3;
        for (VAR_8 = 0; VAR_8 < VAR_7->nb_tseq; VAR_8++) {
            if (VAR_7->tseq[VAR_8].ts.type == 'N') {
                VAR_7->tseq[VAR_8].ts.t += VAR_10;
                VAR_7->tseq[VAR_8].ts.type = 'T';
            }
        }
    }
    if (VAR_7->start_ts == VAR_2)
        VAR_7->start_ts = (VAR_7->opt_start_at_first && VAR_7->tseq) ? VAR_7->tseq[0].ts.t : VAR_10;
    VAR_7->end_ts = VAR_7->opt_duration ? VAR_7->start_ts + VAR_7->opt_duration :
                VAR_2;
    VAR_11 = VAR_10;
    for (VAR_8 = 0; VAR_8 < VAR_7->nb_tseq; VAR_8++) {
        if (VAR_7->tseq[VAR_8].ts.t + VAR_12 < VAR_11)
            VAR_12 += VAR_5;
        VAR_11 = VAR_7->tseq[VAR_8].ts.t += VAR_12;
    }
}
