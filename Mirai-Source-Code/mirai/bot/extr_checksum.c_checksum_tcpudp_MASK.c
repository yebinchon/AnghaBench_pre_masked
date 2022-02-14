
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct iphdr {int saddr; int daddr; int protocol; } ;


 scalar_t__ FUNC_0 (int ) ;

uint16_t FUNC_1(struct iphdr *VAR_0, void *VAR_1, uint16_t VAR_2, int VAR_3)
{
    const uint16_t *VAR_4 = VAR_1;
    uint32_t VAR_5 = VAR_0->saddr;
    uint32_t VAR_6 = VAR_0->daddr;
    uint32_t VAR_7 = 0;
    int VAR_8 = VAR_3;

    while (VAR_3 > 1)
    {
        VAR_7 += *VAR_4;
        VAR_4++;
        VAR_3 -= 2;
    }

    if (VAR_3 == 1)
        VAR_7 += *((uint8_t *) VAR_4);

    VAR_7 += (VAR_5 >> 16) & 0xFFFF;
    VAR_7 += VAR_5 & 0xFFFF;
    VAR_7 += (VAR_6 >> 16) & 0xFFFF;
    VAR_7 += VAR_6 & 0xFFFF;
    VAR_7 += FUNC_0(VAR_0->protocol);
    VAR_7 += VAR_2;

    while (VAR_7 >> 16)
        VAR_7 = (VAR_7 & 0xFFFF) + (VAR_7 >> 16);

    return ((uint16_t) (~VAR_7));
}
