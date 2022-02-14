
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mem_ctl_info {int * mc_driver_sysfs_attributes; } ;
struct TYPE_2__ {int x86; } ;


 unsigned int FUNC_0 (int *) ;
 int * VAR_0 ;
 int * VAR_1 ;
 TYPE_1__ VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_1(struct mem_ctl_info *VAR_5)
{
 unsigned int VAR_6 = 0, VAR_7 = 0;

 for (; VAR_6 < FUNC_0(VAR_0); VAR_6++)
  VAR_3[VAR_6] = VAR_0[VAR_6];

 if (VAR_2.x86 >= 0x10)
  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_1); VAR_7++, VAR_6++)
   VAR_3[VAR_6] = VAR_1[VAR_7];

 VAR_3[VAR_6] = VAR_4;

 VAR_5->mc_driver_sysfs_attributes = VAR_3;
}
