
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_12__ {int sample_rate; int * priv_data; } ;
struct TYPE_11__ {int nb_samples; scalar_t__* data; } ;
struct TYPE_10__ {int* data; int size; } ;
typedef int NellyMoserDecodeContext ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*,int ,char*,...) ;
 int* FUNC_1 (TYPE_1__*,float,int *) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_3 (int *,int const*,float*) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_5, void *VAR_6,
                      int *VAR_7, AVPacket *VAR_8)
{
    AVFrame *VAR_9 = VAR_6;
    const uint8_t *VAR_10 = VAR_8->data;
    const uint8_t *VAR_11=FUNC_1(VAR_8, 'F', ((void*)0));
    int VAR_12 = VAR_8->size;
    NellyMoserDecodeContext *VAR_13 = VAR_5->priv_data;
    int VAR_14, VAR_15, VAR_16;
    float *VAR_17;

    VAR_14 = VAR_12 / VAR_3;

    if (VAR_14 <= 0) {
        FUNC_0(VAR_5, VAR_1, "Packet is too small\n");
        return VAR_0;
    }

    if (VAR_12 % VAR_3) {
        FUNC_0(VAR_5, VAR_2, "Leftover bytes: %d.\n",
               VAR_12 % VAR_3);
    }







    if(VAR_11 && VAR_14>1 && VAR_5->sample_rate%11025==0 && (1<<((VAR_11[0]>>2)&3)) == VAR_14)
        VAR_5->sample_rate= 11025*(VAR_14/2);


    VAR_9->nb_samples = VAR_4 * VAR_14;
    if ((VAR_16 = FUNC_2(VAR_5, VAR_9, 0)) < 0)
        return VAR_16;
    VAR_17 = (float *)VAR_9->data[0];

    for (VAR_15=0 ; VAR_15<VAR_14 ; VAR_15++) {
        FUNC_3(VAR_13, VAR_10, VAR_17);
        VAR_17 += VAR_4;
        VAR_10 += VAR_3;
    }

    *VAR_7 = 1;

    return VAR_12;
}
