
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct MovChannelLayoutMap {int tag; int layout; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct MovChannelLayoutMap** VAR_2 ;

uint64_t FUNC_0(uint32_t VAR_3, uint32_t VAR_4)
{
    int VAR_5, VAR_6;
    const struct MovChannelLayoutMap *VAR_7;


    if (VAR_3 == VAR_1)
        return 0;


    if (VAR_3 == VAR_0)
        return VAR_4 < 0x40000 ? VAR_4 : 0;


    VAR_6 = VAR_3 & 0xFFFF;
    if (VAR_6 > 9)
        VAR_6 = 0;
    VAR_7 = VAR_2[VAR_6];


    for (VAR_5 = 0; VAR_7[VAR_5].tag != 0; VAR_5++) {
        if (VAR_7[VAR_5].tag == VAR_3)
            break;
    }
    return VAR_7[VAR_5].layout;
}
