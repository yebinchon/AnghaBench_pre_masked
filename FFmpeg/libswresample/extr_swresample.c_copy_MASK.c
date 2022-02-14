
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ planar; int bps; int ch_count; int * ch; } ;
typedef TYPE_1__ AudioData ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(AudioData *VAR_0, AudioData *VAR_1,
                 int VAR_2){
    FUNC_0(VAR_0->planar == VAR_1->planar);
    FUNC_0(VAR_0->bps == VAR_1->bps);
    FUNC_0(VAR_0->ch_count == VAR_1->ch_count);
    if(VAR_0->planar){
        int VAR_3;
        for(VAR_3=0; VAR_3<VAR_0->ch_count; VAR_3++)
            FUNC_1(VAR_0->ch[VAR_3], VAR_1->ch[VAR_3], VAR_2*VAR_0->bps);
    }else
        FUNC_1(VAR_0->ch[0], VAR_1->ch[0], VAR_2*VAR_0->ch_count*VAR_0->bps);
}
