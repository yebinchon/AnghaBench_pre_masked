
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ CRC; scalar_t__ crc_extra_bits; int avctx; scalar_t__ got_extra_bits; } ;
typedef TYPE_1__ WavpackFrameContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;

__attribute__((used)) static inline int FUNC_1(WavpackFrameContext *VAR_2, uint32_t VAR_3,
                               uint32_t VAR_4)
{
    if (VAR_3 != VAR_2->CRC) {
        FUNC_0(VAR_2->avctx, VAR_1, "CRC error\n");
        return VAR_0;
    }
    if (VAR_2->got_extra_bits && VAR_4 != VAR_2->crc_extra_bits) {
        FUNC_0(VAR_2->avctx, VAR_1, "Extra bits CRC error\n");
        return VAR_0;
    }

    return 0;
}
