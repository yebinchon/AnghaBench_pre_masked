
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
 int FUNC_0 (int ,int ,int ,int*,int) ;
 int FUNC_1 (int ,void**) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (void*,int ,int ,int,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_6 (int,int) ;

void FUNC_7(float VAR_7, float VAR_8, float VAR_9, float VAR_10, unsigned int VAR_11)
{
 vita2d_color_vertex *VAR_12 = (vita2d_color_vertex *)FUNC_6(
  4 * sizeof(vita2d_color_vertex),
  sizeof(vita2d_color_vertex));

 uint16_t *VAR_13 = (uint16_t *)FUNC_6(
  4 * sizeof(uint16_t),
  sizeof(uint16_t));

 VAR_12[0].x = VAR_7;
 VAR_12[0].y = VAR_8;
 VAR_12[0].z = +0.5f;
 VAR_12[0].color = VAR_11;

 VAR_12[1].x = VAR_7 + VAR_9;
 VAR_12[1].y = VAR_8;
 VAR_12[1].z = +0.5f;
 VAR_12[1].color = VAR_11;

 VAR_12[2].x = VAR_7;
 VAR_12[2].y = VAR_8 + VAR_10;
 VAR_12[2].z = +0.5f;
 VAR_12[2].color = VAR_11;

 VAR_12[3].x = VAR_7 + VAR_9;
 VAR_12[3].y = VAR_8 + VAR_10;
 VAR_12[3].z = +0.5f;
 VAR_12[3].color = VAR_11;

 VAR_13[0] = 0;
 VAR_13[1] = 1;
 VAR_13[2] = 2;
 VAR_13[3] = 3;

 FUNC_4(VAR_5, VAR_3);
 FUNC_2(VAR_5, VAR_2);

 void *VAR_14;
 FUNC_1(VAR_5, &VAR_14);
 FUNC_3(VAR_14, VAR_4, 0, 16, VAR_6);

 FUNC_5(VAR_5, 0, VAR_12);
 FUNC_0(VAR_5, VAR_1, VAR_0, VAR_13, 4);
}
