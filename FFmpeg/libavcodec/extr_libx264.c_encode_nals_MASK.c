
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int i_payload; int p_payload; } ;
typedef TYPE_1__ x264_nal_t ;
typedef int uint8_t ;
struct TYPE_12__ {int sei_size; int sei; } ;
typedef TYPE_2__ X264Context ;
struct TYPE_14__ {TYPE_2__* priv_data; } ;
struct TYPE_13__ {int * data; } ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__*,int ,char*) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*,int,int ) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_1, AVPacket *VAR_2,
                       const x264_nal_t *VAR_3, int VAR_4)
{
    X264Context *VAR_5 = VAR_1->priv_data;
    uint8_t *VAR_6;
    int VAR_7, VAR_8 = VAR_5->sei_size, VAR_9;

    if (!VAR_4)
        return 0;

    for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
        VAR_8 += VAR_3[VAR_7].i_payload;

    if ((VAR_9 = FUNC_2(VAR_1, VAR_2, VAR_8, 0)) < 0)
        return VAR_9;

    VAR_6 = VAR_2->data;


    if (VAR_5->sei_size > 0 && VAR_4 > 0) {
        if (VAR_5->sei_size > VAR_8) {
            FUNC_1(VAR_1, VAR_0, "Error: nal buffer is too small\n");
            return -1;
        }
        FUNC_3(VAR_6, VAR_5->sei, VAR_5->sei_size);
        VAR_6 += VAR_5->sei_size;
        VAR_5->sei_size = 0;
        FUNC_0(&VAR_5->sei);
    }

    for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++){
        FUNC_3(VAR_6, VAR_3[VAR_7].p_payload, VAR_3[VAR_7].i_payload);
        VAR_6 += VAR_3[VAR_7].i_payload;
    }

    return 1;
}
