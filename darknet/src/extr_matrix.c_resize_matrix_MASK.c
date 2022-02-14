
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rows; int * vals; int cols; } ;
typedef TYPE_1__ matrix ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int *,int) ;

matrix FUNC_3(matrix VAR_0, int VAR_1)
{
    int VAR_2;
    if (VAR_0.rows == VAR_1) return VAR_0;
    if (VAR_0.rows < VAR_1) {
        VAR_0.vals = FUNC_2(VAR_0.vals, VAR_1*sizeof(float*));
        for (VAR_2 = VAR_0.rows; VAR_2 < VAR_1; ++VAR_2) {
            VAR_0.vals[VAR_2] = FUNC_0(VAR_0.cols, sizeof(float));
        }
    } else if (VAR_0.rows > VAR_1) {
        for (VAR_2 = VAR_1; VAR_2 < VAR_0.rows; ++VAR_2) {
            FUNC_1(VAR_0.vals[VAR_2]);
        }
        VAR_0.vals = FUNC_2(VAR_0.vals, VAR_1*sizeof(float*));
    }
    VAR_0.rows = VAR_1;
    return VAR_0;
}
