
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned char uint8_t ;
struct TYPE_4__ {int num_windows; int num_swb; scalar_t__* group_len; } ;
struct TYPE_5__ {scalar_t__* band_type; int * zeroes; TYPE_1__ ics; } ;
typedef TYPE_2__ SingleChannelElement ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline void FUNC_0(const SingleChannelElement *VAR_1, uint8_t *VAR_2)
{
    unsigned char VAR_3 = 0;
    int VAR_4, VAR_5;

    for (VAR_5 = 0; VAR_5 < 128; VAR_5++)
        VAR_2[VAR_5] = VAR_5;


    for (VAR_4 = 0; VAR_4 < VAR_1->ics.num_windows; VAR_4 += VAR_1->ics.group_len[VAR_4]) {
        for (VAR_5 = 0; VAR_5 < VAR_1->ics.num_swb; VAR_5++) {
            if (!VAR_1->zeroes[VAR_4*16+VAR_5] && VAR_1->band_type[VAR_4*16+VAR_5] < VAR_0)
                VAR_3 = VAR_2[VAR_3] = VAR_4*16+VAR_5;
        }
    }
    VAR_2[VAR_3] = VAR_3;
}
