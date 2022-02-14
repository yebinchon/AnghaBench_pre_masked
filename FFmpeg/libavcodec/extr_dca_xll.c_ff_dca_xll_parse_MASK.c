
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {scalar_t__ hd_stream_id; int xll_offset; int xll_size; } ;
struct TYPE_10__ {scalar_t__ hd_stream_id; scalar_t__ pbr_length; } ;
typedef TYPE_1__ DCAXllDecoder ;
typedef TYPE_2__ DCAExssAsset ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *,int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,int *,int ,TYPE_2__*) ;

int FUNC_3(DCAXllDecoder *VAR_0, uint8_t *VAR_1, DCAExssAsset *VAR_2)
{
    int VAR_3;

    if (VAR_0->hd_stream_id != VAR_2->hd_stream_id) {
        FUNC_0(VAR_0);
        VAR_0->hd_stream_id = VAR_2->hd_stream_id;
    }

    if (VAR_0->pbr_length)
        VAR_3 = FUNC_2(VAR_0, VAR_1 + VAR_2->xll_offset, VAR_2->xll_size, VAR_2);
    else
        VAR_3 = FUNC_1(VAR_0, VAR_1 + VAR_2->xll_offset, VAR_2->xll_size, VAR_2);

    return VAR_3;
}
