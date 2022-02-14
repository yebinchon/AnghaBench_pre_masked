
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int pbr_length; scalar_t__ pbr_buffer; scalar_t__ pbr_delay; scalar_t__ frame_size; } ;
typedef TYPE_1__ DCAXllDecoder ;
typedef int DCAExssAsset ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__,int *,int) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,scalar_t__,scalar_t__,int *) ;

__attribute__((used)) static int FUNC_5(DCAXllDecoder *VAR_4, uint8_t *VAR_5, int VAR_6, DCAExssAsset *VAR_7)
{
    int VAR_8;

    if (VAR_6 > VAR_0 - VAR_4->pbr_length) {
        VAR_8 = FUNC_0(VAR_3);
        goto fail;
    }

    FUNC_2(VAR_4->pbr_buffer + VAR_4->pbr_length, VAR_5, VAR_6);
    VAR_4->pbr_length += VAR_6;


    if (VAR_4->pbr_delay > 0 && --VAR_4->pbr_delay)
        return FUNC_0(VAR_1);

    if ((VAR_8 = FUNC_4(VAR_4, VAR_4->pbr_buffer, VAR_4->pbr_length, VAR_7)) < 0)
        goto fail;

    if (VAR_4->frame_size > VAR_4->pbr_length) {
        VAR_8 = FUNC_0(VAR_2);
        goto fail;
    }

    if (VAR_4->frame_size == VAR_4->pbr_length) {

        FUNC_1(VAR_4);
    } else {
        VAR_4->pbr_length -= VAR_4->frame_size;
        FUNC_3(VAR_4->pbr_buffer, VAR_4->pbr_buffer + VAR_4->frame_size, VAR_4->pbr_length);
    }

    return 0;

fail:


    FUNC_1(VAR_4);
    return VAR_8;
}
