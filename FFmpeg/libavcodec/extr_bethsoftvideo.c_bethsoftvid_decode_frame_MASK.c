
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_16__ {int* linesize; int ** data; } ;
struct TYPE_15__ {int width; int height; TYPE_2__* priv_data; } ;
struct TYPE_14__ {scalar_t__ side_data_elems; int size; int data; TYPE_1__* side_data; } ;
struct TYPE_13__ {TYPE_7__* frame; int g; } ;
struct TYPE_12__ {scalar_t__ type; int size; int data; } ;
typedef TYPE_2__ BethsoftvidContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;




 int FUNC_0 (void*,TYPE_7__*) ;
 int FUNC_1 (TYPE_4__*,int ,char*) ;
 int FUNC_2 (int *,int *,int) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int) ;
 void* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_4__*,TYPE_7__*,int ) ;
 int FUNC_9 (int *,void*,int) ;
 int FUNC_10 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_11(AVCodecContext *VAR_3,
                              void *VAR_4, int *VAR_5,
                              AVPacket *VAR_6)
{
    BethsoftvidContext * VAR_7 = VAR_3->priv_data;
    char VAR_8;
    uint8_t * VAR_9;
    uint8_t * VAR_10;
    int VAR_11 = VAR_3->width;
    int VAR_12;
    int VAR_13, VAR_14;
    int VAR_15;

    if ((VAR_14 = FUNC_8(VAR_3, VAR_7->frame, 0)) < 0)
        return VAR_14;
    VAR_12 = VAR_7->frame->linesize[0] - VAR_3->width;

    if (VAR_6->side_data_elems > 0 &&
        VAR_6->side_data[0].type == VAR_2) {
        FUNC_5(&VAR_7->g, VAR_6->side_data[0].data,
                         VAR_6->side_data[0].size);
        if ((VAR_14 = FUNC_10(VAR_7)) < 0)
            return VAR_14;
    }

    FUNC_5(&VAR_7->g, VAR_6->data, VAR_6->size);
    VAR_9 = VAR_7->frame->data[0];
    VAR_10 = VAR_7->frame->data[0] + VAR_7->frame->linesize[0] * VAR_3->height;

    switch(VAR_8 = FUNC_3(&VAR_7->g)){
        case 131: {
            *VAR_5 = 0;
            if ((VAR_14 = FUNC_10(VAR_7)) < 0) {
                FUNC_1(VAR_3, VAR_1, "error reading palette\n");
                return VAR_14;
            }
            return FUNC_7(&VAR_7->g);
        }
        case 128:
            VAR_15 = FUNC_4(&VAR_7->g);
            if(VAR_15 >= VAR_3->height)
                return VAR_0;
            VAR_9 += VAR_7->frame->linesize[0] * VAR_15;
        case 129:
        case 130:
            break;
        default:
            return VAR_0;
    }


    while((VAR_13 = FUNC_3(&VAR_7->g))){
        int VAR_16 = VAR_13 & 0x7f;


        while(VAR_16 > VAR_11){
            if(VAR_13 < 0x80)
                FUNC_2(&VAR_7->g, VAR_9, VAR_11);
            else if(VAR_8 == 130)
                FUNC_9(VAR_9, FUNC_6(&VAR_7->g), VAR_11);
            VAR_16 -= VAR_11;
            VAR_9 += VAR_11 + VAR_12;
            VAR_11 = VAR_3->width;
            if(VAR_9 == VAR_10)
                goto end;
        }


        if(VAR_13 < 0x80)
            FUNC_2(&VAR_7->g, VAR_9, VAR_16);
        else if(VAR_8 == 130)
            FUNC_9(VAR_9, FUNC_3(&VAR_7->g), VAR_16);
        VAR_11 -= VAR_16;
        VAR_9 += VAR_16;
    }
    end:

    if ((VAR_14 = FUNC_0(VAR_4, VAR_7->frame)) < 0)
        return VAR_14;

    *VAR_5 = 1;

    return VAR_6->size;
}
