
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kimage {int dummy; } ;
struct TYPE_2__ {int (* machine_kexec ) (struct kimage*) ;} ;


 int FUNC_0 (struct kimage*) ;
 int FUNC_1 (int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (struct kimage*) ;

void FUNC_3(struct kimage *VAR_1)
{
 if (VAR_0.machine_kexec)
  VAR_0.machine_kexec(VAR_1);
 else
  FUNC_0(VAR_1);


 FUNC_1(((void*)0));
 for(;;);
}
