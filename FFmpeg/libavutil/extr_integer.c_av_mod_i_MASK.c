
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ int16_t ;
struct TYPE_16__ {int* v; } ;
typedef TYPE_1__ AVInteger ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__,TYPE_1__) ;
 scalar_t__ FUNC_2 (TYPE_1__) ;
 TYPE_1__ FUNC_3 (TYPE_1__,int) ;
 TYPE_1__ FUNC_4 (TYPE_1__,TYPE_1__) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 TYPE_1__ VAR_1 ;

AVInteger FUNC_6(AVInteger *VAR_2, AVInteger VAR_3, AVInteger VAR_4){
    int VAR_5= FUNC_2(VAR_3) - FUNC_2(VAR_4);
    AVInteger VAR_6;
    if(!VAR_2) VAR_2 = &VAR_6;

    if ((int16_t)VAR_3.v[VAR_0-1] < 0) {
        VAR_3 = FUNC_6(VAR_2, FUNC_4(VAR_1, VAR_3), VAR_4);
        *VAR_2 = FUNC_4(VAR_1, *VAR_2);
        return FUNC_4(VAR_1, VAR_3);
    }

    FUNC_0((int16_t)VAR_3.v[VAR_0-1] >= 0 && (int16_t)VAR_4.v[VAR_0-1] >= 0);
    FUNC_0(FUNC_2(VAR_4)>=0);

    if(VAR_5 > 0)
        VAR_4= FUNC_3(VAR_4, -VAR_5);

    FUNC_5(VAR_2, 0, sizeof(AVInteger));

    while(VAR_5-- >= 0){
        *VAR_2= FUNC_3(*VAR_2, -1);
        if(FUNC_1(VAR_3, VAR_4) >= 0){
            VAR_3= FUNC_4(VAR_3, VAR_4);
            VAR_2->v[0] += 1;
        }
        VAR_4= FUNC_3(VAR_4, 1);
    }
    return VAR_3;
}
