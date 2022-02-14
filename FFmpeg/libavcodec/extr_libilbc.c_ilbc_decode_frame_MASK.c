
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int int16_t ;
struct TYPE_15__ {TYPE_1__* priv_data; } ;
struct TYPE_14__ {scalar_t__* data; int nb_samples; } ;
struct TYPE_13__ {int size; int * data; } ;
struct TYPE_11__ {int no_of_bytes; int blockl; } ;
struct TYPE_12__ {TYPE_10__ decoder; } ;
typedef TYPE_1__ ILBCDecContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int const*,TYPE_10__*,int) ;
 int FUNC_1 (TYPE_4__*,int ,char*,int,int) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_2, void *VAR_3,
                             int *VAR_4, AVPacket *VAR_5)
{
    const uint8_t *VAR_6 = VAR_5->data;
    int VAR_7 = VAR_5->size;
    ILBCDecContext *VAR_8 = VAR_2->priv_data;
    AVFrame *VAR_9 = VAR_3;
    int VAR_10;

    if (VAR_8->decoder.no_of_bytes > VAR_7) {
        FUNC_1(VAR_2, VAR_1, "iLBC frame too short (%u, should be %u)\n",
               VAR_7, VAR_8->decoder.no_of_bytes);
        return VAR_0;
    }

    VAR_9->nb_samples = VAR_8->decoder.blockl;
    if ((VAR_10 = FUNC_2(VAR_2, VAR_9, 0)) < 0)
        return VAR_10;

    FUNC_0((int16_t *) VAR_9->data[0], (const uint16_t *) VAR_6, &VAR_8->decoder, 1);

    *VAR_4 = 1;

    return VAR_8->decoder.no_of_bytes;
}
