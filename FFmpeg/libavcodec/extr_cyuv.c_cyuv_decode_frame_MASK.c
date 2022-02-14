
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef unsigned char uint8_t ;
struct TYPE_13__ {scalar_t__ codec_id; int pix_fmt; TYPE_1__* priv_data; } ;
struct TYPE_12__ {unsigned char** data; int* linesize; } ;
struct TYPE_11__ {unsigned char* data; int size; } ;
struct TYPE_10__ {int height; int width; } ;
typedef TYPE_1__ CyuvDecodeContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_4__*,int ,char*,int,int) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_3 (unsigned char*,unsigned char const*,int) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_5,
                             void *VAR_6, int *VAR_7,
                             AVPacket *VAR_8)
{
    const uint8_t *VAR_9 = VAR_8->data;
    int VAR_10 = VAR_8->size;
    CyuvDecodeContext *VAR_11=VAR_5->priv_data;
    AVFrame *VAR_12 = VAR_6;

    unsigned char *VAR_13;
    unsigned char *VAR_14;
    unsigned char *VAR_15;
    int VAR_16;
    int VAR_17;
    int VAR_18;


    const signed char *VAR_19 = (const signed char*)VAR_9 + 0;
    const signed char *VAR_20 = (const signed char*)VAR_9 + 16;
    const signed char *VAR_21 = (const signed char*)VAR_9 + 32;

    unsigned char VAR_22, VAR_23, VAR_24;
    int VAR_25;
    unsigned char VAR_26;
    int VAR_27;
    int VAR_28 = VAR_11->height * FUNC_0(VAR_11->width,2) * 2;
    int VAR_29;

    if (VAR_5->codec_id == VAR_1) {
        VAR_19 = VAR_20;
        VAR_20 = VAR_21;
    }




    if (VAR_10 == 48 + VAR_11->height * (VAR_11->width * 3 / 4)) {
        VAR_5->pix_fmt = VAR_4;
    } else if(VAR_10 == VAR_28 ) {
        VAR_5->pix_fmt = VAR_3;
    } else {
        FUNC_1(VAR_5, VAR_2, "got a buffer with %d bytes when %d were expected\n",
               VAR_10, 48 + VAR_11->height * (VAR_11->width * 3 / 4));
        return VAR_0;
    }


    VAR_25 = 48;

    if ((VAR_29 = FUNC_2(VAR_5, VAR_12, 0)) < 0)
        return VAR_29;

    VAR_13 = VAR_12->data[0];
    VAR_14 = VAR_12->data[1];
    VAR_15 = VAR_12->data[2];

    if (VAR_10 == VAR_28) {
        int VAR_30 = FUNC_0(VAR_11->width,2) * 2;
        VAR_13 += VAR_12->linesize[0] * VAR_11->height;
        for (VAR_25 = 0; VAR_25 < VAR_28; VAR_25 += VAR_30) {
            VAR_13 -= VAR_12->linesize[0];
            FUNC_3(VAR_13, VAR_9+VAR_25, VAR_30);
        }
    } else {


    for (VAR_16 = 0, VAR_17 = 0, VAR_18 = 0;
         VAR_16 < (VAR_11->height * VAR_12->linesize[0]);
         VAR_16 += VAR_12->linesize[0] - VAR_11->width,
         VAR_17 += VAR_12->linesize[1] - VAR_11->width / 4,
         VAR_18 += VAR_12->linesize[2] - VAR_11->width / 4) {


        VAR_26 = VAR_9[VAR_25++];
        VAR_14[VAR_17++] = VAR_23 = VAR_26 & 0xF0;
        VAR_13[VAR_16++] = VAR_22 = (VAR_26 & 0x0F) << 4;

        VAR_26 = VAR_9[VAR_25++];
        VAR_15[VAR_18++] = VAR_24 = VAR_26 & 0xF0;
        VAR_22 += VAR_19[VAR_26 & 0x0F];
        VAR_13[VAR_16++] = VAR_22;

        VAR_26 = VAR_9[VAR_25++];
        VAR_22 += VAR_19[VAR_26 & 0x0F];
        VAR_13[VAR_16++] = VAR_22;
        VAR_22 += VAR_19[(VAR_26 & 0xF0) >> 4];
        VAR_13[VAR_16++] = VAR_22;


        VAR_27 = VAR_11->width / 4 - 1;
        while (VAR_27--) {

            VAR_26 = VAR_9[VAR_25++];
            VAR_23 += VAR_20[(VAR_26 & 0xF0) >> 4];
            VAR_14[VAR_17++] = VAR_23;
            VAR_22 += VAR_19[VAR_26 & 0x0F];
            VAR_13[VAR_16++] = VAR_22;

            VAR_26 = VAR_9[VAR_25++];
            VAR_24 += VAR_21[(VAR_26 & 0xF0) >> 4];
            VAR_15[VAR_18++] = VAR_24;
            VAR_22 += VAR_19[VAR_26 & 0x0F];
            VAR_13[VAR_16++] = VAR_22;

            VAR_26 = VAR_9[VAR_25++];
            VAR_22 += VAR_19[VAR_26 & 0x0F];
            VAR_13[VAR_16++] = VAR_22;
            VAR_22 += VAR_19[(VAR_26 & 0xF0) >> 4];
            VAR_13[VAR_16++] = VAR_22;

        }
    }
    }

    *VAR_7 = 1;

    return VAR_10;
}
