
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ch_count; int bps; scalar_t__* ch; scalar_t__ planar; } ;
typedef TYPE_1__ AudioData ;



__attribute__((used)) static void FUNC_0(AudioData *VAR_0, AudioData *VAR_1, int VAR_2){
    int VAR_3;
    if(VAR_1->planar){
        for(VAR_3=0; VAR_3<VAR_0->ch_count; VAR_3++)
            VAR_0->ch[VAR_3]= VAR_1->ch[VAR_3] + VAR_2*VAR_0->bps;
    }else{
        for(VAR_3=VAR_0->ch_count-1; VAR_3>=0; VAR_3--)
            VAR_0->ch[VAR_3]= VAR_1->ch[0] + (VAR_3 + VAR_2*VAR_0->ch_count) * VAR_0->bps;
    }
}
