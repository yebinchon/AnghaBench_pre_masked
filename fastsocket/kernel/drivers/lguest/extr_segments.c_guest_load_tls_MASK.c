
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct desc_struct* gdt; } ;
struct lg_cpu {int changed; TYPE_1__ arch; } ;
struct desc_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct lg_cpu*,struct desc_struct*,unsigned long,int) ;
 int FUNC_1 (struct lg_cpu*,size_t,scalar_t__) ;

void FUNC_2(struct lg_cpu *VAR_4, unsigned long VAR_5)
{
 struct desc_struct *VAR_6 = &VAR_4->arch.gdt[VAR_3];

 FUNC_0(VAR_4, VAR_6, VAR_5, sizeof(*VAR_6)*VAR_1);
 FUNC_1(VAR_4, VAR_3, VAR_2+1);

 VAR_4->changed |= VAR_0;
}
