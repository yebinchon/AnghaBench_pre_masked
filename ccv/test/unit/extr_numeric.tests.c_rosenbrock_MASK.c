
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {double* f64; } ;
struct TYPE_7__ {TYPE_1__ data; } ;
typedef TYPE_2__ ccv_dense_matrix_t ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_1(const ccv_dense_matrix_t* VAR_0, double* VAR_1, ccv_dense_matrix_t* VAR_2, void* VAR_3)
{
 int* VAR_4 = (int*)VAR_3;
 (*VAR_4)++;
 int VAR_5;
 double VAR_6 = 0;
 double* VAR_7 = VAR_0->data.f64;
 for (VAR_5 = 0; VAR_5 < 1; VAR_5++)
  VAR_6 += 100 * (VAR_7[VAR_5 + 1] - VAR_7[VAR_5] * VAR_7[VAR_5]) * (VAR_7[VAR_5 + 1] - VAR_7[VAR_5] * VAR_7[VAR_5]) + (1 - VAR_7[VAR_5]) * (1 - VAR_7[VAR_5]);
 *VAR_1 = VAR_6;
 double* VAR_8 = VAR_2->data.f64;
 FUNC_0(VAR_2);
 VAR_8[0] = VAR_8[1] = 0;
 for (VAR_5 = 0; VAR_5 < 1; VAR_5++)
  VAR_8[VAR_5] = -400 * VAR_7[VAR_5] * (VAR_7[VAR_5+1] - VAR_7[VAR_5] * VAR_7[VAR_5]) - 2 * (1 - VAR_7[VAR_5]);
 for (VAR_5 = 1; VAR_5 < 2; VAR_5++)
  VAR_8[VAR_5] += 200 * (VAR_7[VAR_5] - VAR_7[VAR_5 - 1] * VAR_7[VAR_5 - 1]);
 return 0;
}
