
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct lg_cpu {int ss1; int esp1; TYPE_1__* lg; } ;
struct TYPE_2__ {unsigned int stack_pages; } ;


 int VAR_0 ;
 int FUNC_0 (struct lg_cpu*,char*,unsigned int) ;
 int FUNC_1 (struct lg_cpu*) ;

void FUNC_2(struct lg_cpu *VAR_1, u32 VAR_2, u32 VAR_3, unsigned int VAR_4)
{



 if ((VAR_2 & 0x3) != VAR_0)
  FUNC_0(VAR_1, "bad stack segment %i", VAR_2);

 if (VAR_4 > 2)
  FUNC_0(VAR_1, "bad stack pages %u", VAR_4);

 VAR_1->ss1 = VAR_2;
 VAR_1->esp1 = VAR_3;
 VAR_1->lg->stack_pages = VAR_4;

 FUNC_1(VAR_1);
}
