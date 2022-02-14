
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zone_t ;
typedef scalar_t__ vm_size_t ;
struct TYPE_2__ {scalar_t__ kzc_size; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int * VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static __inline zone_t
FUNC_1(vm_size_t VAR_5, int VAR_6)
{
 FUNC_0(VAR_5 < VAR_4);

 while ((vm_size_t)VAR_2[VAR_6].kzc_size < VAR_5)
  VAR_6++;

 FUNC_0(VAR_6 < VAR_0 &&
     (vm_size_t)VAR_2[VAR_6].kzc_size < VAR_3);

 return (VAR_1[VAR_6]);
}
