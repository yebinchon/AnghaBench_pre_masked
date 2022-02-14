
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float h_fov; float v_fov; int d_fov; } ;
typedef TYPE_1__ V360Context ;


 double FUNC_0 (int ,float) ;
 double VAR_0 ;
 float FUNC_1 (float const,float const) ;
 float FUNC_2 (float,float) ;
 float FUNC_3 (double) ;

__attribute__((used)) static void FUNC_4(V360Context *VAR_1, float VAR_2, float VAR_3)
{
    const float VAR_4 = FUNC_3(0.5 * FUNC_0(VAR_1->d_fov, 359.f) * VAR_0 / 180.f);
    const float VAR_5 = FUNC_2(VAR_2, VAR_3);

    VAR_1->h_fov = FUNC_1(VAR_4 * VAR_2, VAR_5) * 360.f / VAR_0;
    VAR_1->v_fov = FUNC_1(VAR_4 * VAR_3, VAR_5) * 360.f / VAR_0;

    if (VAR_1->h_fov < 0.f)
        VAR_1->h_fov += 360.f;
    if (VAR_1->v_fov < 0.f)
        VAR_1->v_fov += 360.f;
}
