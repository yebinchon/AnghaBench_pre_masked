
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int nb_samples; scalar_t__* data; int channel_layout; } ;
typedef TYPE_1__ AVFrame ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int const,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(const AVFrame *VAR_1)
{
    const int VAR_2 = VAR_1->nb_samples * FUNC_0(VAR_1->channel_layout);
    const uint16_t *VAR_3 = (uint16_t*)VAR_1->data[0];
    const uint16_t *VAR_4 = VAR_3 + VAR_2;

    while (VAR_3 < VAR_4) {
        FUNC_2(*VAR_3 & 0xff, VAR_0);
        FUNC_2(*VAR_3>>8 & 0xff, VAR_0);
        VAR_3++;
    }
    FUNC_1(VAR_0);
}
