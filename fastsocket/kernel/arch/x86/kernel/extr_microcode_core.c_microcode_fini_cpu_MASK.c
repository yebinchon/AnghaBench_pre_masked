
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucode_cpu_info {scalar_t__ valid; } ;
struct TYPE_2__ {int (* microcode_fini_cpu ) (int) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;
 struct ucode_cpu_info* VAR_1 ;

__attribute__((used)) static void FUNC_1(int VAR_2)
{
 struct ucode_cpu_info *VAR_3 = VAR_1 + VAR_2;

 VAR_0->microcode_fini_cpu(VAR_2);
 VAR_3->valid = 0;
}
