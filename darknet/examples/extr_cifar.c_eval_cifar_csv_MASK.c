
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int rows; int cols; } ;
typedef TYPE_1__ matrix ;
struct TYPE_9__ {int y; } ;
typedef TYPE_2__ data ;


 TYPE_1__ FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,double,...) ;
 int FUNC_2 (TYPE_2__) ;
 int FUNC_3 (TYPE_1__) ;
 TYPE_2__ FUNC_4 (char*) ;
 double FUNC_5 (int ,TYPE_1__,int) ;
 int VAR_0 ;

void FUNC_6()
{
    data VAR_1 = FUNC_4("data/cifar/cifar-10-batches-bin/test_batch.bin");

    matrix VAR_2 = FUNC_0("results/combined.csv");
    FUNC_1(VAR_0, "%f %d\n", VAR_2.rows, VAR_2.cols);

    FUNC_1(VAR_0, "Accuracy: %f\n", FUNC_5(VAR_1.y, VAR_2, 1));
    FUNC_2(VAR_1);
    FUNC_3(VAR_2);
}
