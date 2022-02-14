
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_4__ {int* permutated; } ;
struct TYPE_5__ {int* last_dc; int* block_last_index; TYPE_1__ intra_scantable; int * mjpeg_ctx; } ;
typedef TYPE_2__ MpegEncContext ;
typedef int MJpegContext ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int,int,int) ;

__attribute__((used)) static void FUNC_2(MpegEncContext *VAR_0, int16_t *VAR_1, int VAR_2)
{
    int VAR_3, VAR_4, VAR_5;
    int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
    MJpegContext *VAR_11 = VAR_0->mjpeg_ctx;


    VAR_6 = (VAR_2 <= 3 ? 0 : (VAR_2&1) + 1);
    VAR_5 = (VAR_2 <= 3 ? 0 : 1);
    VAR_7 = VAR_1[0];
    VAR_9 = VAR_7 - VAR_0->last_dc[VAR_6];

    FUNC_1(VAR_11, VAR_5, VAR_9, 0);

    VAR_0->last_dc[VAR_6] = VAR_7;



    VAR_10 = 0;
    VAR_8 = VAR_0->block_last_index[VAR_2];
    VAR_5 |= 2;

    for(VAR_3=1;VAR_3<=VAR_8;VAR_3++) {
        VAR_4 = VAR_0->intra_scantable.permutated[VAR_3];
        VAR_9 = VAR_1[VAR_4];

        if (VAR_9 == 0) {
            VAR_10++;
        } else {
            while (VAR_10 >= 16) {
                FUNC_0(VAR_11, VAR_5, 0xf0);
                VAR_10 -= 16;
            }
            FUNC_1(VAR_11, VAR_5, VAR_9, VAR_10);
            VAR_10 = 0;
        }
    }


    if (VAR_8 < 63 || VAR_10 != 0)
        FUNC_0(VAR_11, VAR_5, 0);
}
