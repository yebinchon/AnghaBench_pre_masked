
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm {int dummy; } ;
struct TYPE_2__ {int (* set_tss_addr ) (struct kvm*,unsigned long) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct kvm*,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct kvm *VAR_2, unsigned long VAR_3)
{
 int VAR_4;

 if (VAR_3 > (unsigned int)(-3 * VAR_0))
  return -1;
 VAR_4 = VAR_1->set_tss_addr(VAR_2, VAR_3);
 return VAR_4;
}
