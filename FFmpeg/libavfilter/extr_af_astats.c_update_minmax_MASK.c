
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double min; double max; } ;
typedef TYPE_1__ ChannelStats ;
typedef int AudioStatsContext ;



__attribute__((used)) static inline void FUNC_0(AudioStatsContext *VAR_0, ChannelStats *VAR_1, double VAR_2)
{
    if (VAR_2 < VAR_1->min)
        VAR_1->min = VAR_2;
    if (VAR_2 > VAR_1->max)
        VAR_1->max = VAR_2;
}
