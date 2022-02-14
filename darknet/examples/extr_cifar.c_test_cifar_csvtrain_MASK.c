
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int network ;
typedef int matrix ;
typedef int image ;
struct TYPE_6__ {int rows; int * vals; } ;
struct TYPE_7__ {int y; TYPE_1__ X; } ;
typedef TYPE_2__ data ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int,int,int ) ;
 int FUNC_2 (int ,char*,double) ;
 int FUNC_3 (TYPE_2__) ;
 TYPE_2__ FUNC_4 () ;
 int * FUNC_5 (char*,char*,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 double FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int *,TYPE_2__) ;
 int FUNC_10 (int ,double) ;
 int FUNC_11 (int ) ;
 int VAR_0 ;
 int FUNC_12 (int ) ;

void FUNC_13(char *VAR_1, char *VAR_2)
{
    network *VAR_3 = FUNC_5(VAR_1, VAR_2, 0);
    FUNC_11(FUNC_12(0));

    data VAR_4 = FUNC_4();

    matrix VAR_5 = FUNC_9(VAR_3, VAR_4);

    int VAR_6;
    for(VAR_6 = 0; VAR_6 < VAR_4.X.rows; ++VAR_6){
        image VAR_7 = FUNC_1(32, 32, 3, VAR_4.X.vals[VAR_6]);
        FUNC_0(VAR_7);
    }
    matrix VAR_8 = FUNC_9(VAR_3, VAR_4);
    FUNC_10(VAR_5, .5);
    FUNC_10(VAR_8, .5);
    FUNC_6(VAR_8, VAR_5);

    FUNC_7(VAR_5);
    FUNC_2(VAR_0, "Accuracy: %f\n", FUNC_8(VAR_4.y, VAR_5, 1));
    FUNC_3(VAR_4);
}
