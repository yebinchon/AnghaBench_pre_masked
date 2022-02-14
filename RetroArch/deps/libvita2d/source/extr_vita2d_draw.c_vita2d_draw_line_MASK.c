
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
 int VAR_8 ;
 int FUNC_0 (int ,int ,int ,int*,int) ;
 int FUNC_1 (int ,void**) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (void*,int ,int ,int,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_7 (int,int) ;

void FUNC_8(float VAR_9, float VAR_10, float VAR_11, float VAR_12, unsigned int VAR_13)
{
 vita2d_color_vertex *VAR_14 = (vita2d_color_vertex *)FUNC_7(
  2 * sizeof(vita2d_color_vertex),
  sizeof(vita2d_color_vertex));

 uint16_t *VAR_15 = (uint16_t *)FUNC_7(
  2 * sizeof(uint16_t),
  sizeof(uint16_t));

 VAR_14[0].x = VAR_9;
 VAR_14[0].y = VAR_10;
 VAR_14[0].z = +0.5f;
 VAR_14[0].color = VAR_13;

 VAR_14[1].x = VAR_11;
 VAR_14[1].y = VAR_12;
 VAR_14[1].z = +0.5f;
 VAR_14[1].color = VAR_13;

 VAR_15[0] = 0;
 VAR_15[1] = 1;

 FUNC_5(VAR_7, VAR_5);
 FUNC_2(VAR_7, VAR_4);

 void *VAR_16;
 FUNC_1(VAR_7, &VAR_16);
 FUNC_4(VAR_16, VAR_6, 0, 16, VAR_8);

 FUNC_6(VAR_7, 0, VAR_14);
 FUNC_3(VAR_7, VAR_1);
 FUNC_0(VAR_7, VAR_3, VAR_0, VAR_15, 2);
 FUNC_3(VAR_7, VAR_2);
}
