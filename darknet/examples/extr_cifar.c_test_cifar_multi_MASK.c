
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int network ;
struct TYPE_11__ {int data; } ;
typedef TYPE_3__ image ;
struct TYPE_10__ {float** vals; } ;
struct TYPE_9__ {int rows; int * vals; } ;
struct TYPE_12__ {TYPE_2__ y; TYPE_1__ X; } ;
typedef TYPE_4__ data ;


 int FUNC_0 (int,int,float*,int,float*,int) ;
 int FUNC_1 (TYPE_3__) ;
 TYPE_3__ FUNC_2 (int,int,int,int ) ;
 int FUNC_3 (TYPE_3__) ;
 TYPE_4__ FUNC_4 (char*) ;
 int * FUNC_5 (char*,char*,int ) ;
 int FUNC_6 (float*,int) ;
 float* FUNC_7 (int *,int ) ;
 int FUNC_8 (char*,int,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

void FUNC_12(char *VAR_0, char *VAR_1)
{
    network *VAR_2 = FUNC_5(VAR_0, VAR_1, 0);
    FUNC_9(VAR_2, 1);
    FUNC_10(FUNC_11(0));

    float VAR_3 = 0;
    data VAR_4 = FUNC_4("data/cifar/cifar-10-batches-bin/test_batch.bin");

    int VAR_5;
    for(VAR_5 = 0; VAR_5 < VAR_4.X.rows; ++VAR_5){
        image VAR_6 = FUNC_2(32, 32, 3, VAR_4.X.vals[VAR_5]);

        float VAR_7[10] = {0};

        float *VAR_8 = FUNC_7(VAR_2, VAR_6.data);
        FUNC_0(10, 1, VAR_8, 1, VAR_7, 1);
        FUNC_1(VAR_6);
        VAR_8 = FUNC_7(VAR_2, VAR_6.data);
        FUNC_0(10, 1, VAR_8, 1, VAR_7, 1);

        int VAR_9 = FUNC_6(VAR_7, 10);
        int VAR_10 = FUNC_6(VAR_4.y.vals[VAR_5], 10);
        if(VAR_9 == VAR_10) VAR_3 += 1;
        FUNC_3(VAR_6);
        FUNC_8("%4d: %.2f%%\n", VAR_5, 100.*VAR_3/(VAR_5+1));
    }
}
