
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int scale; } ;
struct TYPE_5__ {TYPE_1__ regular; void* y; void* x; } ;
typedef TYPE_2__ ccv_keypoint_t ;


 int FUNC_0 (double,int) ;
 void* FUNC_1 (int ,int) ;
 double FUNC_2 (double) ;

__attribute__((used)) inline static double FUNC_3(float VAR_0[3][9], int VAR_1, int VAR_2, int VAR_3, ccv_keypoint_t* VAR_4)
{
 double VAR_5 = VAR_0[1][3] - 2 * VAR_0[1][4] + VAR_0[1][5];
 double VAR_6 = VAR_0[1][1] - 2 * VAR_0[1][4] + VAR_0[1][7];
 double VAR_7 = (VAR_0[1][8] - VAR_0[1][6] - VAR_0[1][2] + VAR_0[1][0]) * 0.25;
 double VAR_8 = (VAR_5 + VAR_6) * (VAR_5 + VAR_6) / (VAR_5 * VAR_6 - VAR_7 * VAR_7);
 double VAR_9 = (VAR_0[1][5] - VAR_0[1][3]) * 0.5;
 double VAR_10 = (VAR_0[1][7] - VAR_0[1][1]) * 0.5;
 double VAR_11 = (VAR_0[2][4] - VAR_0[0][4]) * 0.5;
 double VAR_12 = (VAR_0[2][5] + VAR_0[0][3] - VAR_0[2][3] - VAR_0[0][5]) * 0.25;
 double VAR_13 = (VAR_0[2][7] + VAR_0[0][1] - VAR_0[2][1] - VAR_0[0][7]) * 0.25;
 double VAR_14 = VAR_0[0][4] - 2 * VAR_0[1][4] + VAR_0[2][4];
 double VAR_15[3][3] = { { VAR_5, VAR_7, VAR_12 },
        { VAR_7, VAR_6, VAR_13 },
        { VAR_12, VAR_13, VAR_14 } };
 double VAR_16[3] = { -VAR_9, -VAR_10, -VAR_11 };

 int VAR_17, VAR_18, VAR_19, VAR_20;
 for(VAR_18 = 0; VAR_18 < 3; VAR_18++)
 {
  double VAR_21 = 0;
  double VAR_22 = 0;
  int VAR_23 = VAR_18;
  double VAR_24;


  for (VAR_17 = VAR_18; VAR_17 < 3; VAR_17++)
  {
   double VAR_25 = VAR_15[VAR_17][VAR_18];
   double VAR_26 = FUNC_2(VAR_25);
   if (VAR_26 > VAR_22)
   {
    VAR_21 = VAR_25;
    VAR_22 = VAR_26;
    VAR_23 = VAR_17;
   }
  }


  if (VAR_22 < 1e-10f)
  {
   VAR_16[0] = VAR_16[1] = VAR_16[2] = 0;
   break;
  }

  VAR_17 = VAR_23;


  for(VAR_20 = VAR_18; VAR_20 < 3; VAR_20++)
  {
   VAR_24 = VAR_15[VAR_17][VAR_20];
   VAR_15[VAR_17][VAR_20] = VAR_15[VAR_18][VAR_20];
   VAR_15[VAR_18][VAR_20] = VAR_24;
   VAR_15[VAR_18][VAR_20] /= VAR_21;
  }
  VAR_24 = VAR_16[VAR_18];
  VAR_16[VAR_18] = VAR_16[VAR_17];
  VAR_16[VAR_17] = VAR_24;
  VAR_16[VAR_18] /= VAR_21;


  for (VAR_19 = VAR_18 + 1; VAR_19 < 3; VAR_19++)
  {
   double VAR_27 = VAR_15[VAR_19][VAR_18];
   for (VAR_20 = VAR_18; VAR_20 < 3; VAR_20++)
    VAR_15[VAR_19][VAR_20] -= VAR_27 * VAR_15[VAR_18][VAR_20];
   VAR_16[VAR_19] -= VAR_27 * VAR_16[VAR_18];
  }
 }


 for (VAR_17 = 2; VAR_17 > 0; VAR_17--)
 {
  double VAR_28 = VAR_16[VAR_17];
  for (VAR_19 = VAR_17 - 1; VAR_19 >= 0; VAR_19--)
    VAR_16[VAR_19] -= VAR_28 * VAR_15[VAR_19][VAR_17];
 }
 VAR_4->x = VAR_1 + FUNC_1(FUNC_0(VAR_16[0], -1), 1);
 VAR_4->y = VAR_2 + FUNC_1(FUNC_0(VAR_16[1], -1), 1);
 VAR_4->regular.scale = VAR_3 + VAR_16[2];
 return VAR_8;
}
