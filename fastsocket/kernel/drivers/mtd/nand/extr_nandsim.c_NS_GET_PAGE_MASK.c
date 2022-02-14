
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ns_mem {int dummy; } ns_mem ;
struct TYPE_2__ {size_t row; } ;
struct nandsim {TYPE_1__ regs; union ns_mem* pages; } ;



__attribute__((used)) static inline union ns_mem *FUNC_0(struct nandsim *VAR_0)
{
 return &(VAR_0->pages[VAR_0->regs.row]);
}
