
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ss1; int sp0; } ;
struct tss_struct {TYPE_1__ x86_tss; } ;
struct thread_struct {scalar_t__ sysenter_cs; int sp0; } ;
struct TYPE_4__ {int (* set_kernel_stack ) (int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_2__ VAR_2 ;
 int FUNC_2 (int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(struct tss_struct *VAR_3,
       struct thread_struct *VAR_4)
{
 VAR_3->x86_tss.sp0 = VAR_4->sp0;


 if (FUNC_1(VAR_3->x86_tss.ss1 != VAR_4->sysenter_cs)) {
  VAR_3->x86_tss.ss1 = VAR_4->sysenter_cs;
  FUNC_2(VAR_0, VAR_4->sysenter_cs, 0);
 }
 VAR_2.set_kernel_stack(VAR_1, VAR_3->x86_tss.sp0);
}
