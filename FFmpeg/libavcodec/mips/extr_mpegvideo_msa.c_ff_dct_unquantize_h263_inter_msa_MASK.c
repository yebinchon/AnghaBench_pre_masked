
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t int32_t ;
typedef int int16_t ;
struct TYPE_4__ {size_t* raster_end; } ;
struct TYPE_5__ {size_t* block_last_index; TYPE_1__ inter_scantable; } ;
typedef TYPE_2__ MpegEncContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,size_t,size_t,size_t,int ) ;

void FUNC_2(MpegEncContext *VAR_0,
                                      int16_t *VAR_1, int32_t VAR_2,
                                      int32_t VAR_3)
{
    int32_t VAR_4, VAR_5;
    int32_t VAR_6;

    FUNC_0(VAR_0->block_last_index[VAR_2] >= 0);

    VAR_5 = (VAR_3 - 1) | 1;
    VAR_4 = VAR_3 << 1;

    VAR_6 = VAR_0->inter_scantable.raster_end[VAR_0->block_last_index[VAR_2]];

    FUNC_1(VAR_1, VAR_4, VAR_5, VAR_6, 0);
}
