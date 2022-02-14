
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {TYPE_2__* priv_data; } ;
struct TYPE_6__ {int pid; } ;
struct TYPE_8__ {int sid; TYPE_1__ pmt; } ;
struct TYPE_7__ {int nb_services; int tables_version; int tsid; int pat; TYPE_3__** services; } ;
typedef TYPE_2__ MpegTSWrite ;
typedef TYPE_3__ MpegTSService ;
typedef TYPE_4__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int ,int *,int) ;
 int FUNC_1 (int **,int) ;

__attribute__((used)) static void FUNC_2(AVFormatContext *VAR_2)
{
    MpegTSWrite *VAR_3 = VAR_2->priv_data;
    MpegTSService *VAR_4;
    uint8_t VAR_5[VAR_1], *VAR_6;
    int VAR_7;

    VAR_6 = VAR_5;
    for (VAR_7 = 0; VAR_7 < VAR_3->nb_services; VAR_7++) {
        VAR_4 = VAR_3->services[VAR_7];
        FUNC_1(&VAR_6, VAR_4->sid);
        FUNC_1(&VAR_6, 0xe000 | VAR_4->pmt.pid);
    }
    FUNC_0(&VAR_3->pat, VAR_0, VAR_3->tsid, VAR_3->tables_version, 0, 0,
                          VAR_5, VAR_6 - VAR_5);
}
