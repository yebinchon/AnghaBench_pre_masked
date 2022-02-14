
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int bytes; int packet; } ;
typedef TYPE_2__ ogg_packet ;
typedef int int16_t ;
struct TYPE_17__ {TYPE_3__* priv_data; } ;
struct TYPE_16__ {int nb_samples; scalar_t__* data; } ;
struct TYPE_15__ {int size; int data; } ;
struct TYPE_12__ {int channels; } ;
struct TYPE_14__ {int vd; TYPE_1__ vi; int vb; TYPE_2__ op; } ;
typedef TYPE_3__ OggVorbisDecContext ;
typedef TYPE_4__ AVPacket ;
typedef TYPE_5__ AVFrame ;
typedef TYPE_6__ AVCodecContext ;


 int FUNC_0 (int,float**,char*,int) ;
 int FUNC_1 (TYPE_6__*,TYPE_5__*,int ) ;
 scalar_t__ FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,float***) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_0, void *VAR_1,
                        int *VAR_2, AVPacket *VAR_3)
{
    OggVorbisDecContext *VAR_4 = VAR_0->priv_data ;
    AVFrame *VAR_5 = VAR_1;
    float **VAR_6 ;
    ogg_packet *VAR_7= &VAR_4->op;
    int VAR_8, VAR_9, VAR_10;
    int VAR_11;
    int16_t *VAR_12;

    if(!VAR_3->size){

        return 0;
    }

    VAR_5->nb_samples = 8192*4;
    if ((VAR_11 = FUNC_1(VAR_0, VAR_5, 0)) < 0)
        return VAR_11;
    VAR_12 = (int16_t *)VAR_5->data[0];


    VAR_7->packet = VAR_3->data;
    VAR_7->bytes = VAR_3->size;







    if(FUNC_2(&VAR_4->vb, VAR_7) == 0)
        FUNC_3(&VAR_4->vd, &VAR_4->vb) ;

    VAR_9 = 0 ;
    VAR_10 = 0 ;

    while((VAR_8 = FUNC_4(&VAR_4->vd, &VAR_6)) > 0) {
        FUNC_0(VAR_8, VAR_6, (char*)VAR_12 + VAR_10, VAR_4->vi.channels) ;
        VAR_10 += VAR_8 * 2 * VAR_4->vi.channels ;
        VAR_9 += VAR_8 ;
        FUNC_5(&VAR_4->vd, VAR_8) ;
    }

    VAR_5->nb_samples = VAR_9;
    *VAR_2 = VAR_9 > 0;
    return VAR_3->size;
}
