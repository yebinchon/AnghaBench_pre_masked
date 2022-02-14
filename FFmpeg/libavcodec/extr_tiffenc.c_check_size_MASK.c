
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {scalar_t__ buf_size; scalar_t__* buf; scalar_t__ buf_start; int avctx; } ;
typedef TYPE_1__ TiffEncoderContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;

__attribute__((used)) static inline int FUNC_1(TiffEncoderContext *VAR_1, uint64_t VAR_2)
{
    if (VAR_1->buf_size < *VAR_1->buf - VAR_1->buf_start + VAR_2) {
        *VAR_1->buf = VAR_1->buf_start + VAR_1->buf_size + 1;
        FUNC_0(VAR_1->avctx, VAR_0, "Buffer is too small\n");
        return 1;
    }
    return 0;
}
