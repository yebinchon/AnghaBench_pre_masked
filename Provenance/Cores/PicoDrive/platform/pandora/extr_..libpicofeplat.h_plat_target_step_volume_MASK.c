
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* step_volume ) (int*,int) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int*,int) ;

__attribute__((used)) static __inline int FUNC_1(int *VAR_1, int VAR_2)
{
 if (VAR_0.step_volume)
  return VAR_0.step_volume(VAR_1, VAR_2);
 return -1;
}
