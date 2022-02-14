
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int range; int low; int overread; scalar_t__* bytestream; scalar_t__* bytestream_end; } ;
typedef TYPE_1__ RangeCoder ;



__attribute__((used)) static inline void FUNC_0(RangeCoder *VAR_0)
{
    if (VAR_0->range < 0x100) {
        VAR_0->range <<= 8;
        VAR_0->low <<= 8;
        if (VAR_0->bytestream < VAR_0->bytestream_end) {
            VAR_0->low += VAR_0->bytestream[0];
            VAR_0->bytestream++;
        } else
            VAR_0->overread ++;
    }
}
