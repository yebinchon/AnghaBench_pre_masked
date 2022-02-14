
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float x; float y; float z; unsigned int color; } ;
typedef TYPE_1__ vita2d_color_vertex ;
typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 float FUNC_0 (float) ;
 int FUNC_1 (int ,int ,int ,int*,int const) ;
 int FUNC_2 (int ,void**) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (void*,int ,int ,int,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,TYPE_1__*) ;
 float FUNC_7 (float) ;
 scalar_t__ FUNC_8 (int const,int) ;

void FUNC_9(float VAR_8, float VAR_9, float VAR_10, unsigned int VAR_11)
{
 static const int VAR_12 = 100;

 vita2d_color_vertex *VAR_13 = (vita2d_color_vertex *)FUNC_8(
  (VAR_12 + 1) * sizeof(vita2d_color_vertex),
  sizeof(vita2d_color_vertex));

 uint16_t *VAR_14 = (uint16_t *)FUNC_8(
  (VAR_12 + 2) * sizeof(uint16_t),
  sizeof(uint16_t));


 VAR_13[0].x = VAR_8;
 VAR_13[0].y = VAR_9;
 VAR_13[0].z = +0.5f;
 VAR_13[0].color = VAR_11;
 VAR_14[0] = 0;

 float VAR_15 = 2 * VAR_0 / (float)VAR_12;
 float VAR_16 = FUNC_0(VAR_15);
 float VAR_17 = FUNC_7(VAR_15);
 float VAR_18;

 float VAR_19 = VAR_10;
 float VAR_20 = 0;
 int VAR_21;

 for (VAR_21 = 1; VAR_21 <= VAR_12; VAR_21++) {
  VAR_13[VAR_21].x = VAR_8 + VAR_19;
  VAR_13[VAR_21].y = VAR_9 + VAR_20;
  VAR_13[VAR_21].z = +0.5f;
  VAR_13[VAR_21].color = VAR_11;
  VAR_14[VAR_21] = VAR_21;

  VAR_18 = VAR_19;
  VAR_19 = VAR_16 * VAR_19 - VAR_17 * VAR_20;
  VAR_20 = VAR_17 * VAR_18 + VAR_16 * VAR_20;
 }

 VAR_14[VAR_12 + 1] = 1;

 FUNC_5(VAR_6, VAR_4);
 FUNC_3(VAR_6, VAR_3);

 void *VAR_22;
 FUNC_2(VAR_6, &VAR_22);
 FUNC_4(VAR_22, VAR_5, 0, 16, VAR_7);

 FUNC_6(VAR_6, 0, VAR_13);
 FUNC_1(VAR_6, VAR_2, VAR_1, VAR_14, VAR_12 + 2);
}
