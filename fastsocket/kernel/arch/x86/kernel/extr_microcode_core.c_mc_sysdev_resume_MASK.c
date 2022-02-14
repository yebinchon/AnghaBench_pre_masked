
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucode_cpu_info {scalar_t__ mc; scalar_t__ valid; } ;
struct sys_device {int id; } ;
struct TYPE_2__ {int (* apply_microcode ) (int) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 struct ucode_cpu_info* VAR_1 ;

__attribute__((used)) static int FUNC_2(struct sys_device *VAR_2)
{
 int VAR_3 = VAR_2->id;
 struct ucode_cpu_info *VAR_4 = VAR_1 + VAR_3;

 if (VAR_3 != FUNC_0())
  return 0;

 if (VAR_4->valid && VAR_4->mc)
  VAR_0->apply_microcode(VAR_3);

 return 0;
}
