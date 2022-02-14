
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
 int FUNC_0 (int ,int ,int ,int ,int) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int,int) ;
 float FUNC_5 (TYPE_2__ const*) ;
 float FUNC_6 (TYPE_2__ const*) ;

__attribute__((used)) static inline void FUNC_7(const vita2d_texture *VAR_3, float VAR_4, float VAR_5, float VAR_6, float VAR_7, float VAR_8, float VAR_9)
{
 vita2d_texture_vertex *VAR_10 = (vita2d_texture_vertex *)FUNC_4(
  4 * sizeof(vita2d_texture_vertex),
  sizeof(vita2d_texture_vertex));

 const float VAR_11 = FUNC_6(VAR_3);
 const float VAR_12 = FUNC_5(VAR_3);

 const float VAR_13 = VAR_6/VAR_11;
 const float VAR_14 = VAR_7/VAR_12;
 const float VAR_15 = (VAR_6+VAR_8)/VAR_11;
 const float VAR_16 = (VAR_7+VAR_9)/VAR_12;

 VAR_10[0].x = VAR_4;
 VAR_10[0].y = VAR_5;
 VAR_10[0].z = +0.5f;
 VAR_10[0].u = VAR_13;
 VAR_10[0].v = VAR_14;

 VAR_10[1].x = VAR_4 + VAR_8;
 VAR_10[1].y = VAR_5;
 VAR_10[1].z = +0.5f;
 VAR_10[1].u = VAR_15;
 VAR_10[1].v = VAR_14;

 VAR_10[2].x = VAR_4;
 VAR_10[2].y = VAR_5 + VAR_9;
 VAR_10[2].z = +0.5f;
 VAR_10[2].u = VAR_13;
 VAR_10[2].v = VAR_16;

 VAR_10[3].x = VAR_4 + VAR_8;
 VAR_10[3].y = VAR_5 + VAR_9;
 VAR_10[3].z = +0.5f;
 VAR_10[3].u = VAR_15;
 VAR_10[3].v = VAR_16;


 FUNC_1(VAR_2, 0, &VAR_3->gxm_tex);

 FUNC_2(VAR_2, 0, VAR_10);
 FUNC_0(VAR_2, VAR_1, VAR_0, FUNC_3(), 4);
}
