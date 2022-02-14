
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bps; int ch_count; int count; int data; scalar_t__* ch; scalar_t__ planar; } ;
typedef TYPE_1__ AudioData ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int ) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (scalar_t__,scalar_t__,int) ;

int FUNC_6(AudioData *VAR_4, int VAR_5){
    int VAR_6, VAR_7;
    AudioData VAR_8;

    if(VAR_5 < 0 || VAR_5 > VAR_3/2/VAR_4->bps/VAR_4->ch_count)
        return FUNC_0(VAR_1);

    if(VAR_4->count >= VAR_5)
        return 0;

    VAR_5*=2;

    VAR_7= FUNC_1(VAR_5*VAR_4->bps, VAR_0);
    VAR_8= *VAR_4;

    FUNC_2(VAR_4->bps);
    FUNC_2(VAR_4->ch_count);

    VAR_4->data= FUNC_4(VAR_7, VAR_4->ch_count);
    if(!VAR_4->data)
        return FUNC_0(VAR_2);
    for(VAR_6=0; VAR_6<VAR_4->ch_count; VAR_6++){
        VAR_4->ch[VAR_6]= VAR_4->data + VAR_6*(VAR_4->planar ? VAR_7 : VAR_4->bps);
        if(VAR_4->count && VAR_4->planar) FUNC_5(VAR_4->ch[VAR_6], VAR_8.ch[VAR_6], VAR_4->count*VAR_4->bps);
    }
    if(VAR_4->count && !VAR_4->planar) FUNC_5(VAR_4->ch[0], VAR_8.ch[0], VAR_4->count*VAR_4->ch_count*VAR_4->bps);
    FUNC_3(&VAR_8.data);
    VAR_4->count= VAR_5;

    return 1;
}
