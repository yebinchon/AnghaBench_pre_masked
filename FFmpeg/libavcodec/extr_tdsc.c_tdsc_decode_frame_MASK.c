
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uLongf ;
struct TYPE_17__ {int width; scalar_t__ height; TYPE_1__* priv_data; } ;
struct TYPE_16__ {int key_frame; int pict_type; int * linesize; int * data; } ;
struct TYPE_15__ {int size; int data; } ;
struct TYPE_14__ {int width; scalar_t__ height; int deflatelen; int refframe; int gbc; int deflatebuffer; } ;
typedef TYPE_1__ TDSCContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char,char,char,char) ;
 int VAR_5 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_4__*,int ,char*,...) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_9 (TYPE_4__*,int ,int ) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*,int) ;
 int FUNC_12 (int ,int*,int ,int) ;

__attribute__((used)) static int FUNC_13(AVCodecContext *VAR_6, void *VAR_7,
                             int *VAR_8, AVPacket *VAR_9)
{
    TDSCContext *VAR_10 = VAR_6->priv_data;
    AVFrame *VAR_11 = VAR_7;
    int VAR_12, VAR_13, VAR_14 = 0;
    uLongf VAR_15;


    if (VAR_10->width != VAR_6->width || VAR_10->height != VAR_6->height) {
        VAR_10->deflatelen = VAR_6->width * VAR_6->height * (3 + 1);
        VAR_12 = FUNC_3(&VAR_10->deflatebuffer, VAR_10->deflatelen);
        if (VAR_12 < 0)
            return VAR_12;
    }
    VAR_15 = VAR_10->deflatelen;


    VAR_12 = FUNC_12(VAR_10->deflatebuffer, &VAR_15, VAR_9->data, VAR_9->size);
    if (VAR_12) {
        FUNC_2(VAR_6, VAR_2, "Deflate error %d.\n", VAR_12);
        return VAR_1;
    }

    FUNC_6(&VAR_10->gbc, VAR_10->deflatebuffer, VAR_15);


    if (FUNC_4(&VAR_10->gbc) < 4 + 4) {
        FUNC_2(VAR_6, VAR_2, "Frame is too small.\n");
        return VAR_0;
    }


    VAR_13 = FUNC_5(&VAR_10->gbc);

    if (VAR_13 == FUNC_0('T','D','S','F')) {
        int VAR_16;
        if (FUNC_4(&VAR_10->gbc) < VAR_5) {
            FUNC_2(VAR_6, VAR_2, "TDSF tag is too small.\n");
            return VAR_0;
        }

        VAR_16 = FUNC_5(&VAR_10->gbc);

        FUNC_7(&VAR_10->gbc, 4);
        VAR_14 = FUNC_5(&VAR_10->gbc) == 0x30;

        VAR_12 = FUNC_11(VAR_6, VAR_16);
        if (VAR_12 < 0)
            return VAR_12;


        if (FUNC_4(&VAR_10->gbc) >= 4 + 4)
            VAR_13 = FUNC_5(&VAR_10->gbc);
    }


    if (VAR_13 == FUNC_0('D','T','S','M')) {

        int VAR_17 = FUNC_5(&VAR_10->gbc);

        if (FUNC_4(&VAR_10->gbc) < VAR_17) {
            FUNC_2(VAR_6, VAR_2, "DTSM tag is too small.\n");
            return VAR_0;
        }

        VAR_12 = FUNC_10(VAR_6);
        if (VAR_12 < 0)
            return VAR_12;
    }


    VAR_12 = FUNC_8(VAR_6, VAR_11, 0);
    if (VAR_12 < 0)
        return VAR_12;

    VAR_12 = FUNC_1(VAR_11, VAR_10->refframe);
    if (VAR_12 < 0)
        return VAR_12;


    FUNC_9(VAR_6, VAR_11->data[0], VAR_11->linesize[0]);


    if (VAR_14) {
        VAR_11->pict_type = VAR_3;
        VAR_11->key_frame = 1;
    } else {
        VAR_11->pict_type = VAR_4;
    }
    *VAR_8 = 1;

    return VAR_9->size;
}
