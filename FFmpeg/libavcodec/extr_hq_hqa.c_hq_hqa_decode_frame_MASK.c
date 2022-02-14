
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_12__ ;


typedef unsigned int uint32_t ;
struct TYPE_22__ {TYPE_1__* priv_data; } ;
struct TYPE_21__ {int key_frame; int pict_type; } ;
struct TYPE_20__ {int size; int data; } ;
struct TYPE_18__ {int buffer; } ;
struct TYPE_19__ {TYPE_12__ gbc; } ;
typedef TYPE_1__ HQContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (char,char,char,char) ;
 int FUNC_1 (TYPE_4__*,int ,char*,...) ;
 int FUNC_2 (TYPE_12__*) ;
 void* FUNC_3 (TYPE_12__*) ;
 int FUNC_4 (TYPE_12__*,int ,int) ;
 unsigned int FUNC_5 (TYPE_12__*) ;
 int FUNC_6 (TYPE_12__*,int) ;
 int FUNC_7 (TYPE_4__*,int ,int) ;
 int FUNC_8 (TYPE_1__*,TYPE_3__*,unsigned int,unsigned int) ;
 int FUNC_9 (TYPE_1__*,TYPE_3__*,unsigned int) ;

__attribute__((used)) static int FUNC_10(AVCodecContext *VAR_3, void *VAR_4,
                               int *VAR_5, AVPacket *VAR_6)
{
    HQContext *VAR_7 = VAR_3->priv_data;
    AVFrame *VAR_8 = VAR_4;
    uint32_t VAR_9;
    unsigned int VAR_10;
    int VAR_11;
    unsigned VAR_12;

    FUNC_4(&VAR_7->gbc, VAR_6->data, VAR_6->size);
    if (FUNC_2(&VAR_7->gbc) < 4 + 4) {
        FUNC_1(VAR_3, VAR_1, "Frame is too small (%d).\n", VAR_6->size);
        return VAR_0;
    }

    VAR_9 = FUNC_5(&VAR_7->gbc);
    if (VAR_9 == FUNC_0('I', 'N', 'F', 'O')) {
        int VAR_13;
        FUNC_6(&VAR_7->gbc, 4);
        VAR_13 = FUNC_3(&VAR_7->gbc);
        if (FUNC_2(&VAR_7->gbc) < VAR_13) {
            FUNC_1(VAR_3, VAR_1, "Invalid INFO size (%d).\n", VAR_13);
            return VAR_0;
        }
        FUNC_7(VAR_3, VAR_7->gbc.buffer, VAR_13);

        FUNC_6(&VAR_7->gbc, VAR_13);
    }

    VAR_10 = FUNC_2(&VAR_7->gbc);
    if (VAR_10 < 4) {
        FUNC_1(VAR_3, VAR_1, "Frame is too small (%d).\n", VAR_10);
        return VAR_0;
    }




    VAR_12 = FUNC_3(&VAR_7->gbc);
    if ((VAR_12 & 0x00FFFFFF) == (FUNC_0('U', 'V', 'C', ' ') & 0x00FFFFFF)) {
        VAR_11 = FUNC_8(VAR_7, VAR_8, VAR_12 >> 24, VAR_10);
    } else if (VAR_12 == FUNC_0('H', 'Q', 'A', '1')) {
        VAR_11 = FUNC_9(VAR_7, VAR_8, VAR_10);
    } else {
        FUNC_1(VAR_3, VAR_1, "Not a HQ/HQA frame.\n");
        return VAR_0;
    }
    if (VAR_11 < 0) {
        FUNC_1(VAR_3, VAR_1, "Error decoding frame.\n");
        return VAR_11;
    }

    VAR_8->key_frame = 1;
    VAR_8->pict_type = VAR_2;

    *VAR_5 = 1;

    return VAR_6->size;
}
