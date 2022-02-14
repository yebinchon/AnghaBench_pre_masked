
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x86_emulate_ctxt {scalar_t__ mode; int vcpu; } ;
struct TYPE_2__ {int (* set_dr ) (int ,int,unsigned long,int*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int ,int,unsigned long,int*) ;

int FUNC_1(struct x86_emulate_ctxt *VAR_4, int VAR_5, unsigned long VAR_6)
{
 unsigned long VAR_7 = (VAR_4->mode == VAR_1) ? ~0ULL : ~0U;
 int VAR_8;

 if (!VAR_3->set_dr)
  return VAR_2;

 VAR_3->set_dr(VAR_4->vcpu, VAR_5, VAR_6 & VAR_7, &VAR_8);
 if (VAR_8) {

  return VAR_2;
 }
 return VAR_0;
}
