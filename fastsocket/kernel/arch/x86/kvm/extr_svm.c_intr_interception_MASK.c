
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int irq_exits; } ;
struct TYPE_4__ {TYPE_1__ stat; } ;
struct vcpu_svm {TYPE_2__ vcpu; } ;



__attribute__((used)) static int FUNC_0(struct vcpu_svm *VAR_0)
{
 ++VAR_0->vcpu.stat.irq_exits;
 return 1;
}
