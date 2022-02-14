
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ubo_l; int ubo_h; int vbo_l; int vbo_h; } ;
union chan_param_mem {TYPE_1__ pp; } ;
typedef int u32 ;



__attribute__((used)) static void FUNC_0(union chan_param_mem *VAR_0,
       u32 VAR_1, u32 VAR_2)
{
 VAR_0->pp.ubo_l = VAR_1 & 0x7ff;
 VAR_0->pp.ubo_h = VAR_1 >> 11;
 VAR_0->pp.vbo_l = VAR_2 & 0x1ffff;
 VAR_0->pp.vbo_h = VAR_2 >> 17;
}
