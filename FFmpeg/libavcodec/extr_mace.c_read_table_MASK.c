
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ int16_t ;
struct TYPE_5__ {int stride; int* tab1; scalar_t__* tab2; } ;
struct TYPE_4__ {int index; } ;
typedef TYPE_1__ ChannelData ;


 TYPE_2__* VAR_0 ;

__attribute__((used)) static int16_t FUNC_0(ChannelData *VAR_1, uint8_t VAR_2, int VAR_3)
{
    int16_t VAR_4;

    if (VAR_2 < VAR_0[VAR_3].stride)
        VAR_4 = VAR_0[VAR_3].tab2[((VAR_1->index & 0x7f0) >> 4) * VAR_0[VAR_3].stride + VAR_2];
    else
        VAR_4 = - 1 - VAR_0[VAR_3].tab2[((VAR_1->index & 0x7f0) >> 4)*VAR_0[VAR_3].stride + 2*VAR_0[VAR_3].stride-VAR_2-1];

    if (( VAR_1->index += VAR_0[VAR_3].tab1[VAR_2]-(VAR_1->index >> 5) ) < 0)
      VAR_1->index = 0;

    return VAR_4;
}
