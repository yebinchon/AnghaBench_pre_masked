
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int mzi_collectable; } ;
typedef TYPE_1__ mach_zone_info_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int *,TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * VAR_2 ;

uint64_t
FUNC_4(void)
{
 unsigned int VAR_3, VAR_4;
 uint64_t VAR_5 = 0;
 mach_zone_info_t VAR_6;

 FUNC_2(&VAR_0);
 VAR_4 = (unsigned int)(VAR_1);
 FUNC_3(&VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  if (FUNC_1(&(VAR_2[VAR_3]), ((void*)0), &VAR_6)) {
   VAR_5 += FUNC_0(VAR_6.mzi_collectable);
  }
 }

 return VAR_5;
}
