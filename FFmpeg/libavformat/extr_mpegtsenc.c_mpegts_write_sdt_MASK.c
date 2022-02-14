
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {TYPE_1__* priv_data; } ;
struct TYPE_6__ {scalar_t__* name; scalar_t__* provider_name; int sid; } ;
struct TYPE_5__ {int nb_services; int tables_version; int tsid; int sdt; int service_type; TYPE_2__** services; int onid; } ;
typedef TYPE_1__ MpegTSWrite ;
typedef TYPE_2__ MpegTSService ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int ,int*,int) ;
 int FUNC_1 (int**,int ) ;
 int FUNC_2 (int**,scalar_t__*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(AVFormatContext *VAR_2)
{
    MpegTSWrite *VAR_3 = VAR_2->priv_data;
    MpegTSService *VAR_4;
    uint8_t VAR_5[VAR_1], *VAR_6, *VAR_7, *VAR_8;
    int VAR_9, VAR_10, VAR_11, VAR_12;

    VAR_6 = VAR_5;
    FUNC_1(&VAR_6, VAR_3->onid);
    *VAR_6++ = 0xff;
    for (VAR_9 = 0; VAR_9 < VAR_3->nb_services; VAR_9++) {
        VAR_4 = VAR_3->services[VAR_9];
        FUNC_1(&VAR_6, VAR_4->sid);
        *VAR_6++ = 0xfc | 0x00;
        VAR_7 = VAR_6;
        VAR_6 += 2;
        VAR_10 = 4;
        VAR_11 = 0;


        *VAR_6++ = 0x48;
        VAR_8 = VAR_6;
        VAR_6++;
        *VAR_6++ = VAR_3->service_type;
        FUNC_2(&VAR_6, VAR_4->provider_name, VAR_4->provider_name[0] + 1);
        FUNC_2(&VAR_6, VAR_4->name, VAR_4->name[0] + 1);
        VAR_8[0] = VAR_6 - VAR_8 - 1;


        VAR_12 = (VAR_10 << 13) | (VAR_11 << 12) |
              (VAR_6 - VAR_7 - 2);
        VAR_7[0] = VAR_12 >> 8;
        VAR_7[1] = VAR_12;
    }
    FUNC_0(&VAR_3->sdt, VAR_0, VAR_3->tsid, VAR_3->tables_version, 0, 0,
                          VAR_5, VAR_6 - VAR_5);
}
