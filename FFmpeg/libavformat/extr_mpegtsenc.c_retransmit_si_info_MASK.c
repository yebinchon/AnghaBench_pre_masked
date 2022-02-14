
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_8__ {TYPE_1__* priv_data; } ;
struct TYPE_7__ {scalar_t__ last_sdt_ts; scalar_t__ sdt_period; scalar_t__ last_pat_ts; scalar_t__ pat_period; int nb_services; int * services; } ;
typedef TYPE_1__ MpegTSWrite ;
typedef TYPE_2__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(AVFormatContext *VAR_1, int VAR_2, int VAR_3, int64_t VAR_4)
{
    MpegTSWrite *VAR_5 = VAR_1->priv_data;
    int VAR_6;

    if ((VAR_4 != VAR_0 && VAR_5->last_sdt_ts == VAR_0) ||
        (VAR_4 != VAR_0 && VAR_4 - VAR_5->last_sdt_ts >= VAR_5->sdt_period) ||
        VAR_3
    ) {
        if (VAR_4 != VAR_0)
            VAR_5->last_sdt_ts = FUNC_0(VAR_4, VAR_5->last_sdt_ts);
        FUNC_3(VAR_1);
    }
    if ((VAR_4 != VAR_0 && VAR_5->last_pat_ts == VAR_0) ||
        (VAR_4 != VAR_0 && VAR_4 - VAR_5->last_pat_ts >= VAR_5->pat_period) ||
        VAR_2) {
        if (VAR_4 != VAR_0)
            VAR_5->last_pat_ts = FUNC_0(VAR_4, VAR_5->last_pat_ts);
        FUNC_1(VAR_1);
        for (VAR_6 = 0; VAR_6 < VAR_5->nb_services; VAR_6++)
            FUNC_2(VAR_1, VAR_5->services[VAR_6]);
    }
}
