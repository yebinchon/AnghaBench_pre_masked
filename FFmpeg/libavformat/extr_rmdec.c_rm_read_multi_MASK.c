
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int pb; } ;
struct TYPE_12__ {int priv_data; TYPE_1__* codecpar; int duration; int start_time; scalar_t__ id; } ;
struct TYPE_11__ {int codec_type; int bit_rate; } ;
typedef TYPE_2__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (int *) ;
 unsigned int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*,char*,int) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_3__*,int ,TYPE_2__*,int ,unsigned int,int *) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_2, AVIOContext *VAR_3,
                         AVStream *VAR_4, char *VAR_5)
{
    int VAR_6 = FUNC_2(VAR_3);
    int VAR_7;
    int VAR_8, VAR_9;
    unsigned VAR_10;
    for (VAR_8 = 0; VAR_8<VAR_6; VAR_8++)
        FUNC_2(VAR_3);
    VAR_7 = FUNC_2(VAR_3);
    if (VAR_7 != 1) {
        FUNC_4(VAR_2, "MLTI with multiple (%d) MDPR", VAR_7);
    }
    for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
        AVStream *VAR_11;
        if (VAR_8 > 0) {
            VAR_11 = FUNC_1(VAR_2, ((void*)0));
            if (!VAR_11) {
                VAR_9 = FUNC_0(VAR_1);
                return VAR_9;
            }
            VAR_11->id = VAR_4->id + (VAR_8<<16);
            VAR_11->codecpar->bit_rate = VAR_4->codecpar->bit_rate;
            VAR_11->start_time = VAR_4->start_time;
            VAR_11->duration = VAR_4->duration;
            VAR_11->codecpar->codec_type = VAR_0;
            VAR_11->priv_data = FUNC_5();
            if (!VAR_11->priv_data)
                return FUNC_0(VAR_1);
        } else
            VAR_11 = VAR_4;

        VAR_10 = FUNC_3(VAR_3);
        VAR_9 = FUNC_6(VAR_2, VAR_2->pb, VAR_11, VAR_11->priv_data,
                                        VAR_10, ((void*)0));
        if (VAR_9 < 0)
            return VAR_9;
    }
    return 0;
}
