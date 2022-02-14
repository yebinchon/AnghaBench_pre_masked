
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int image ;
struct TYPE_7__ {int * vals; } ;
struct TYPE_6__ {int rows; int * vals; } ;
struct TYPE_8__ {TYPE_2__ y; TYPE_1__ X; } ;
typedef TYPE_3__ data ;


 int VAR_0 ;
 int FUNC_0 (int,int,int,int ) ;
 TYPE_3__ FUNC_1 () ;
 TYPE_3__ FUNC_2 (char*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,char*,int ,int ) ;
 int FUNC_5 (char*,char*,int,char*) ;

void FUNC_6()
{
char *VAR_1[] = {"airplane","automobile","bird","cat","deer","dog","frog","horse","ship","truck"};
    int VAR_2;
    data VAR_3 = FUNC_1();
    data VAR_4 = FUNC_2("data/cifar/cifar-10-batches-bin/test_batch.bin");
    for(VAR_2 = 0; VAR_2 < VAR_3.X.rows; ++VAR_2){
        image VAR_5 = FUNC_0(32, 32, 3, VAR_3.X.vals[VAR_2]);
        int VAR_6 = FUNC_3(VAR_3.y.vals[VAR_2], 10);
        char VAR_7[256];
        FUNC_5(VAR_7, "data/cifar/train/%d_%s",VAR_2,VAR_1[VAR_6]);
        FUNC_4(VAR_5, VAR_7, VAR_0, 0);
    }
    for(VAR_2 = 0; VAR_2 < VAR_4.X.rows; ++VAR_2){
        image VAR_8 = FUNC_0(32, 32, 3, VAR_4.X.vals[VAR_2]);
        int VAR_9 = FUNC_3(VAR_4.y.vals[VAR_2], 10);
        char VAR_10[256];
        FUNC_5(VAR_10, "data/cifar/test/%d_%s",VAR_2,VAR_1[VAR_9]);
        FUNC_4(VAR_8, VAR_10, VAR_0, 0);
    }
}
