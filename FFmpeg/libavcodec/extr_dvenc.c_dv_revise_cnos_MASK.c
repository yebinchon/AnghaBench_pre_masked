
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int bpm; int* block_sizes; } ;
struct TYPE_5__ {int cno; } ;
typedef TYPE_1__ EncBlockInfo ;
typedef TYPE_2__ AVDVProfile ;



__attribute__((used)) static inline void FUNC_0(uint8_t *VAR_0, EncBlockInfo *VAR_1, const AVDVProfile *VAR_2)
{
    uint8_t *VAR_3;
    int VAR_4, VAR_5;

    for (VAR_4 = 0; VAR_4 < 5; VAR_4++) {
        VAR_3 = VAR_0 + VAR_4*80 + 4;
        for (VAR_5 = 0; VAR_5 < VAR_2->bpm; VAR_5++) {

            VAR_3[1] &= 0xCF;

            VAR_3[1] |= VAR_1[VAR_2->bpm*VAR_4+VAR_5].cno << 4;

            VAR_3 += VAR_2->block_sizes[VAR_5] >> 3;
        }
    }
}
