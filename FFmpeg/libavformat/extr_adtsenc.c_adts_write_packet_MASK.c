
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_17__ {int pce_size; int * pce_data; scalar_t__ write_adts; } ;
struct TYPE_16__ {int extradata; int extradata_size; } ;
struct TYPE_15__ {int * pb; TYPE_1__** streams; TYPE_5__* priv_data; } ;
struct TYPE_14__ {int size; int * data; } ;
struct TYPE_13__ {TYPE_4__* codecpar; } ;
typedef TYPE_2__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVCodecParameters ;
typedef TYPE_5__ ADTSContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,TYPE_5__*,int *,int) ;
 int FUNC_1 (TYPE_5__*,int *,int,int) ;
 int * FUNC_2 (TYPE_2__*,int ,int*) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (int ,int *,int) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_2, AVPacket *VAR_3)
{
    ADTSContext *VAR_4 = VAR_2->priv_data;
    AVCodecParameters *VAR_5 = VAR_2->streams[0]->codecpar;
    AVIOContext *VAR_6 = VAR_2->pb;
    uint8_t VAR_7[VAR_0];

    if (!VAR_3->size)
        return 0;
    if (!VAR_5->extradata_size) {
        uint8_t *VAR_8;
        int VAR_9 = 0, VAR_10;

        VAR_8 = FUNC_2(VAR_3, VAR_1,
                                            &VAR_9);
        if (VAR_9) {
            VAR_10 = FUNC_0(VAR_2, VAR_4, VAR_8, VAR_9);
            if (VAR_10 < 0)
                return VAR_10;
            VAR_10 = FUNC_4(VAR_5, VAR_9);
            if (VAR_10 < 0)
                return VAR_10;
            FUNC_5(VAR_5->extradata, VAR_8, VAR_9);
        }
    }
    if (VAR_4->write_adts) {
        int VAR_11 = FUNC_1(VAR_4, VAR_7, VAR_3->size,
                                             VAR_4->pce_size);
        if (VAR_11 < 0)
            return VAR_11;
        FUNC_3(VAR_6, VAR_7, VAR_0);
        if (VAR_4->pce_size) {
            FUNC_3(VAR_6, VAR_4->pce_data, VAR_4->pce_size);
            VAR_4->pce_size = 0;
        }
    }
    FUNC_3(VAR_6, VAR_3->data, VAR_3->size);

    return 0;
}
