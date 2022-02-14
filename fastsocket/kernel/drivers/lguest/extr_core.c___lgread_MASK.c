
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lg_cpu {TYPE_1__* lg; } ;
struct TYPE_2__ {scalar_t__ mem_base; } ;


 scalar_t__ FUNC_0 (void*,scalar_t__,unsigned int) ;
 int FUNC_1 (struct lg_cpu*,char*,unsigned long,unsigned int) ;
 int FUNC_2 (TYPE_1__*,unsigned long,unsigned int) ;
 int FUNC_3 (void*,int ,unsigned int) ;

void FUNC_4(struct lg_cpu *VAR_0, void *VAR_1, unsigned long VAR_2, unsigned VAR_3)
{
 if (!FUNC_2(VAR_0->lg, VAR_2, VAR_3)
     || FUNC_0(VAR_1, VAR_0->lg->mem_base + VAR_2, VAR_3) != 0) {

  FUNC_3(VAR_1, 0, VAR_3);
  FUNC_1(VAR_0, "bad read address %#lx len %u", VAR_2, VAR_3);
 }
}
