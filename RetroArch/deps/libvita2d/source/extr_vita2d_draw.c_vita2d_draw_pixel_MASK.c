
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float x; float y; float z; unsigned int color; } ;
typedef TYPE_1__ vita2d_color_vertex ;
typedef scalar_t__ uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int ,scalar_t__*,int) ;
 int FUNC_1 (int ,void**) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (void*,int ,int ,int,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_7 (int,int) ;

void FUNC_8(float VAR_9, float VAR_10, unsigned int VAR_11)
{
 vita2d_color_vertex *VAR_12 = (vita2d_color_vertex *)FUNC_7(
  1 * sizeof(vita2d_color_vertex),
  sizeof(vita2d_color_vertex));

 uint16_t *VAR_13 = (uint16_t *)FUNC_7(
  1 * sizeof(uint16_t),
  sizeof(uint16_t));

 VAR_12->x = VAR_9;
 VAR_12->y = VAR_10;
 VAR_12->z = +0.5f;
 VAR_12->color = VAR_11;

 *VAR_13 = 0;

 FUNC_5(VAR_7, VAR_5);
 FUNC_2(VAR_7, VAR_4);

 void *VAR_14;
 FUNC_1(VAR_7, &VAR_14);
 FUNC_4(VAR_14, VAR_6, 0, 16, VAR_8);

 FUNC_6(VAR_7, 0, VAR_12);
 FUNC_3(VAR_7, VAR_1);
 FUNC_0(VAR_7, VAR_3, VAR_0, VAR_13, 1);
 FUNC_3(VAR_7, VAR_2);
}
