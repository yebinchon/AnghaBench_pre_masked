
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int batch; int truth; int input; } ;
typedef TYPE_1__ network ;
typedef int data ;


 int FUNC_0 (int ,int,int ,int ) ;
 float FUNC_1 (TYPE_1__*) ;

float FUNC_2(network *VAR_0, data VAR_1, int VAR_2)
{
    int VAR_3 = VAR_0->batch;

    int VAR_4;
    float VAR_5 = 0;
    for(VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4){
        FUNC_0(VAR_1, VAR_3, VAR_0->input, VAR_0->truth);
        float VAR_6 = FUNC_1(VAR_0);
        VAR_5 += VAR_6;
    }
    return (float)VAR_5/(VAR_2*VAR_3);
}
