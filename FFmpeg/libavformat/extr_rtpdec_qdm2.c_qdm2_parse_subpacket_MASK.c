
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int* len; int ** buf; } ;
typedef TYPE_1__ PayloadContext ;
typedef int AVStream ;


 int VAR_0 ;
 unsigned int FUNC_0 (int const*) ;
 unsigned int FUNC_1 (unsigned int,int) ;
 int FUNC_2 (int *,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_3(PayloadContext *VAR_1, AVStream *VAR_2,
                                const uint8_t *VAR_3, const uint8_t *VAR_4)
{
    const uint8_t *VAR_5 = VAR_3;
    unsigned int VAR_6, VAR_7, VAR_8, VAR_9;


    VAR_6 = *VAR_5++;
    VAR_8 = *VAR_5++;
    if (VAR_8 & 0x80) {
        VAR_7 = FUNC_0(VAR_5);
        VAR_5 += 2;
        VAR_8 &= 0x7F;
    } else
        VAR_7 = *VAR_5++;

    if (VAR_4 - VAR_5 < VAR_7 + (VAR_8 == 0x7F) || VAR_6 >= 0x80)
        return VAR_0;
    if (VAR_8 == 0x7F)
        VAR_8 |= *VAR_5++ << 8;


    VAR_9 = FUNC_1(VAR_7 + (VAR_5 - &VAR_3[1]), 0x800 - VAR_1->len[VAR_6]);
    FUNC_2(&VAR_1->buf[VAR_6][VAR_1->len[VAR_6]], VAR_3 + 1, VAR_9);
    VAR_1->len[VAR_6] += VAR_9;

    return VAR_5 + VAR_7 - VAR_3;
}
