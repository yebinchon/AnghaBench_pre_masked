
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int* cnum; int* rnum; float* posterior; int structs; int posteriors; } ;
typedef TYPE_1__ ccv_ferns_t ;


 int FUNC_0 (int) ;
 float FUNC_1 (float) ;

void FUNC_2(ccv_ferns_t* VAR_0, uint32_t* VAR_1, int VAR_2, int VAR_3)
{
 FUNC_0(VAR_2 == 0 || VAR_2 == 1);
 FUNC_0(VAR_3 >= 0);
 VAR_3 += 1;
 int VAR_4;
 int* VAR_5 = VAR_0->cnum;
 int* VAR_6 = VAR_0->rnum;
 float* VAR_7 = VAR_0->posterior;
 VAR_5[VAR_2] += VAR_3;
 float VAR_8[] = {
  1.0 / (VAR_5[0] + 1),
  1.0 / (VAR_5[1] + 1),
 };
 for (VAR_4 = 0; VAR_4 < VAR_0->structs; VAR_4++)
 {
  uint32_t VAR_9 = VAR_1[VAR_4];
  VAR_6[VAR_9 * 2 + VAR_2] += VAR_3;

  float VAR_10[] = {
   VAR_6[VAR_9 * 2] * VAR_8[0] + 1e-5,
   VAR_6[VAR_9 * 2 + 1] * VAR_8[1] + 1e-5,
  };
  VAR_7[VAR_9 * 2] = FUNC_1(VAR_10[0] / (VAR_10[0] + VAR_10[1]));
  VAR_7[VAR_9 * 2 + 1] = FUNC_1(VAR_10[1] / (VAR_10[0] + VAR_10[1]));
  VAR_6 += VAR_0->posteriors * 2;
  VAR_7 += VAR_0->posteriors * 2;
 }
}
