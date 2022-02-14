
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int c; int batch; int h; int w; } ;
typedef TYPE_1__ network ;
struct TYPE_9__ {int data; } ;
typedef TYPE_2__ image ;


 TYPE_2__ FUNC_0 (int ,int ,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 long FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (char*) ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 (TYPE_1__*,int) ;
 double FUNC_6 () ;

void FUNC_7(char *VAR_0, int VAR_1)
{
    if (VAR_1 == 0) VAR_1 = 1000;
    network *VAR_2 = FUNC_3(VAR_0);
    FUNC_5(VAR_2, 1);
    int VAR_3;
    double VAR_4=FUNC_6();
    image VAR_5 = FUNC_0(VAR_2->w, VAR_2->h, VAR_2->c*VAR_2->batch);
    for(VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3){
        FUNC_1(VAR_2, VAR_5.data);
    }
    double VAR_6 = FUNC_6() - VAR_4;
    long VAR_7 = FUNC_2(VAR_2);
    FUNC_4("\n%d evals, %f Seconds\n", VAR_1, VAR_6);
    FUNC_4("Floating Point Operations: %.2f Bn\n", (float)VAR_7/1000000000.);
    FUNC_4("FLOPS: %.2f Bn\n", (float)VAR_7/1000000000.*VAR_1/VAR_6);
    FUNC_4("Speed: %f sec/eval\n", VAR_6/VAR_1);
    FUNC_4("Speed: %f Hz\n", VAR_1/VAR_6);
}
