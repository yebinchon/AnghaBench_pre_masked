
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct six_axis_t {void* mz; void* my; void* mx; void* fz; void* fy; void* fx; } ;
struct TYPE_2__ {int mz; int my; int mx; int fz; int fy; int fx; } ;
struct jr3_channel {TYPE_1__ max_full_scale; } ;


 void* FUNC_0 (int *) ;

__attribute__((used)) static struct six_axis_t FUNC_1(volatile struct jr3_channel
          *VAR_0)
{
 struct six_axis_t VAR_1;
 VAR_1.fx = FUNC_0(&VAR_0->max_full_scale.fx);
 VAR_1.fy = FUNC_0(&VAR_0->max_full_scale.fy);
 VAR_1.fz = FUNC_0(&VAR_0->max_full_scale.fz);
 VAR_1.mx = FUNC_0(&VAR_0->max_full_scale.mx);
 VAR_1.my = FUNC_0(&VAR_0->max_full_scale.my);
 VAR_1.mz = FUNC_0(&VAR_0->max_full_scale.mz);
 return VAR_1;
}
