
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t burn_in; float learning_rate; size_t power; int policy; int scale; size_t step; int num_steps; size_t* steps; float* scales; int gamma; float max_batches; } ;
typedef TYPE_1__ network ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 size_t FUNC_2 (TYPE_1__*) ;
 float FUNC_3 (int,size_t) ;
 int FUNC_4 (int ,int) ;
 int VAR_0 ;

float FUNC_5(network *VAR_1)
{
    size_t VAR_2 = FUNC_2(VAR_1);
    int VAR_3;
    float VAR_4;
    if (VAR_2 < VAR_1->burn_in) return VAR_1->learning_rate * FUNC_3((float)VAR_2 / VAR_1->burn_in, VAR_1->power);
    switch (VAR_1->policy) {
        case 134:
            return VAR_1->learning_rate;
        case 129:
            return VAR_1->learning_rate * FUNC_3(VAR_1->scale, VAR_2/VAR_1->step);
        case 128:
            VAR_4 = VAR_1->learning_rate;
            for(VAR_3 = 0; VAR_3 < VAR_1->num_steps; ++VAR_3){
                if(VAR_1->steps[VAR_3] > VAR_2) return VAR_4;
                VAR_4 *= VAR_1->scales[VAR_3];
            }
            return VAR_4;
        case 133:
            return VAR_1->learning_rate * FUNC_3(VAR_1->gamma, VAR_2);
        case 132:
            return VAR_1->learning_rate * FUNC_3(1 - (float)VAR_2 / VAR_1->max_batches, VAR_1->power);
        case 131:
            return VAR_1->learning_rate * FUNC_3(FUNC_4(0,1), VAR_1->power);
        case 130:
            return VAR_1->learning_rate * (1./(1.+FUNC_0(VAR_1->gamma*(VAR_2 - VAR_1->step))));
        default:
            FUNC_1(VAR_0, "Policy is weird!\n");
            return VAR_1->learning_rate;
    }
}
