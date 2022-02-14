
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct six_axis_t {int fx; int fy; int fz; int mx; int my; int mz; } ;
struct TYPE_2__ {int mz; int my; int mx; int fz; int fy; int fx; } ;
struct jr3_channel {int command_word0; TYPE_1__ full_scale; } ;


 int FUNC_0 (char*,int,int,int,int,int,int) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(volatile struct jr3_channel *VAR_0,
       struct six_axis_t VAR_1)
{
 FUNC_0("%d %d %d %d %d %d\n",
        VAR_1.fx,
        VAR_1.fy,
        VAR_1.fz, VAR_1.mx, VAR_1.my, VAR_1.mz);
 FUNC_1(&VAR_0->full_scale.fx, VAR_1.fx);
 FUNC_1(&VAR_0->full_scale.fy, VAR_1.fy);
 FUNC_1(&VAR_0->full_scale.fz, VAR_1.fz);
 FUNC_1(&VAR_0->full_scale.mx, VAR_1.mx);
 FUNC_1(&VAR_0->full_scale.my, VAR_1.my);
 FUNC_1(&VAR_0->full_scale.mz, VAR_1.mz);
 FUNC_1(&VAR_0->command_word0, 0x0a00);
}
