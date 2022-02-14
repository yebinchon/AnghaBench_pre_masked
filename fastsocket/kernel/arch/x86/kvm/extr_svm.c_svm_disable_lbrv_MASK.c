
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct vcpu_svm {TYPE_2__* vmcb; int * msrpm; } ;
struct TYPE_3__ {scalar_t__ lbr_ctl; } ;
struct TYPE_4__ {TYPE_1__ control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct vcpu_svm *VAR_4)
{
 u32 *VAR_5 = VAR_4->msrpm;

 VAR_4->vmcb->control.lbr_ctl = 0;
 FUNC_0(VAR_5, VAR_0, 0, 0);
 FUNC_0(VAR_5, VAR_1, 0, 0);
 FUNC_0(VAR_5, VAR_2, 0, 0);
 FUNC_0(VAR_5, VAR_3, 0, 0);
}
