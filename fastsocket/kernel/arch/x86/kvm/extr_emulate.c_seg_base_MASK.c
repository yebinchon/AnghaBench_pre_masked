
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x86_emulate_ctxt {scalar_t__ mode; int vcpu; } ;
struct TYPE_2__ {unsigned long (* get_segment_base ) (int ,int) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 unsigned long FUNC_0 (int ,int) ;

__attribute__((used)) static unsigned long FUNC_1(struct x86_emulate_ctxt *VAR_3, int VAR_4)
{
 if (VAR_3->mode == VAR_1 && VAR_4 < VAR_0)
  return 0;

 return VAR_2->get_segment_base(VAR_3->vcpu, VAR_4);
}
