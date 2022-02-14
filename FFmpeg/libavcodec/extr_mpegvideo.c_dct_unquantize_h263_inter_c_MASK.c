
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_4__ {int* raster_end; } ;
struct TYPE_5__ {size_t* block_last_index; TYPE_1__ inter_scantable; } ;
typedef TYPE_2__ MpegEncContext ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(MpegEncContext *VAR_0,
                                  int16_t *VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7;
    int VAR_8;

    FUNC_0(VAR_0->block_last_index[VAR_2]>=0);

    VAR_7 = (VAR_3 - 1) | 1;
    VAR_6 = VAR_3 << 1;

    VAR_8= VAR_0->inter_scantable.raster_end[ VAR_0->block_last_index[VAR_2] ];

    for(VAR_4=0; VAR_4<=VAR_8; VAR_4++) {
        VAR_5 = VAR_1[VAR_4];
        if (VAR_5) {
            if (VAR_5 < 0) {
                VAR_5 = VAR_5 * VAR_6 - VAR_7;
            } else {
                VAR_5 = VAR_5 * VAR_6 + VAR_7;
            }
            VAR_1[VAR_4] = VAR_5;
        }
    }
}
