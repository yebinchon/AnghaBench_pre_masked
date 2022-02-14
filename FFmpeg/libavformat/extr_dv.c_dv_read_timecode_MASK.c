
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_6__ {int pb; int metadata; TYPE_1__* priv_data; } ;
struct TYPE_5__ {int dv_demux; } ;
typedef TYPE_1__ RawDVContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int ,char*) ;
 int * FUNC_4 (int) ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int *,char*) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_4) {
    int VAR_5;
    char VAR_6[VAR_1];
    int64_t VAR_7 = FUNC_7(VAR_4->pb);


    int VAR_8 = 3 * 80;
    uint8_t *VAR_9 = FUNC_4(sizeof(*VAR_9) *
                                        VAR_8);

    RawDVContext *VAR_10 = VAR_4->priv_data;
    if (!VAR_9)
        return FUNC_0(VAR_2);

    VAR_5 = FUNC_5(VAR_4->pb, VAR_9, VAR_8);
    if (VAR_5 < 0)
        goto finish;

    if (VAR_5 < VAR_8) {
        VAR_5 = -1;
        goto finish;
    }

    VAR_5 = FUNC_8(VAR_10->dv_demux, VAR_9, VAR_6);
    if (VAR_5)
        FUNC_1(&VAR_4->metadata, "timecode", VAR_6, 0);
    else
        FUNC_3(VAR_4, VAR_0, "Detected timecode is invalid\n");

finish:
    FUNC_2(VAR_9);
    FUNC_6(VAR_4->pb, VAR_7, VAR_3);
    return VAR_5;
}
