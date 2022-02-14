
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {float x; float y; float z; float u; float v; } ;
typedef TYPE_1__ vita2d_texture_vertex ;
struct TYPE_8__ {int gxm_tex; } ;
typedef TYPE_2__ vita2d_texture ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 float FUNC_0 (float) ;
 int FUNC_1 (int ,int ,int ,int ,int) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 float FUNC_4 (float) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int,int) ;
 float FUNC_7 (TYPE_2__ const*) ;
 float FUNC_8 (TYPE_2__ const*) ;

__attribute__((used)) static inline void FUNC_9(const vita2d_texture *VAR_3, float VAR_4, float VAR_5, float VAR_6, float VAR_7, float VAR_8, float VAR_9, float VAR_10)
{
 vita2d_texture_vertex *VAR_11 = (vita2d_texture_vertex *)FUNC_6(
  4 * sizeof(vita2d_texture_vertex),
  sizeof(vita2d_texture_vertex));

 const float VAR_12 = VAR_6 * FUNC_8(VAR_3);
 const float VAR_13 = VAR_7 * FUNC_7(VAR_3);
 const float VAR_14 = VAR_6 * VAR_9;
 const float VAR_15 = VAR_7 * VAR_10;

 VAR_11[0].x = -VAR_14;
 VAR_11[0].y = -VAR_15;
 VAR_11[0].z = +0.5f;
 VAR_11[0].u = 0.0f;
 VAR_11[0].v = 0.0f;

 VAR_11[1].x = -VAR_14 + VAR_12;
 VAR_11[1].y = -VAR_15;
 VAR_11[1].z = +0.5f;
 VAR_11[1].u = 1.0f;
 VAR_11[1].v = 0.0f;

 VAR_11[2].x = -VAR_14;
 VAR_11[2].y = -VAR_15 + VAR_13;
 VAR_11[2].z = +0.5f;
 VAR_11[2].u = 0.0f;
 VAR_11[2].v = 1.0f;

 VAR_11[3].x = -VAR_14 + VAR_12;
 VAR_11[3].y = -VAR_15 + VAR_13;
 VAR_11[3].z = +0.5f;
 VAR_11[3].u = 1.0f;
 VAR_11[3].v = 1.0f;

 float VAR_16 = FUNC_0(VAR_8);
 float VAR_17 = FUNC_4(VAR_8);
 int VAR_18;
 for (VAR_18 = 0; VAR_18 < 4; ++VAR_18) {
  float VAR_19 = VAR_11[VAR_18].x;
  float VAR_20 = VAR_11[VAR_18].y;
  VAR_11[VAR_18].x = VAR_19*VAR_16 - VAR_20*VAR_17 + VAR_4 + VAR_14;
  VAR_11[VAR_18].y = VAR_19*VAR_17 + VAR_20*VAR_16 + VAR_5 + VAR_15;
 }


 FUNC_2(VAR_2, 0, &VAR_3->gxm_tex);

 FUNC_3(VAR_2, 0, VAR_11);
 FUNC_1(VAR_2, VAR_1, VAR_0, FUNC_5(), 4);
}
