
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int8_t ;
struct TYPE_4__ {unsigned long buf_size; unsigned long* buf; unsigned long buf_start; int avctx; int lzws; } ;
typedef TYPE_1__ TiffEncoderContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;
 int FUNC_1 (int ,int ,char*,...) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *,unsigned long*,int const*,int) ;
 int FUNC_4 (int ,int const*,int) ;
 int FUNC_5 (int *,unsigned long,int const*,int,int,int,int,int,int ) ;
 int FUNC_6 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_7(TiffEncoderContext *VAR_4, const int8_t *VAR_5,
                        uint8_t *VAR_6, int VAR_7, int VAR_8)
{
    switch (VAR_8) {
    case 128:
        if (FUNC_2(VAR_4, VAR_7))
            return FUNC_0(VAR_2);
        FUNC_6(VAR_6, VAR_5, VAR_7);
        return VAR_7;
    case 129:
        return FUNC_5(VAR_6, VAR_4->buf_size - (*VAR_4->buf - VAR_4->buf_start),
                             VAR_5, 1, VAR_7, 2, 0xff, -1, 0);
    case 130:
        return FUNC_4(VAR_4->lzws, VAR_5, VAR_7);
    default:
        FUNC_1(VAR_4->avctx, VAR_1, "Unsupported compression method: %d\n",
               VAR_8);
        return FUNC_0(VAR_2);
    }
}
