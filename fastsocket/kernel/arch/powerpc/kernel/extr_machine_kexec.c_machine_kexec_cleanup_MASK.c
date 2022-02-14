
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kimage {int dummy; } ;
struct TYPE_2__ {int (* machine_kexec_cleanup ) (struct kimage*) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (struct kimage*) ;

void FUNC_1(struct kimage *VAR_1)
{
 if (VAR_0.machine_kexec_cleanup)
  VAR_0.machine_kexec_cleanup(VAR_1);
}
