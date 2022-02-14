
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int xll_sync_offset; scalar_t__ xll_delay_nframes; scalar_t__ xll_sync_present; } ;
struct TYPE_8__ {int frame_size; } ;
typedef TYPE_1__ DCAXllDecoder ;
typedef TYPE_2__ DCAExssAsset ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int *,int,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int *,int,TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(DCAXllDecoder *VAR_2, uint8_t *VAR_3, int VAR_4, DCAExssAsset *VAR_5)
{
    int VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);



    if (VAR_6 == FUNC_0(VAR_0) && VAR_5->xll_sync_present && VAR_5->xll_sync_offset < VAR_4) {

        VAR_3 += VAR_5->xll_sync_offset;
        VAR_4 -= VAR_5->xll_sync_offset;




        if (VAR_5->xll_delay_nframes > 0) {
            if ((VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5->xll_delay_nframes)) < 0)
                return VAR_6;
            return FUNC_0(VAR_0);
        }


        VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);
    }

    if (VAR_6 < 0)
        return VAR_6;

    if (VAR_2->frame_size > VAR_4)
        return FUNC_0(VAR_1);


    if (VAR_2->frame_size < VAR_4)
        if ((VAR_6 = FUNC_1(VAR_2, VAR_3 + VAR_2->frame_size, VAR_4 - VAR_2->frame_size, 0)) < 0)
            return VAR_6;

    return 0;
}
