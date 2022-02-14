
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ov7670_info {int sat; scalar_t__ hue; TYPE_1__* fmt; } ;
struct TYPE_2__ {int* cmatrix; } ;


 int VAR_0 ;
 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct ov7670_info *VAR_1,
  int VAR_2[VAR_0])
{
 int VAR_3;



 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  VAR_2[VAR_3] = (VAR_1->fmt->cmatrix[VAR_3]*VAR_1->sat) >> 7;



 if (VAR_1->hue != 0) {
  int VAR_4, VAR_5, VAR_6[VAR_0];

  FUNC_0(VAR_6, VAR_2, VAR_0*sizeof(int));
  VAR_4 = FUNC_2(VAR_1->hue);
  VAR_5 = FUNC_1(VAR_1->hue);

  VAR_2[0] = (VAR_2[3]*VAR_4 + VAR_2[0]*VAR_5)/1000;
  VAR_2[1] = (VAR_2[4]*VAR_4 + VAR_2[1]*VAR_5)/1000;
  VAR_2[2] = (VAR_2[5]*VAR_4 + VAR_2[2]*VAR_5)/1000;
  VAR_2[3] = (VAR_2[3]*VAR_5 - VAR_2[0]*VAR_4)/1000;
  VAR_2[4] = (VAR_2[4]*VAR_5 - VAR_2[1]*VAR_4)/1000;
  VAR_2[5] = (VAR_2[5]*VAR_5 - VAR_2[2]*VAR_4)/1000;
 }
}
