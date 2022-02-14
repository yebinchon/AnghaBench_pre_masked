
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int image ;
struct TYPE_6__ {int rows; int cols; int * vals; } ;
struct TYPE_7__ {int w; int h; TYPE_1__ X; int y; scalar_t__ shallow; } ;
typedef TYPE_2__ data ;
struct TYPE_8__ {int data; } ;


 void* FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 TYPE_5__ FUNC_2 (int ,int,int,int,int) ;
 int FUNC_3 (int,int,int,int ) ;

data *FUNC_4(data VAR_0, int VAR_1, int VAR_2)
{
    data *VAR_3 = FUNC_0(VAR_1*VAR_1, sizeof(data));
    int VAR_4, VAR_5;
#pragma omp parallel for
 for(VAR_4 = 0; VAR_4 < VAR_1*VAR_1; ++VAR_4){
        data VAR_6;
        VAR_6.shallow = 0;
        VAR_6.w = VAR_0.w/VAR_1 * VAR_2;
        VAR_6.h = VAR_0.h/VAR_1 * VAR_2;
        VAR_6.X.rows = VAR_0.X.rows;
        VAR_6.X.cols = VAR_6.w*VAR_6.h*3;
        VAR_6.X.vals = FUNC_0(VAR_6.X.rows, sizeof(float*));

        VAR_6.y = FUNC_1(VAR_0.y);
#pragma omp parallel for
 for(VAR_5 = 0; VAR_5 < VAR_0.X.rows; ++VAR_5){
            int VAR_7 = (VAR_4%VAR_1) * VAR_0.w / VAR_1 - (VAR_6.w - VAR_0.w/VAR_1)/2;
            int VAR_8 = (VAR_4/VAR_1) * VAR_0.h / VAR_1 - (VAR_6.h - VAR_0.h/VAR_1)/2;
            image VAR_9 = FUNC_3(VAR_0.w, VAR_0.h, 3, VAR_0.X.vals[VAR_5]);
            VAR_6.X.vals[VAR_5] = FUNC_2(VAR_9, VAR_7, VAR_8, VAR_6.w, VAR_6.h).data;
        }
        VAR_3[VAR_4] = VAR_6;
    }
    return VAR_3;
}
