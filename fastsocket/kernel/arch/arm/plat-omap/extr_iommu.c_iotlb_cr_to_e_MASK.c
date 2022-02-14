
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iotlb_entry {int dummy; } ;
struct cr_regs {int dummy; } ;
struct TYPE_2__ {int (* cr_to_e ) (struct cr_regs*,struct iotlb_entry*) ;} ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct cr_regs*,struct iotlb_entry*) ;

void FUNC_2(struct cr_regs *VAR_1, struct iotlb_entry *VAR_2)
{
 FUNC_0(!VAR_1 || !VAR_2);

 VAR_0->cr_to_e(VAR_1, VAR_2);
}
