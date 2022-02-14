
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int range; int low; scalar_t__ bytestream; scalar_t__ bytestream_end; int overread; } ;
typedef TYPE_1__ lag_rac ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(lag_rac *VAR_0)
{
    while (VAR_0->range <= 0x800000) {
        VAR_0->low <<= 8;
        VAR_0->range <<= 8;
        VAR_0->low |= 0xff & (FUNC_0(VAR_0->bytestream) >> 1);
        if (VAR_0->bytestream < VAR_0->bytestream_end)
            VAR_0->bytestream++;
        else
            VAR_0->overread++;
    }
}
