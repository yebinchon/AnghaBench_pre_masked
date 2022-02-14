
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nb_nans; int nb_infs; int nb_denormals; } ;
typedef TYPE_1__ ChannelStats ;
typedef int AudioStatsContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (float) ;

__attribute__((used)) static inline void FUNC_1(AudioStatsContext *VAR_3, ChannelStats *VAR_4, float VAR_5)
{
    int VAR_6 = FUNC_0(VAR_5);

    VAR_4->nb_nans += VAR_6 == VAR_1;
    VAR_4->nb_infs += VAR_6 == VAR_0;
    VAR_4->nb_denormals += VAR_6 == VAR_2;
}
