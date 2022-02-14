
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* cpu_clock_set ) (int) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static __inline int FUNC_1(int VAR_1)
{
 if (VAR_0.cpu_clock_set)
  return VAR_0.cpu_clock_set(VAR_1);
 return -1;
}
