
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ objectness; int sort_class; scalar_t__* prob; int bbox; } ;
typedef TYPE_1__ detection ;
typedef int box ;


 float FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int,int,int ) ;

void FUNC_2(detection *VAR_1, int VAR_2, int VAR_3, float VAR_4)
{
    int VAR_5, VAR_6, VAR_7;
    VAR_7 = VAR_2-1;
    for(VAR_5 = 0; VAR_5 <= VAR_7; ++VAR_5){
        if(VAR_1[VAR_5].objectness == 0){
            detection VAR_8 = VAR_1[VAR_5];
            VAR_1[VAR_5] = VAR_1[VAR_7];
            VAR_1[VAR_7] = VAR_8;
            --VAR_7;
            --VAR_5;
        }
    }
    VAR_2 = VAR_7+1;

    for(VAR_7 = 0; VAR_7 < VAR_3; ++VAR_7){
        for(VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5){
            VAR_1[VAR_5].sort_class = VAR_7;
        }
        FUNC_1(VAR_1, VAR_2, sizeof(detection), VAR_0);
        for(VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5){
            if(VAR_1[VAR_5].prob[VAR_7] == 0) continue;
            box VAR_9 = VAR_1[VAR_5].bbox;
            for(VAR_6 = VAR_5+1; VAR_6 < VAR_2; ++VAR_6){
                box VAR_10 = VAR_1[VAR_6].bbox;
                if (FUNC_0(VAR_9, VAR_10) > VAR_4){
                    VAR_1[VAR_6].prob[VAR_7] = 0;
                }
            }
        }
    }
}
