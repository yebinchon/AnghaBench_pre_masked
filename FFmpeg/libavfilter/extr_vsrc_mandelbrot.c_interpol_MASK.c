
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int w; int h; } ;
typedef TYPE_1__ MBContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(MBContext *VAR_0, uint32_t *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    uint32_t VAR_5,VAR_6,VAR_7,VAR_8, VAR_9;
    uint32_t VAR_10=0xFF000000;
    int VAR_11;

    if(!VAR_2 || !VAR_3 || VAR_2+1==VAR_0->w || VAR_3+1==VAR_0->h)
        return 0;

    VAR_11= FUNC_1(FUNC_0(VAR_2-(VAR_0->w>>1))*VAR_0->h, FUNC_0(VAR_3-(VAR_0->h>>1))*VAR_0->w);

    if(VAR_11<(VAR_0->w*VAR_0->h>>3))
        return 0;

    VAR_5=VAR_1[(VAR_2+1) + (VAR_3+0)*VAR_4];
    VAR_6=VAR_1[(VAR_2-1) + (VAR_3+1)*VAR_4];
    VAR_7=VAR_1[(VAR_2+0) + (VAR_3+1)*VAR_4];
    VAR_8=VAR_1[(VAR_2+1) + (VAR_3+1)*VAR_4];

    if(VAR_5&&VAR_7){
        VAR_6= VAR_1[(VAR_2-1) + (VAR_3+0)*VAR_4];
        VAR_8= VAR_1[(VAR_2+0) + (VAR_3-1)*VAR_4];
    }else if(VAR_6&&VAR_8){
        VAR_5= VAR_1[(VAR_2+1) + (VAR_3-1)*VAR_4];
        VAR_7= VAR_1[(VAR_2-1) + (VAR_3-1)*VAR_4];
    }else if(VAR_7){
        VAR_8= VAR_1[(VAR_2+0) + (VAR_3-1)*VAR_4];
        VAR_5= VAR_1[(VAR_2-1) + (VAR_3+0)*VAR_4];
        VAR_6= VAR_1[(VAR_2+1) + (VAR_3-1)*VAR_4];
    }else if(VAR_8){
        VAR_7= VAR_1[(VAR_2-1) + (VAR_3-1)*VAR_4];
        VAR_5= VAR_1[(VAR_2-1) + (VAR_3+0)*VAR_4];
        VAR_6= VAR_1[(VAR_2+1) + (VAR_3-1)*VAR_4];
    }else
        return 0;

    for(VAR_9=0; VAR_9<3; VAR_9++){
        int VAR_12= 8*VAR_9;
        uint8_t VAR_13= VAR_5>>VAR_12;
        uint8_t VAR_14= VAR_6>>VAR_12;
        uint8_t VAR_15= VAR_7>>VAR_12;
        uint8_t VAR_16= VAR_8>>VAR_12;
        int VAR_17= (VAR_13 + VAR_14);
        int VAR_18= (VAR_15 + VAR_16);
        if(FUNC_0(VAR_17 - VAR_18) > 5)
            return 0;
        if(FUNC_0(VAR_13-VAR_14)+FUNC_0(VAR_15-VAR_16) > 20)
            return 0;
        VAR_10 |= ((VAR_17 + VAR_18 + 2)/4)<<VAR_12;
    }
    VAR_1[VAR_2 + VAR_3*VAR_4]= VAR_10;
    return 1;
}
