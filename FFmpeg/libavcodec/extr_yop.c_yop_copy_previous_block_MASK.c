
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_3__ {void** dstptr; void** dstbuf; int avctx; } ;
typedef TYPE_1__ YopDecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int** VAR_2 ;

__attribute__((used)) static int FUNC_1(YopDecContext *VAR_3, int VAR_4, int VAR_5)
{
    uint8_t *VAR_6;


    VAR_6 = VAR_3->dstptr + VAR_2[VAR_5][0] +
             VAR_4 * VAR_2[VAR_5][1];
    if (VAR_6 < VAR_3->dstbuf) {
        FUNC_0(VAR_3->avctx, VAR_1, "File probably corrupt\n");
        return VAR_0;
    }

    VAR_3->dstptr[0] = VAR_6[0];
    VAR_3->dstptr[1] = VAR_6[1];
    VAR_3->dstptr[VAR_4] = VAR_6[VAR_4];
    VAR_3->dstptr[VAR_4 + 1] = VAR_6[VAR_4 + 1];

    return 0;
}
