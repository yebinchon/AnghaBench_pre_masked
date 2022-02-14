
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {float* posterior; int structs; int posteriors; } ;
typedef TYPE_1__ ccv_ferns_t ;



float FUNC_0(ccv_ferns_t* VAR_0, uint32_t* VAR_1)
{
 float VAR_2[] = {0, 0};
 int VAR_3;
 float* VAR_4 = VAR_0->posterior;
 for (VAR_3 = 0; VAR_3 < VAR_0->structs; VAR_3++)
 {
  VAR_2[0] += VAR_4[VAR_1[VAR_3] * 2];
  VAR_2[1] += VAR_4[VAR_1[VAR_3] * 2 + 1];
  VAR_4 += VAR_0->posteriors * 2;
 }
 return VAR_2[1] - VAR_2[0];
}
