
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int* children; } ;
typedef TYPE_1__ hnode ;
struct TYPE_10__ {long height; long width; } ;
struct TYPE_9__ {long* linesize; int** data; } ;
struct TYPE_8__ {int* num_huff_nodes; int size; unsigned char* buf; TYPE_6__* avctx; TYPE_1__** huff_nodes; } ;
typedef TYPE_2__ IdcinContext ;
typedef TYPE_3__ AVFrame ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_6__*,int ,char*) ;

__attribute__((used)) static int FUNC_1(IdcinContext *VAR_2, AVFrame *VAR_3)
{
    hnode *VAR_4;
    long VAR_5, VAR_6;
    int VAR_7;
    unsigned char VAR_8 = 0;
    int VAR_9, VAR_10, VAR_11;

    VAR_7 = VAR_9 = VAR_11 = 0;
    for (VAR_6 = 0; VAR_6 < (VAR_3->linesize[0] * VAR_2->avctx->height);
        VAR_6 += VAR_3->linesize[0]) {
        for (VAR_5 = VAR_6; VAR_5 < VAR_6 + VAR_2->avctx->width; VAR_5++) {
            VAR_10 = VAR_2->num_huff_nodes[VAR_7];
            VAR_4 = VAR_2->huff_nodes[VAR_7];

            while(VAR_10 >= VAR_1) {
                if(!VAR_9) {
                    if(VAR_11 >= VAR_2->size) {
                        FUNC_0(VAR_2->avctx, VAR_0, "Huffman decode error.\n");
                        return -1;
                    }
                    VAR_9 = 8;
                    VAR_8 = VAR_2->buf[VAR_11++];
                }

                VAR_10 = VAR_4[VAR_10].children[VAR_8 & 0x01];
                VAR_8 = VAR_8 >> 1;
                VAR_9--;
            }

            VAR_3->data[0][VAR_5] = VAR_10;
            VAR_7 = VAR_10;
        }
    }

    return 0;
}
