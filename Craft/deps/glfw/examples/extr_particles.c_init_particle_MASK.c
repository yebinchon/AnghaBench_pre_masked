
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float x; float y; float z; float vz; float vx; float vy; float r; float g; float b; float life; int active; } ;
typedef TYPE_1__ PARTICLE ;


 float VAR_0 ;
 scalar_t__ VAR_1 ;
 float VAR_2 ;
 scalar_t__ FUNC_0 (float) ;
 float* VAR_3 ;
 float* VAR_4 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (double) ;

__attribute__((used)) static void FUNC_3(PARTICLE *VAR_5, double VAR_6)
{
    float VAR_7, VAR_8;


    VAR_5->x = 0.f;
    VAR_5->y = 0.f;
    VAR_5->z = VAR_0;


    VAR_5->vz = 0.7f + (0.3f / 4096.f) * (float) (FUNC_1() & 4095);


    VAR_7 = (2.f * (float) VAR_1 / 4096.f) * (float) (FUNC_1() & 4095);
    VAR_5->vx = 0.4f * (float) FUNC_0(VAR_7);
    VAR_5->vy = 0.4f * (float) FUNC_2(VAR_7);


    VAR_8 = VAR_2 * (0.8f + 0.1f * (float) (FUNC_2(0.5 * VAR_6) + FUNC_2(1.31 * VAR_6)));
    VAR_5->vx *= VAR_8;
    VAR_5->vy *= VAR_8;
    VAR_5->vz *= VAR_8;


    VAR_5->r = 0.7f + 0.3f * (float) FUNC_2(0.34 * VAR_6 + 0.1);
    VAR_5->g = 0.6f + 0.4f * (float) FUNC_2(0.63 * VAR_6 + 1.1);
    VAR_5->b = 0.6f + 0.4f * (float) FUNC_2(0.91 * VAR_6 + 2.1);


    VAR_4[0] = 0.4f * (float) FUNC_2(1.34 * VAR_6);
    VAR_4[1] = 0.4f * (float) FUNC_2(3.11 * VAR_6);
    VAR_4[2] = VAR_0 + 1.f;
    VAR_4[3] = 1.f;
    VAR_3[0] = VAR_5->r;
    VAR_3[1] = VAR_5->g;
    VAR_3[2] = VAR_5->b;
    VAR_3[3] = 1.f;


    VAR_5->life = 1.f;
    VAR_5->active = 1;
}
