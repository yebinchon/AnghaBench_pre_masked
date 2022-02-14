
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_6__ {int bitstream_size; void* bitstream; int allocated_size; } ;
typedef TYPE_2__ VTContext ;
struct TYPE_7__ {TYPE_1__* internal; } ;
struct TYPE_5__ {TYPE_2__* hwaccel_priv_data; } ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (void*,int) ;
 int VAR_0 ;
 void* FUNC_2 (void*,int *,int) ;
 int FUNC_3 (void*,int const*,int) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_1,
                                            const uint8_t *VAR_2,
                                            uint32_t VAR_3)
{
    VTContext *VAR_4 = VAR_1->internal->hwaccel_priv_data;
    void *VAR_5;

    VAR_5 = FUNC_2(VAR_4->bitstream,
                          &VAR_4->allocated_size,
                          VAR_4->bitstream_size+VAR_3+4);
    if (!VAR_5)
        return FUNC_0(VAR_0);

    VAR_4->bitstream = VAR_5;

    FUNC_1(VAR_4->bitstream + VAR_4->bitstream_size, VAR_3);
    FUNC_3(VAR_4->bitstream + VAR_4->bitstream_size + 4, VAR_2, VAR_3);

    VAR_4->bitstream_size += VAR_3 + 4;

    return 0;
}
