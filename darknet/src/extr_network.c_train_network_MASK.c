
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int batch; int truth; int input; } ;
typedef TYPE_2__ network ;
struct TYPE_8__ {int rows; } ;
struct TYPE_10__ {TYPE_1__ X; } ;
typedef TYPE_3__ data ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__,int,int,int ,int ) ;
 float FUNC_2 (TYPE_2__*) ;

float FUNC_3(network *VAR_0, data VAR_1)
{
    FUNC_0(VAR_1.X.rows % VAR_0->batch == 0);
    int VAR_2 = VAR_0->batch;
    int VAR_3 = VAR_1.X.rows / VAR_2;

    int VAR_4;
    float VAR_5 = 0;
    for(VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4){
        FUNC_1(VAR_1, VAR_2, VAR_4*VAR_2, VAR_0->input, VAR_0->truth);
        float VAR_6 = FUNC_2(VAR_0);
        VAR_5 += VAR_6;
    }
    return (float)VAR_5/(VAR_3*VAR_2);
}
