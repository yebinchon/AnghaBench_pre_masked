
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int err_recognition; TYPE_2__* priv_data; } ;
struct TYPE_7__ {int crctab; } ;
struct TYPE_6__ {int size_in_bits; scalar_t__ buffer; } ;
typedef TYPE_1__ GetBitContext ;
typedef TYPE_2__ DCAContext ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int,scalar_t__,int) ;

__attribute__((used)) static inline int FUNC_1(AVCodecContext *VAR_2, GetBitContext *VAR_3,
                                   int VAR_4, int VAR_5)
{
    DCAContext *VAR_6 = VAR_2->priv_data;

    if (!(VAR_2->err_recognition & (VAR_1 | VAR_0)))
        return 0;
    if (((VAR_4 | VAR_5) & 7) || VAR_4 < 0 || VAR_5 > VAR_3->size_in_bits || VAR_5 - VAR_4 < 16)
        return -1;
    if (FUNC_0(VAR_6->crctab, 0xffff, VAR_3->buffer + VAR_4 / 8, (VAR_5 - VAR_4) / 8))
        return -1;
    return 0;
}
