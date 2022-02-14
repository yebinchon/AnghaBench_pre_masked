
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ id; } ;
struct poseidon_control {TYPE_1__ v4l2_ctrl; } ;
typedef scalar_t__ __u32 ;


 int FUNC_0 (struct poseidon_control*) ;
 struct poseidon_control* VAR_0 ;

__attribute__((used)) static struct poseidon_control *FUNC_1(__u32 VAR_1)
{
 struct poseidon_control *VAR_2 = &VAR_0[0];
 int VAR_3 = FUNC_0(VAR_0);

 for (; VAR_2 < &VAR_0[VAR_3]; VAR_2++)
  if (VAR_2->v4l2_ctrl.id == VAR_1)
   return VAR_2;
 return ((void*)0);
}
